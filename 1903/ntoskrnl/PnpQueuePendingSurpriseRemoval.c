/*
 * XREFs of PnpQueuePendingSurpriseRemoval @ 0x14072FA4C
 * Callers:
 *     PiEventRemovalPostSurpriseRemove @ 0x14072EC74 (PiEventRemovalPostSurpriseRemove.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1406A27A8 (PnpReleaseDependencyRelationsLock.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406A2C00 (PnpAcquireDependencyRelationsLock.c)
 *     IopEnumerateRelations @ 0x140730274 (IopEnumerateRelations.c)
 *     IopIsDescendantNode @ 0x140730488 (IopIsDescendantNode.c)
 *     IopAllocateRelationList @ 0x1407310EC (IopAllocateRelationList.c)
 *     IopFreeRelationList @ 0x1407311AC (IopFreeRelationList.c)
 *     PnpAllocateCriticalMemory @ 0x1407312D4 (PnpAllocateCriticalMemory.c)
 *     IopCheckIfMergeRequired @ 0x1408757FC (IopCheckIfMergeRequired.c)
 *     IopMergeRelationLists @ 0x140875918 (IopMergeRelationLists.c)
 */

void __fastcall PnpQueuePendingSurpriseRemoval(PVOID a1, void **a2, int a3, int a4)
{
  __int64 CriticalMemory; // rbx
  PVOID v5; // rbp
  struct _KTHREAD *CurrentThread; // rax
  PVOID v10; // rdi
  PVOID *v11; // r14
  __int64 *v12; // rax
  __int64 v13; // r11
  __int64 v14; // r11
  PVOID *v15; // rsi
  __int64 v16; // r8
  __int64 RelationList; // rax
  PVOID *v18; // rax
  PVOID **v19; // rcx
  __int64 v20; // [rsp+30h] [rbp-38h] BYREF
  __int64 v21; // [rsp+78h] [rbp+10h] BYREF

  v21 = 0LL;
  CriticalMemory = 0LL;
  v5 = *a2;
  CurrentThread = KeGetCurrentThread();
  *a2 = 0LL;
  v10 = v5;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopSurpriseRemoveListLock, 1u);
  PnpAcquireDependencyRelationsLock(1);
  v11 = (PVOID *)IopPendingSurpriseRemovals;
  while ( v11 != &IopPendingSurpriseRemovals )
  {
    v15 = v11;
    v11 = (PVOID *)*v11;
    if ( v15[7] == a1 )
    {
      CriticalMemory = (__int64)v15;
      v10 = v15[8];
      break;
    }
    if ( (unsigned __int8)IopCheckIfMergeRequired(v15[8], v10) )
    {
      if ( v10 == v5 )
      {
        CriticalMemory = (__int64)v15;
        RelationList = IopAllocateRelationList(3LL);
        v10 = (PVOID)RelationList;
        if ( !RelationList )
        {
          v10 = v5;
          break;
        }
        IopMergeRelationLists(RelationList, v5, 0LL);
      }
      LOBYTE(v16) = 1;
      IopMergeRelationLists(v10, v15[8], v16);
      IopFreeRelationList(v15[8]);
      if ( (PVOID *)CriticalMemory == v15 )
      {
        *(_QWORD *)(CriticalMemory + 64) = 0LL;
      }
      else
      {
        v18 = (PVOID *)*v15;
        if ( *((PVOID **)*v15 + 1) != v15 )
          goto LABEL_29;
        v19 = (PVOID **)v15[1];
        if ( *v19 != v15 )
          goto LABEL_29;
        *v19 = v18;
        v18[1] = v19;
        ExFreePoolWithTag(v15, 0);
      }
    }
  }
  PnpReleaseDependencyRelationsLock();
  if ( v5 == v10 )
  {
    CriticalMemory = PnpAllocateCriticalMemory(3LL, 512LL, 112LL, 1416654416LL);
    v12 = (__int64 *)qword_1404608E8;
    if ( *(PVOID **)qword_1404608E8 != &IopPendingSurpriseRemovals )
LABEL_29:
      __fastfail(3u);
    *(_QWORD *)CriticalMemory = &IopPendingSurpriseRemovals;
    *(_QWORD *)(CriticalMemory + 8) = v12;
    *v12 = CriticalMemory;
    qword_1404608E8 = CriticalMemory;
  }
  else
  {
    IopFreeRelationList(v5);
  }
  v21 = 0LL;
  while ( (unsigned __int8)IopEnumerateRelations((_DWORD)v10, (unsigned int)&v21, (unsigned int)&v20, 0, 0LL) )
  {
    if ( v20 )
      v13 = *(_QWORD *)(*(_QWORD *)(v20 + 312) + 40LL);
    else
      v13 = 0LL;
    if ( (*(_BYTE *)(v13 + 648) & 1) != 0 )
    {
      if ( (unsigned __int8)IopIsDescendantNode(v10) )
      {
        *(_QWORD *)(v14 + 648) &= ~1uLL;
        --*(_DWORD *)(*(_QWORD *)(v14 + 648) + 656LL);
      }
    }
  }
  *(_QWORD *)(CriticalMemory + 56) = a1;
  *(_DWORD *)(CriticalMemory + 84) = a3;
  *(_BYTE *)(CriticalMemory + 88) = 0;
  *(_QWORD *)(CriticalMemory + 64) = v10;
  *(_DWORD *)(CriticalMemory + 108) = a4;
  *(_BYTE *)(CriticalMemory + 104) = 0;
  ExReleaseResourceLite(&IopSurpriseRemoveListLock);
  KeLeaveCriticalRegion();
}
