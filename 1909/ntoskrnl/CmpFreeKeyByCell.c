/*
 * XREFs of CmpFreeKeyByCell @ 0x140635218
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x140112918 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x140280474 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x14028097C (CmpCreateTombstone.c)
 *     CmpCreateChild @ 0x140634398 (CmpCreateChild.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406354F8 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x14063B4FC (CmDeleteKey.c)
 *     CmpCleanupLightWeightPrepare @ 0x1406E3758 (CmpCleanupLightWeightPrepare.c)
 *     CmpCommitDeleteKeyUoW @ 0x1406F9BA0 (CmpCommitDeleteKeyUoW.c)
 *     CmpCommitAddKeyUoW @ 0x140716A80 (CmpCommitAddKeyUoW.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140835384 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpSyncSubKeysAfterDelete @ 0x1408373C4 (CmpSyncSubKeysAfterDelete.c)
 *     CmRestoreKey @ 0x140839F74 (CmRestoreKey.c)
 *     CmpDeleteTree @ 0x14083BF14 (CmpDeleteTree.c)
 *     CmpCommitRenameKeyUoW @ 0x14083C01C (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14083C694 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14083CF18 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14083D510 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x14083E098 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x140631B28 (HvFreeCell.c)
 *     CmpFreeValue @ 0x140632B9C (CmpFreeValue.c)
 *     CmUnlockHiveSecurity @ 0x140634F84 (CmUnlockHiveSecurity.c)
 *     CmLockHiveSecurityExclusive @ 0x140634FA4 (CmLockHiveSecurityExclusive.c)
 *     CmpMarkKeyDirty @ 0x140634FC4 (CmpMarkKeyDirty.c)
 *     CmpRemoveSubKey @ 0x1406D6398 (CmpRemoveSubKey.c)
 *     CmpFreeSecurityDescriptor @ 0x1406DBF24 (CmpFreeSecurityDescriptor.c)
 *     CmpFreeKeyBody @ 0x1406DDDD4 (CmpFreeKeyBody.c)
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
