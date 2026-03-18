/*
 * XREFs of MiRestrictRangeToNode @ 0x140189354
 * Callers:
 *     MiDescribePageRun @ 0x140188F1C (MiDescribePageRun.c)
 *     MiInitializeDynamicPfns @ 0x1402BDC3C (MiInitializeDynamicPfns.c)
 *     MiSwitchToPfns @ 0x1409F25FC (MiSwitchToPfns.c)
 *     MxCreateFreePfns @ 0x1409F29D8 (MxCreateFreePfns.c)
 *     MxInitializeFreeNodeDescriptors @ 0x1409F2F50 (MxInitializeFreeNodeDescriptors.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x1409F304C (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MxMapPfnRange @ 0x1409F3334 (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x1409F37DC (MxComputeFreeNodeDescriptorRequirements.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140061A20 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiSearchNumaNodeTable @ 0x1400B45C0 (MiSearchNumaNodeTable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG_PTR __fastcall MiRestrictRangeToNode(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  KIRQL v4; // si
  ULONG_PTR v5; // rcx
  ULONG_PTR v6; // r9
  int v8; // edx
  unsigned int v9; // ecx
  ULONG_PTR v10; // rax
  ULONG_PTR v11; // r8
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = ExAcquireSpinLockShared(&dword_140465790);
  v5 = MiSearchNumaNodeTable(BugCheckParameter2)[2];
  if ( BugCheckParameter2 + a2 > v5 )
    a2 = v5 - BugCheckParameter2;
  v6 = a2;
  if ( qword_140465788 )
  {
    v8 = 0;
    if ( BugCheckParameter2 >= *(_QWORD *)(qword_140465788 + 16) )
    {
      v9 = 1;
      do
      {
        ++v9;
        ++v8;
      }
      while ( BugCheckParameter2 >= *(_QWORD *)(qword_140465788 + 16LL * v9) );
    }
    v10 = BugCheckParameter2 + a2;
    v11 = *(_QWORD *)(qword_140465788 + 16LL * (unsigned int)(v8 + 1));
    a2 = v11 - BugCheckParameter2;
    if ( v10 <= v11 )
      a2 = v6;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140465790);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v4);
  return a2;
}
