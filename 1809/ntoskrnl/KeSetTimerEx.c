/*
 * XREFs of KeSetTimerEx @ 0x14001DF70
 * Callers:
 *     <none>
 * Callees:
 *     KiComputeDueTime @ 0x14001E090 (KiComputeDueTime.c)
 *     KiCancelTimer @ 0x14001E100 (KiCancelTimer.c)
 *     KiInsertTimerTable @ 0x1400581E0 (KiInsertTimerTable.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KiTimerWaitTest @ 0x1400C7AB0 (KiTimerWaitTest.c)
 *     KiTraceSetTimer @ 0x14029BB58 (KiTraceSetTimer.c)
 */

BOOLEAN __stdcall KeSetTimerEx(PKTIMER Timer, LARGE_INTEGER DueTime, LONG Period, PKDPC Dpc)
{
  _KDPC *v8; // rsi
  char CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  BOOLEAN v11; // al
  BOOLEAN v12; // r14
  int v13; // r9d
  int v15; // [rsp+70h] [rbp+18h] BYREF

  v8 = (_KDPC *)(KiWaitNever ^ __ROR8__(
                                 (unsigned __int64)Timer ^ _byteswap_uint64((unsigned __int64)Dpc ^ KiWaitAlways),
                                 KiWaitNever));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = KiCancelTimer(Timer, 0LL);
  Timer->Dpc = v8;
  Timer->Period = Period;
  v12 = v11;
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))KiComputeDueTime)(
                       Timer,
                       (LARGE_INTEGER)DueTime.QuadPart,
                       0LL,
                       &v15)
    && (v13 = v15,
        Timer->Header.SignalState = 0,
        (unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, (_DWORD)Timer, (_DWORD)Dpc, v13, 0LL)) )
  {
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
      KiTraceSetTimer(Timer, Dpc, 0LL);
    else
      _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFF7F);
  }
  else
  {
    KiTimerWaitTest(CurrentPrcb, Timer, 0LL);
  }
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return v12;
}
