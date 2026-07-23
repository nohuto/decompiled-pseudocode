/*
 * XREFs of VfAvlLookupTreeNode @ 0x14016C530
 * Callers:
 *     VfTargetDriversRemove @ 0x14016C2E0 (VfTargetDriversRemove.c)
 *     VfTargetDriversGetNode @ 0x14030AF8C (VfTargetDriversGetNode.c)
 *     VfDevObjIsDeviceRemoved @ 0x140934FC8 (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x140935034 (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjRemove @ 0x1409353B8 (ViDevObjRemove.c)
 *     VfRemLockDeleteMemoryRange @ 0x140935768 (VfRemLockDeleteMemoryRange.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140935854 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x1409358F8 (ViRemLockFindSurrogate.c)
 *     VfTargetDriversEnableVerifier @ 0x140935944 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x140935B08 (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140935BF4 (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x140935E3C (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x140935F64 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x14093607C (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x140936218 (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x140936348 (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x140936404 (ViTargetWMIRegister.c)
 *     VfCheckForLookaside @ 0x14093FF78 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x14094000C (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x14094012C (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x140940860 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x140940C40 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x140940ECC (VfCheckForResource.c)
 *     VerifierIoWMIRegistrationControl @ 0x140946DC0 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     RtlLookupElementGenericTableFullAvl @ 0x140006B20 (RtlLookupElementGenericTableFullAvl.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1400F57F4 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1400F5828 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1400F5880 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlTableIndex @ 0x1400F58B8 (ViAvlTableIndex.c)
 *     ViAvlNodeInitializeSessionId @ 0x1400F5958 (ViAvlNodeInitializeSessionId.c)
 */

PVOID __fastcall VfAvlLookupTreeNode(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  PVOID v4; // r13
  __int64 v5; // rsi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r15
  unsigned __int64 i; // rsi
  __int64 v13; // r10
  __int64 v14; // rbx
  __int64 v16; // rax
  __int64 v17; // r10
  __int64 v18; // r13
  __int64 v19; // rcx
  PVOID NodeOrParent; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 Buffer; // [rsp+28h] [rbp-18h] BYREF
  __int64 v22; // [rsp+30h] [rbp-10h]
  TABLE_SEARCH_RESULT SearchResult; // [rsp+90h] [rbp+50h] BYREF
  __int64 v24; // [rsp+98h] [rbp+58h]

  v4 = 0LL;
  v5 = a4;
  if ( !a4 )
    v5 = *a1;
  v9 = a3 & 0xFFFFFFFFFFFFF000uLL;
  v10 = (v5 + (a3 & 0xFFF) + 4095) >> 12;
  if ( (a3 & 0xFFFFFFFFFFFFF000uLL) == a3 )
    goto LABEL_4;
  Buffer = a3;
  v16 = v5;
  if ( v10 > 1 )
    v16 = 4096LL;
  v22 = v16;
  ViAvlNodeInitializeSessionId((__int64)a1, (__int64)&Buffer);
  ViAvlTableIndex((__int64)a1, Buffer);
  ViAvlRaiseIrqlSafe(a2);
  v18 = 192 * v17;
  v19 = 192 * v17 + a1[2];
  v24 = 192 * v17;
  ViAvlAcquireTableLockAtDpcLevelSafe(v19, a2);
  v4 = RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(v18 + a1[2]), &Buffer, &NodeOrParent, &SearchResult);
  if ( !v4 )
  {
    ViAvlReleaseTableLockFromDpcLevel(v24 + a1[2], a2);
    --v10;
    v9 += 4096LL;
LABEL_4:
    v11 = v5 + a3;
    for ( i = 0LL; i < v10; ++i )
    {
      Buffer = v9;
      v24 = v9 + 4096;
      if ( v9 + 4096 <= v11 )
        v22 = 4096LL;
      else
        v22 = v11 - v9;
      ViAvlNodeInitializeSessionId((__int64)a1, (__int64)&Buffer);
      ViAvlTableIndex((__int64)a1, Buffer);
      ViAvlRaiseIrqlSafe(a2);
      v14 = 192 * v13;
      ViAvlAcquireTableLockAtDpcLevelSafe(192 * v13 + a1[2], a2);
      v4 = RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(v14 + a1[2]), &Buffer, &NodeOrParent, &SearchResult);
      if ( v4 )
        break;
      ViAvlReleaseTableLockFromDpcLevel(v14 + a1[2], a2);
      v9 = v24;
    }
  }
  return v4;
}
