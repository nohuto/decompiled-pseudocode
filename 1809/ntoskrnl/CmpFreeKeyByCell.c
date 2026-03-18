/*
 * XREFs of CmpFreeKeyByCell @ 0x1405AD6F8
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x14000FBF0 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x14026CBCC (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x14026D05C (CmpCreateTombstone.c)
 *     CmpTransMgrFreeVolatileData @ 0x1405A9000 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x1405A9DD8 (CmDeleteKey.c)
 *     CmpCreateChild @ 0x1405AB7A4 (CmpCreateChild.c)
 *     CmpCleanupLightWeightUoWData @ 0x14069490C (CmpCleanupLightWeightUoWData.c)
 *     CmRenameKey @ 0x1407EDB14 (CmRenameKey.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x1407FC8C8 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpSyncSubKeysAfterDelete @ 0x1407FE968 (CmpSyncSubKeysAfterDelete.c)
 *     CmRestoreKey @ 0x1408013CC (CmRestoreKey.c)
 *     CmpDeleteTree @ 0x1408034B8 (CmpDeleteTree.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140803798 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140804024 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140804618 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140805288 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     CmpFreeKeyBody @ 0x1405AD664 (CmpFreeKeyBody.c)
 *     CmpFreeValue @ 0x1405ADB5C (CmpFreeValue.c)
 *     HvFreeCell @ 0x1405ADBD8 (HvFreeCell.c)
 *     CmpMarkKeyDirty @ 0x1405AE028 (CmpMarkKeyDirty.c)
 *     CmpRemoveSubKey @ 0x1405AE6EC (CmpRemoveSubKey.c)
 *     CmpFreeSecurityDescriptor @ 0x1405AF34C (CmpFreeSecurityDescriptor.c)
 */

__int64 __fastcall CmpFreeKeyByCell(ULONG_PTR BugCheckParameter2, unsigned int a2, char a3)
{
  ULONG_PTR v5; // r12
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r15
  unsigned int i; // ebx
  unsigned int v11; // ebx
  _DWORD v13[4]; // [rsp+20h] [rbp-10h] BYREF
  int v14; // [rsp+70h] [rbp+40h] BYREF
  int v15; // [rsp+74h] [rbp+44h]
  int v16; // [rsp+88h] [rbp+58h] BYREF
  int v17; // [rsp+8Ch] [rbp+5Ch]

  v15 = 0;
  v14 = -1;
  v16 = -1;
  v13[0] = -1;
  v5 = BugCheckParameter2 + 1776;
  v17 = 0;
  v13[1] = 0;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 1776, 0LL);
  if ( !(unsigned __int8)CmpMarkKeyDirty(BugCheckParameter2, a2) )
  {
    v11 = -1073741443;
    goto LABEL_21;
  }
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v14);
  if ( !v7 )
    goto LABEL_22;
  if ( a3 == 1 )
  {
    if ( !(unsigned __int8)CmpRemoveSubKey(BugCheckParameter2) )
      goto LABEL_24;
    v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
           BugCheckParameter2,
           *(unsigned int *)(v7 + 16),
           &v16);
    if ( !v8 )
      goto LABEL_24;
    if ( !(*(_DWORD *)(v8 + 20) + *(_DWORD *)(v8 + 24)) )
    {
      *(_WORD *)(v8 + 52) = 0;
      *(_DWORD *)(v8 + 56) = 0;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v16);
  }
  if ( (*(_BYTE *)(v7 + 2) & 0x42) != 0 )
    goto LABEL_17;
  if ( !*(_DWORD *)(v7 + 36) )
  {
LABEL_15:
    if ( *(_DWORD *)(v7 + 44) != -1 )
      CmpFreeSecurityDescriptor(BugCheckParameter2);
LABEL_17:
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v14);
    v7 = 0LL;
    if ( CmpFreeKeyBody(BugCheckParameter2, a2) )
    {
      v11 = 0;
      goto LABEL_19;
    }
LABEL_22:
    v11 = -1073741670;
    goto LABEL_21;
  }
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         *(unsigned int *)(v7 + 40),
         v13);
  if ( v9 )
  {
    for ( i = 0; i < *(_DWORD *)(v7 + 36); ++i )
      CmpFreeValue(BugCheckParameter2, *(unsigned int *)(v9 + 4LL * i));
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v13);
    HvFreeCell(BugCheckParameter2, *(unsigned int *)(v7 + 40));
    goto LABEL_15;
  }
LABEL_24:
  v11 = -1073741670;
LABEL_19:
  if ( v7 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v14);
LABEL_21:
  ExReleasePushLockEx(v5, 0LL);
  return v11;
}
