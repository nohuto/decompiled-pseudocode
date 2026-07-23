/*
 * XREFs of MiRestrictRangeToNode @ 0x14017F3EC
 * Callers:
 *     MiDescribePageRun @ 0x14017F0C4 (MiDescribePageRun.c)
 *     MiInitializeDynamicPfns @ 0x1402A68F4 (MiInitializeDynamicPfns.c)
 *     MiSwitchToPfns @ 0x1409BB954 (MiSwitchToPfns.c)
 *     MxCreateFreePfns @ 0x1409BBD10 (MxCreateFreePfns.c)
 *     MxInitializeFreeNodeDescriptors @ 0x1409BC3A8 (MxInitializeFreeNodeDescriptors.c)
 *     MxMapPfnRange @ 0x1409BC688 (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x1409BCBFC (MxComputeFreeNodeDescriptorRequirements.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiRestrictRangeToNode(unsigned __int64 a1, unsigned __int64 a2)
{
  KIRQL v4; // si
  unsigned __int64 v5; // r9
  int v7; // r8d
  unsigned int v8; // ecx
  unsigned __int64 v9; // r8
  int v10; // edx
  unsigned int v11; // ecx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = ExAcquireSpinLockShared(&dword_140439E38);
  if ( qword_14043B120 )
  {
    v7 = 0;
    if ( a1 >= *(_QWORD *)(qword_14043B120 + 16) )
    {
      v8 = 1;
      do
      {
        ++v8;
        ++v7;
      }
      while ( a1 >= *(_QWORD *)(qword_14043B120 + 16LL * v8) );
    }
    v9 = *(_QWORD *)(qword_14043B120 + 16LL * (unsigned int)(v7 + 1));
    if ( a1 + a2 > v9 )
      a2 = v9 - a1;
  }
  v5 = a2;
  if ( qword_14043B128 )
  {
    v10 = 0;
    if ( a1 >= *(_QWORD *)(qword_14043B128 + 16) )
    {
      v11 = 1;
      do
      {
        ++v11;
        ++v10;
      }
      while ( a1 >= *(_QWORD *)(qword_14043B128 + 16LL * v11) );
    }
    v12 = a1 + a2;
    v13 = *(_QWORD *)(qword_14043B128 + 16LL * (unsigned int)(v10 + 1));
    a2 = v13 - a1;
    if ( v12 <= v13 )
      a2 = v5;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140439E38);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v4);
  return a2;
}
