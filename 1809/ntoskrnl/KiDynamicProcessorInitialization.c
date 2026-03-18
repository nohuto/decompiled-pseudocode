/*
 * XREFs of KiDynamicProcessorInitialization @ 0x14028D438
 * Callers:
 *     KiStartDynamicProcessor @ 0x140842DE8 (KiStartDynamicProcessor.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400A7900 (KeQueryActiveProcessorCountEx.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D6E70 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D81F0 (KeRevertToUserGroupAffinityThread.c)
 *     KeIpiGenericCall @ 0x140175910 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     KeWriteProtectProcessorState @ 0x1405723B8 (KeWriteProtectProcessorState.c)
 */

void __fastcall KiDynamicProcessorInitialization(__int64 a1)
{
  unsigned int v2; // ecx
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  ULONG Context; // [rsp+20h] [rbp-38h] BYREF
  ULONG Context_4; // [rsp+24h] [rbp-34h]
  struct _GROUP_AFFINITY Affinity; // [rsp+28h] [rbp-30h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+38h] [rbp-20h] BYREF

  v2 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
  Affinity.Group = v2 >> 6;
  *(_DWORD *)Affinity.Reserved = 0;
  Affinity.Reserved[2] = 0;
  Affinity.Mask = 1LL << (v2 & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  KeWriteProtectProcessorState(a1 - 384);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  Context_4 = KeQueryActiveProcessorCountEx(0xFFFFu);
  Context = Context_4;
  KeIpiGenericCall((PKIPI_BROADCAST_WORKER)KeOptimizeSpecCtrlSettings, (ULONG_PTR)&Context);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
