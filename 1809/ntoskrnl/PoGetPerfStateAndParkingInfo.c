/*
 * XREFs of PoGetPerfStateAndParkingInfo @ 0x140131D74
 * Callers:
 *     ExpQueryProcessorInformationCounters @ 0x1405CEF74 (ExpQueryProcessorInformationCounters.c)
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     PpmSnapPerformanceAccumulation @ 0x14005BDC0 (PpmSnapPerformanceAccumulation.c)
 *     KeAddProcessorAffinityEx @ 0x140063A30 (KeAddProcessorAffinityEx.c)
 *     PopExecuteOnTargetProcessors @ 0x1400A5E08 (PopExecuteOnTargetProcessors.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     KeGetProcessorIndexFromNumber @ 0x1400A73B0 (KeGetProcessorIndexFromNumber.c)
 *     PpmPerfGetCurrentState @ 0x140131E94 (PpmPerfGetCurrentState.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

char __fastcall PoGetPerfStateAndParkingInfo(PPROCESSOR_NUMBER ProcNumber, void *a2, __int64 a3, unsigned __int64 *a4)
{
  ULONG ProcessorIndexFromNumber; // eax
  __int64 Prcb; // rax
  _DWORD *v10; // rsi
  struct _KPRCB *v11; // r14
  unsigned int v12; // ecx
  unsigned __int64 SnapTimeLast; // rax
  unsigned __int8 CurrentIrql; // bl
  char v15; // si
  struct _KPRCB *CurrentPrcb; // rcx
  char v17; // cl
  ULONG v18; // eax
  int v20; // [rsp+30h] [rbp-D0h] BYREF
  LARGE_INTEGER v21[12]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v22[44]; // [rsp+A0h] [rbp-60h] BYREF

  memset(a2, 0, 0x20uLL);
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  Prcb = KeGetPrcb(ProcessorIndexFromNumber);
  v10 = *(_DWORD **)(Prcb + 24176);
  v11 = (struct _KPRCB *)Prcb;
  PpmPerfGetCurrentState(Prcb, (_DWORD)a2 + 4, (unsigned int)&v20, (_DWORD)a2 + 8, (__int64)a2, (__int64)a2 + 24);
  if ( v10 )
  {
    *((_DWORD *)a2 + 3) = v10[94];
    v12 = v10[92];
    if ( v12 >= v10[93] )
      v12 = v10[93];
    *((_DWORD *)a2 + 4) = v12;
    if ( v10[78] != v10[80] )
      *((_BYTE *)a2 + 28) = 1;
    if ( v12 < 0x64 )
      *((_DWORD *)a2 + 6) |= 1u;
    LODWORD(SnapTimeLast) = (unsigned int)(100 * v20) / v10[77];
  }
  else
  {
    LODWORD(SnapTimeLast) = 100;
  }
  *((_DWORD *)a2 + 5) = SnapTimeLast;
  LOBYTE(SnapTimeLast) = v11->PowerState.Parked;
  *((_BYTE *)a2 + 29) = SnapTimeLast;
  if ( a4 )
  {
    SnapTimeLast = v11->PowerState.SnapTimeLast;
    *a4 = SnapTimeLast;
  }
  if ( a3 )
  {
    memset(v21, 0, 0x58uLL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v15 = PpmSnapPerformanceAccumulation((LARGE_INTEGER *)v11, 0, v11 != KeGetCurrentPrcb(), 0, v21);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(CurrentIrql);
    if ( v15 )
    {
      v17 = PpmPerformanceCounterShift;
      if ( v11->PowerState.Hypervisor == ProcHypervisorHvCounters )
        v17 = PpmHvPerformanceCounterShift;
      *(_QWORD *)(a3 + 8) = (unsigned __int64)v21[4].QuadPart >> v17;
      *(_QWORD *)(a3 + 16) = (unsigned __int64)v21[5].QuadPart >> v17;
      *(_DWORD *)a3 = (unsigned __int64)v21[0].QuadPart >> v17;
      SnapTimeLast = (unsigned __int64)v21[1].QuadPart >> v17;
      *(_DWORD *)(a3 + 4) = (unsigned __int64)v21[1].QuadPart >> v17;
    }
    else
    {
      v22[0] = 1310721;
      memset(&v22[1], 0, 0xA4uLL);
      v18 = KeGetProcessorIndexFromNumber(ProcNumber);
      KeAddProcessorAffinityEx(v22, v18);
      LOBYTE(SnapTimeLast) = PopExecuteOnTargetProcessors((__int64)v22, (__int64)PpmGetThroughputInfoCallback, a3, 0LL);
    }
  }
  return SnapTimeLast;
}
