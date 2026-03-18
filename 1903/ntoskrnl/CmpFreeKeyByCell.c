/*
 * XREFs of CmpFreeKeyByCell @ 0x140631398
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x14008BE7C (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x140280714 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x140280C1C (CmpCreateTombstone.c)
 *     CmpCreateChild @ 0x140630518 (CmpCreateChild.c)
 *     CmpTransMgrFreeVolatileData @ 0x140631678 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x14063846C (CmDeleteKey.c)
 *     CmpCleanupLightWeightPrepare @ 0x1406E20D8 (CmpCleanupLightWeightPrepare.c)
 *     CmpCommitDeleteKeyUoW @ 0x1406F7DE0 (CmpCommitDeleteKeyUoW.c)
 *     CmpCommitAddKeyUoW @ 0x140715E20 (CmpCommitAddKeyUoW.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140835D24 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140837D64 (CmpSyncSubKeysAfterDelete.c)
 *     CmRestoreKey @ 0x14083A914 (CmRestoreKey.c)
 *     CmpDeleteTree @ 0x14083C8B4 (CmpDeleteTree.c)
 *     CmpCommitRenameKeyUoW @ 0x14083C9BC (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14083D034 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14083D8B8 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14083DEB0 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x14083EA38 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x14062DCA8 (HvFreeCell.c)
 *     CmpFreeValue @ 0x14062ED1C (CmpFreeValue.c)
 *     CmUnlockHiveSecurity @ 0x140631104 (CmUnlockHiveSecurity.c)
 *     CmLockHiveSecurityExclusive @ 0x140631124 (CmLockHiveSecurityExclusive.c)
 *     CmpMarkKeyDirty @ 0x140631144 (CmpMarkKeyDirty.c)
 *     CmpRemoveSubKey @ 0x1406D6948 (CmpRemoveSubKey.c)
 *     CmpFreeSecurityDescriptor @ 0x1406DB65C (CmpFreeSecurityDescriptor.c)
 *     CmpFreeKeyBody @ 0x1406DD154 (CmpFreeKeyBody.c)
 */

__int64 __fastcall CmpFreeKeyByCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  unsigned int v4; // r14d
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r15
  unsigned int i; // ebx
  unsigned int v10; // ebx
  _DWORD v12[2]; // [rsp+20h] [rbp-10h] BYREF
  _DWORD v13[2]; // [rsp+28h] [rbp-8h] BYREF
  int v14; // [rsp+78h] [rbp+48h] BYREF
  int v15; // [rsp+7Ch] [rbp+4Ch]

  v14 = -1;
  v12[0] = -1;
  v13[0] = -1;
  v4 = BugCheckParameter3;
  v15 = 0;
  v12[1] = 0;
  v13[1] = 0;
  CmLockHiveSecurityExclusive(BugCheckParameter2);
  if ( !CmpMarkKeyDirty(BugCheckParameter2, v4, a3) )
  {
    v10 = -1073741443;
    goto LABEL_21;
  }
  v6 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, v4, &v14);
  if ( !v6 )
    goto LABEL_22;
  if ( a3 == 1 )
  {
    if ( !(unsigned __int8)CmpRemoveSubKey(BugCheckParameter2) )
      goto LABEL_24;
    v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
           BugCheckParameter2,
           *(unsigned int *)(v6 + 16),
           v12);
    if ( !v7 )
      goto LABEL_24;
    if ( !(*(_DWORD *)(v7 + 20) + *(_DWORD *)(v7 + 24)) )
    {
      *(_WORD *)(v7 + 52) = 0;
      *(_DWORD *)(v7 + 56) = 0;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v12);
  }
  if ( (*(_BYTE *)(v6 + 2) & 0x42) != 0 )
    goto LABEL_17;
  if ( !*(_DWORD *)(v6 + 36) )
  {
LABEL_15:
    if ( *(_DWORD *)(v6 + 44) != -1 )
      CmpFreeSecurityDescriptor(BugCheckParameter2);
LABEL_17:
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v14);
    v6 = 0LL;
    if ( (unsigned __int8)CmpFreeKeyBody(BugCheckParameter2, v4) )
    {
      v10 = 0;
      goto LABEL_19;
    }
LABEL_22:
    v10 = -1073741670;
    goto LABEL_21;
  }
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         *(unsigned int *)(v6 + 40),
         v13);
  if ( v8 )
  {
    for ( i = 0; i < *(_DWORD *)(v6 + 36); ++i )
      CmpFreeValue(BugCheckParameter2, *(unsigned int *)(v8 + 4LL * i));
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v13);
    HvFreeCell(BugCheckParameter2, *(unsigned int *)(v6 + 40));
    goto LABEL_15;
  }
LABEL_24:
  v10 = -1073741670;
LABEL_19:
  if ( v6 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v14);
LABEL_21:
  CmUnlockHiveSecurity(BugCheckParameter2);
  return v10;
}
