/*
 * XREFs of PnpQueuePendingSurpriseRemoval @ 0x1406EEB4C
 * Callers:
 *     PiEventRemovalPostSurpriseRemove @ 0x1406F0610 (PiEventRemovalPostSurpriseRemove.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14059CEB4 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14059E8F4 (PnpAcquireDependencyRelationsLock.c)
 *     IopEnumerateRelations @ 0x1406EF354 (IopEnumerateRelations.c)
 *     IopIsDescendantNode @ 0x1406EFA6C (IopIsDescendantNode.c)
 *     IopAllocateRelationList @ 0x1406EFC1C (IopAllocateRelationList.c)
 *     IopFreeRelationList @ 0x1406EFCDC (IopFreeRelationList.c)
 *     PnpAllocateCriticalMemory @ 0x1406EFE04 (PnpAllocateCriticalMemory.c)
 *     IopCheckIfMergeRequired @ 0x14083BCC8 (IopCheckIfMergeRequired.c)
 *     IopMergeRelationLists @ 0x14083BDC8 (IopMergeRelationLists.c)
 */

_QWORD *__fastcall PnpQueuePendingSurpriseRemoval(PVOID a1, void **a2, int a3, int a4)
{
  PVOID v4; // rbp
  __int64 CriticalMemory; // rbx
  struct _KTHREAD *CurrentThread; // rax
  PVOID v10; // rsi
  PVOID *v11; // r14
  __int64 *v12; // rax
  char v13; // r9
  __int64 v14; // r11
  __int64 v15; // r11
  PVOID *v17; // rdi
  __int64 v18; // r8
  __int64 RelationList; // rax
  PVOID *v20; // rax
  PVOID **v21; // rcx
  __int64 v22; // [rsp+30h] [rbp-38h] BYREF
  int v23; // [rsp+78h] [rbp+10h] BYREF
  int v24; // [rsp+7Ch] [rbp+14h]

  v4 = *a2;
  CriticalMemory = 0LL;
  CurrentThread = KeGetCurrentThread();
  *a2 = 0LL;
  v10 = v4;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopSurpriseRemoveListLock, 1u);
  PnpAcquireDependencyRelationsLock(1);
  v11 = (PVOID *)IopPendingSurpriseRemovals;
  while ( v11 != &IopPendingSurpriseRemovals )
  {
    v17 = v11;
    v11 = (PVOID *)*v11;
    if ( v17[7] == a1 )
    {
      CriticalMemory = (__int64)v17;
      v10 = v17[8];
      break;
    }
    if ( (unsigned __int8)IopCheckIfMergeRequired(v17[8], v10) )
    {
      if ( v10 == v4 )
      {
        CriticalMemory = (__int64)v17;
        RelationList = IopAllocateRelationList(3LL);
        v10 = (PVOID)RelationList;
        if ( !RelationList )
        {
          v10 = v4;
          break;
        }
        IopMergeRelationLists(RelationList, v4, 0LL);
      }
      LOBYTE(v18) = 1;
      IopMergeRelationLists(v10, v17[8], v18);
      IopFreeRelationList(v17[8]);
      if ( (PVOID *)CriticalMemory == v17 )
      {
        *(_QWORD *)(CriticalMemory + 64) = 0LL;
      }
      else
      {
        v20 = (PVOID *)*v17;
        if ( *((PVOID **)*v17 + 1) != v17 )
          goto LABEL_28;
        v21 = (PVOID **)v17[1];
        if ( *v21 != v17 )
          goto LABEL_28;
        *v21 = v20;
        v20[1] = v21;
        ExFreePoolWithTag(v17, 0);
      }
    }
  }
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
  if ( v4 == v10 )
  {
    CriticalMemory = PnpAllocateCriticalMemory(3LL, 512LL, 112LL, 1416654416LL);
    v12 = (__int64 *)qword_140435CA8;
    if ( *(PVOID **)qword_140435CA8 != &IopPendingSurpriseRemovals )
LABEL_28:
      __fastfail(3u);
    *(_QWORD *)CriticalMemory = &IopPendingSurpriseRemovals;
    *(_QWORD *)(CriticalMemory + 8) = v12;
    *v12 = CriticalMemory;
    qword_140435CA8 = CriticalMemory;
  }
  else
  {
    IopFreeRelationList(v4);
  }
  v23 = 0;
  v24 = 0;
  while ( (unsigned __int8)IopEnumerateRelations((_DWORD)v10, (unsigned int)&v23, (unsigned int)&v22, 0, 0LL) )
  {
    if ( v22 )
      v14 = *(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL);
    else
      v14 = 0LL;
    if ( (*(_BYTE *)(v14 + 648) & 1) != 0 )
    {
      if ( (unsigned __int8)IopIsDescendantNode(v10) )
      {
        *(_QWORD *)(v15 + 648) &= ~1uLL;
        --*(_DWORD *)(*(_QWORD *)(v15 + 648) + 656LL);
      }
    }
  }
  *(_QWORD *)(CriticalMemory + 56) = a1;
  *(_DWORD *)(CriticalMemory + 84) = a3;
  *(_BYTE *)(CriticalMemory + 88) = v13;
  *(_QWORD *)(CriticalMemory + 64) = v10;
  *(_DWORD *)(CriticalMemory + 108) = a4;
  *(_BYTE *)(CriticalMemory + 104) = v13;
  ExReleaseResourceLite(&IopSurpriseRemoveListLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
