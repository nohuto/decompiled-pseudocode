/*
 * XREFs of PoGetPerfStateAndParkingInfo @ 0x140132310
 * Callers:
 *     ExpQueryProcessorInformationCounters @ 0x1405C9A04 (ExpQueryProcessorInformationCounters.c)
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140004AD0 (KeGetProcessorIndexFromNumber.c)
 *     KeGetPrcb @ 0x140005308 (KeGetPrcb.c)
 *     PopExecuteOnTargetProcessors @ 0x140098ED8 (PopExecuteOnTargetProcessors.c)
 *     KeAddProcessorAffinityEx @ 0x14009E060 (KeAddProcessorAffinityEx.c)
 *     PpmPerfGetCurrentState @ 0x140132524 (PpmPerfGetCurrentState.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PpmGetThroughputInfoCallback @ 0x1402FFA80 (PpmGetThroughputInfoCallback.c)
 */

char __fastcall PoGetPerfStateAndParkingInfo(PPROCESSOR_NUMBER ProcNumber, void *a2, __int64 a3, _QWORD *a4)
{
  ULONG ProcessorIndexFromNumber; // eax
  __int64 Prcb; // rax
  _DWORD *v10; // rbx
  __int64 v11; // rsi
  unsigned int v12; // r8d
  unsigned int v13; // ecx
  __int64 v14; // rax
  unsigned __int8 CurrentIrql; // bl
  __int64 v16; // rdi
  int ThroughputInfoCallback; // esi
  struct _KPRCB *CurrentPrcb; // rcx
  ULONG v19; // eax
  int v21; // [rsp+30h] [rbp-118h] BYREF
  _DWORD v22[44]; // [rsp+40h] [rbp-108h] BYREF

  memset(&v22[2], 0, 0xA0uLL);
  memset(a2, 0, 0x20uLL);
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  Prcb = KeGetPrcb(ProcessorIndexFromNumber);
  v10 = *(_DWORD **)(Prcb + 24176);
  v11 = Prcb;
  PpmPerfGetCurrentState(Prcb, (_DWORD)a2 + 4, (unsigned int)&v21, (_DWORD)a2 + 8, (__int64)a2, (__int64)a2 + 24);
  if ( v10 )
  {
    v12 = v10[77];
    *((_DWORD *)a2 + 3) = v10[94];
    v13 = v10[92];
    if ( v13 >= v10[93] )
      v13 = v10[93];
    *((_DWORD *)a2 + 4) = v13;
    if ( v10[78] != v10[80] )
      *((_BYTE *)a2 + 28) = 1;
    if ( v13 < 0x64 )
      *((_DWORD *)a2 + 6) |= 1u;
    LODWORD(v14) = (unsigned int)(100 * v21) / v10[77];
  }
  else
  {
    v12 = *(_DWORD *)(v11 + 68);
    LODWORD(v14) = 100;
  }
  *((_DWORD *)a2 + 5) = v14;
  LOBYTE(v14) = *(_BYTE *)(v11 + 24228);
  *((_BYTE *)a2 + 29) = v14;
  if ( a4 )
  {
    v14 = *(_QWORD *)(v11 + 24256);
    *a4 = v14;
  }
  if ( a3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v16 = v12;
    ThroughputInfoCallback = PpmGetThroughputInfoCallback(v11);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    LOBYTE(v14) = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( ThroughputInfoCallback < 0 )
    {
      v22[0] = 1310721;
      memset(&v22[1], 0, 0xA4uLL);
      v19 = KeGetProcessorIndexFromNumber(ProcNumber);
      KeAddProcessorAffinityEx(v22, v19);
      LOBYTE(v14) = PopExecuteOnTargetProcessors((__int64)v22, (__int64)PpmGetThroughputInfoCallback, a3, v16);
    }
  }
  return v14;
}
