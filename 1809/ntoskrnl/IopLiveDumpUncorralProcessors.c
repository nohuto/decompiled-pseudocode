/*
 * XREFs of IopLiveDumpUncorralProcessors @ 0x140579628
 * Callers:
 *     IopLiveDumpCaptureMemoryPages @ 0x140578508 (IopLiveDumpCaptureMemoryPages.c)
 *     IopLiveDumpEndMirroringCallback @ 0x140578890 (IopLiveDumpEndMirroringCallback.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x140578B0C (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x1400D81F0 (KeRevertToUserGroupAffinityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     IopLiveDumpTraceSystemQuiesceEnd @ 0x1402860A4 (IopLiveDumpTraceSystemQuiesceEnd.c)
 *     IopLiveDumpUnLockPages @ 0x140286174 (IopLiveDumpUnLockPages.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x140578D24 (IopLiveDumpInitiateCorralStateChange.c)
 */

char __fastcall IopLiveDumpUncorralProcessors(__int64 a1, char a2)
{
  unsigned __int8 v4; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  IopLiveDumpInitiateCorralStateChange(a1, 5);
  IopLiveDumpInitiateCorralStateChange(a1, 6);
  PoAllProcIntrDisabled = 0;
  IopLiveDumpInitiateCorralStateChange(a1, -1);
  KeRevertToUserGroupAffinityThread((PGROUP_AFFINITY)(a1 + 96));
  if ( a2 == 1 )
  {
    v4 = *(_BYTE *)(a1 + 88);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v4);
  }
  IopLiveDumpUnLockPages();
  *(_DWORD *)(a1 + 8) &= ~1u;
  return IopLiveDumpTraceSystemQuiesceEnd();
}
