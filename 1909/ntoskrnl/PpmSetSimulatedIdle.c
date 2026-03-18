/*
 * XREFs of PpmSetSimulatedIdle @ 0x1402EFEB8
 * Callers:
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140004AD0 (KeGetProcessorIndexFromNumber.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400FC050 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400FC2F0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PpmSetSimulatedIdle(__int64 a1)
{
  ULONG ProcessorIndexFromNumber; // eax
  char v4; // cl
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int8 CurrentIrql; // di
  _PPM_IDLE_STATES *IdleStates; // rax
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  struct _KPRCB *v10; // rcx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  Affinity.Mask = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  PreviousAffinity.Mask = 0LL;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(a1 + 4));
  if ( ProcessorIndexFromNumber == -1 )
    return 3221225485LL;
  *(_DWORD *)Affinity.Reserved = 0;
  Affinity.Reserved[2] = 0;
  v4 = KiProcessorIndexToNumberMappingTable[ProcessorIndexFromNumber] & 0x3F;
  Affinity.Group = (unsigned int)KiProcessorIndexToNumberMappingTable[ProcessorIndexFromNumber] >> 6;
  Affinity.Mask = 1LL << v4;
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  IdleStates = CurrentPrcb->PowerState.IdleStates;
  if ( IdleStates )
  {
    v9 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 < IdleStates->ProcessorIdleCount )
    {
      IdleStates->IdleOverride = 1;
      v8 = 0;
      IdleStates->OverrideIndex = v9;
    }
    else
    {
      v8 = -1073741811;
    }
  }
  else
  {
    v8 = -1073741637;
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v10 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v10);
  }
  __writecr8(CurrentIrql);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v8;
}
