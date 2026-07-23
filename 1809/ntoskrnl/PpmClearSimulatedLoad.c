/*
 * XREFs of PpmClearSimulatedLoad @ 0x1402DB39C
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x1400A73B0 (KeGetProcessorIndexFromNumber.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D6F10 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D8290 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmClearSimulatedLoad(_PROCESSOR_NUMBER *a1)
{
  unsigned int v1; // ebx
  ULONG ProcessorIndexFromNumber; // eax
  char v3; // cl
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int8 CurrentIrql; // di
  _PROC_PERF_LOAD *Load; // rsi
  struct _KPRCB *v7; // rcx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  if ( a1->Reserved )
    return (unsigned int)-1073741811;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(a1);
  if ( ProcessorIndexFromNumber == -1 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *(_DWORD *)Affinity.Reserved = 0;
    Affinity.Reserved[2] = 0;
    v3 = KiProcessorIndexToNumberMappingTable[ProcessorIndexFromNumber] & 0x3F;
    Affinity.Group = (unsigned int)KiProcessorIndexToNumberMappingTable[ProcessorIndexFromNumber] >> 6;
    Affinity.Mask = 1LL << v3;
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    Load = CurrentPrcb->PowerState.Load;
    CurrentPrcb->PowerState.Load = 0LL;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v7 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v7->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v7);
    }
    __writecr8(CurrentIrql);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    if ( Load )
      ExFreePoolWithTag(Load, 0x704D5050u);
  }
  return v1;
}
