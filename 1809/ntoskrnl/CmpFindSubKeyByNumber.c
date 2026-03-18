/*
 * XREFs of CmpFindSubKeyByNumber @ 0x1406B2CA8
 * Callers:
 *     CmDeleteLayeredKey @ 0x14026CBCC (CmDeleteLayeredKey.c)
 *     CmpClearKeyAccessBits @ 0x1406B2B50 (CmpClearKeyAccessBits.c)
 *     CmpEnumerateLayeredKey @ 0x1407EFDA0 (CmpEnumerateLayeredKey.c)
 *     CmpDoAccessCheckOnSubtree @ 0x1407F4F8C (CmpDoAccessCheckOnSubtree.c)
 *     CmpCopySyncTree2 @ 0x1407FCC24 (CmpCopySyncTree2.c)
 *     CmpPreserveSystemHiveData @ 0x1407FDCE4 (CmpPreserveSystemHiveData.c)
 *     CmpSyncSubKeysAfterDelete @ 0x1407FE968 (CmpSyncSubKeysAfterDelete.c)
 *     CmpMarkAllChildrenDirty @ 0x1407FFBFC (CmpMarkAllChildrenDirty.c)
 *     CmpUpdateParentForEachSon @ 0x140800418 (CmpUpdateParentForEachSon.c)
 *     CmpDeleteTree @ 0x1408034B8 (CmpDeleteTree.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1409CD3F0 (CmSelectQualifiedInstallLanguage.c)
 *     CmpFindDrivers @ 0x1409CE508 (CmpFindDrivers.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     CmpDoFindSubKeyByNumber @ 0x1405D3470 (CmpDoFindSubKeyByNumber.c)
 */

__int64 __fastcall CmpFindSubKeyByNumber(__int64 a1, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // eax
  unsigned int v8; // esi
  __int16 *v9; // rbp
  __int64 v10; // rdx
  __int16 *v11; // rax
  int v13; // [rsp+48h] [rbp+10h] BYREF
  int v14; // [rsp+4Ch] [rbp+14h]

  v4 = 0;
  v14 = 0;
  v6 = a2[5];
  v13 = -1;
  *a4 = -1;
  v8 = a3;
  v9 = 0LL;
  if ( a3 < v6 )
  {
    v10 = (unsigned int)a2[7];
LABEL_3:
    v11 = (__int16 *)(*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, v10, &v13);
    v9 = v11;
    if ( !v11 )
      return (unsigned int)-1073741670;
    *a4 = CmpDoFindSubKeyByNumber(a1, v11, v8);
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a1 + 208) > 1u )
  {
    v8 = a3 - v6;
    if ( a3 - v6 >= a2[6] )
      return v4;
    v10 = (unsigned int)a2[8];
    goto LABEL_3;
  }
LABEL_5:
  if ( v9 )
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v13);
  return v4;
}
