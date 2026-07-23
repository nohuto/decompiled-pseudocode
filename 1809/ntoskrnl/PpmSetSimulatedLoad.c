/*
 * XREFs of PpmSetSimulatedLoad @ 0x1402DB7A4
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x1400A73B0 (KeGetProcessorIndexFromNumber.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D6F10 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D8290 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmSetSimulatedLoad(__int64 a1)
{
  _PROC_PERF_LOAD *Load; // rdi
  unsigned int v3; // ebx
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v5; // rbp
  _PROC_PERF_LOAD *PoolWithTag; // rax
  _PROC_PERF_LOAD *v7; // rsi
  unsigned int v8; // ecx
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *v11; // rcx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-48h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  Load = 0LL;
  if ( *(_BYTE *)(a1 + 3) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)a1);
    v5 = ProcessorIndexFromNumber;
    if ( ProcessorIndexFromNumber == -1 || *(_BYTE *)(a1 + 4) > 0x64u )
    {
      v3 = -1073741811;
    }
    else
    {
      PoolWithTag = (_PROC_PERF_LOAD *)ExAllocatePoolWithTag(NonPagedPoolNx, 2uLL, 0x704D5050u);
      v7 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      v8 = KiProcessorIndexToNumberMappingTable[v5];
      PoolWithTag->BusyPercentage = *(_BYTE *)(a1 + 4);
      PoolWithTag->FrequencyPercentage = *(_BYTE *)(a1 + 5);
      Affinity.Group = v8 >> 6;
      *(_DWORD *)Affinity.Reserved = 0;
      Affinity.Reserved[2] = 0;
      Affinity.Mask = 1LL << (v8 & 0x3F);
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      CurrentPrcb = KeGetCurrentPrcb();
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      Load = CurrentPrcb->PowerState.Load;
      CurrentPrcb->PowerState.Load = v7;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v11 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v11->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v11);
      }
      __writecr8(CurrentIrql);
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      v3 = 0;
    }
    if ( Load )
      ExFreePoolWithTag(Load, 0x704D5050u);
  }
  return v3;
}
