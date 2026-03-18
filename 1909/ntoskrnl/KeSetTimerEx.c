/*
 * XREFs of KeSetTimerEx @ 0x1400E2FE0
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertTimerTable @ 0x140042A10 (KiInsertTimerTable.c)
 *     KiCancelTimer @ 0x140042CD0 (KiCancelTimer.c)
 *     KiExitDispatcher @ 0x140067E50 (KiExitDispatcher.c)
 *     KiTimerWaitTest @ 0x1400A35B0 (KiTimerWaitTest.c)
 *     KiComputeDueTime @ 0x1400E3100 (KiComputeDueTime.c)
 *     KiTraceSetTimer @ 0x1402B2BA0 (KiTraceSetTimer.c)
 */

BOOLEAN __stdcall KeSetTimerEx(PKTIMER Timer, LARGE_INTEGER DueTime, LONG Period, PKDPC Dpc)
{
  _KDPC *v8; // rsi
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  BOOLEAN v11; // al
  BOOLEAN v12; // r12
  unsigned int v13; // r9d
  unsigned int v15; // [rsp+70h] [rbp+18h] BYREF

  v8 = (_KDPC *)(KiWaitNever ^ __ROR8__(
                                 (unsigned __int64)Timer ^ _byteswap_uint64((unsigned __int64)Dpc ^ KiWaitAlways),
                                 KiWaitNever));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = KiCancelTimer((__int64)Timer, 0);
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
        KiInsertTimerTable((__int64)CurrentPrcb, (__int64)Timer, (__int64)Dpc, v13, 0LL)) )
  {
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
      KiTraceSetTimer(Timer, Dpc, 0LL);
    else
      _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFF7F);
  }
  else
  {
    KiTimerWaitTest((__int64)CurrentPrcb, (__int64)Timer, 0LL);
  }
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return v12;
}
