/*
 * XREFs of ?VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1C0001978
 * Callers:
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C005F064 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005FE90 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 * Callees:
 *     ??_GVIDMM_PARTITION@@QEAAPEAXI@Z @ 0x1C0027F48 (--_GVIDMM_PARTITION@@QEAAPEAXI@Z.c)
 */

void __fastcall VidMmiClosePartition(volatile signed __int32 *P)
{
  unsigned int v2; // edx

  ExAcquirePushLockExclusiveEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  if ( _InterlockedExchangeAdd(P + 7, 0xFFFFFFFF) == 1 )
  {
    RtlAvlRemoveNode(&VIDMM_PARTITION::_PartitionTree, P);
    if ( P )
      VIDMM_PARTITION::`scalar deleting destructor'((PVOID)P, v2);
  }
  ExReleasePushLockExclusiveEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
}
