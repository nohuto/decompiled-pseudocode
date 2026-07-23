/*
 * XREFs of ?BTreeChangeKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x140147134
 * Callers:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x140146BC0 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 * Callees:
 *     ?BTreeDescendToSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAUPATH_ENTRY@1@KPEAUSEARCH_RESULT@1@@Z @ 0x140144D14 (-BTreeDescendToSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@.c)
 *     ?BTreeFindSeperatorIndexEntry@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x140144D88 (-BTreeFindSeperatorIndexEntry@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CO.c)
 *     ?Compare@ST_REGION_ENTRY_COMPARATOR@?$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z @ 0x1401535A8 (-Compare@ST_REGION_ENTRY_COMPARATOR@-$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140301B38 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140301BF4 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v4; // r9
  __int64 *v5; // r9
  int *v8; // r12
  __int64 v9; // r15
  int v10; // esi
  _DWORD *v12; // r14
  int v13; // esi
  unsigned int v14; // r8d
  void **v15; // r13
  int *v16; // rdx
  int v17; // r15d
  int v18; // eax
  int v19; // esi
  struct NP_CONTEXT::NP_CTX *v20; // rcx
  __int64 v21; // [rsp+20h] [rbp-10h] BYREF
  _DWORD *v22; // [rsp+28h] [rbp-8h]
  int v23; // [rsp+78h] [rbp+48h] BYREF
  int v24; // [rsp+80h] [rbp+50h] BYREF

  v4 = (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
  v23 = a3;
  v5 = (__int64 *)(*(_QWORD *)a2 + 16 * v4);
  v8 = (int *)v5[1];
  v9 = *v5;
  v24 = *v8;
  v10 = ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v23, &v24);
  if ( v10 > 0 )
  {
    if ( (unsigned __int64)v8 < v9 + 4 * ((unsigned __int64)((unsigned int)(unsigned __int16)*(_DWORD *)v9 - 1) + 4) )
    {
      v24 = v8[1];
      v23 = a3;
LABEL_6:
      if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v23, &v24) < 0 )
        goto LABEL_4;
      return 0LL;
    }
  }
  else if ( (unsigned __int64)v8 > v9 + 16 )
  {
    if ( !v10 )
    {
LABEL_4:
      *v8 = a3;
      return 1LL;
    }
    v23 = *(v8 - 1);
    v24 = a3;
    goto LABEL_6;
  }
  if ( !(unsigned int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindSeperatorIndexEntry(
                        a2,
                        v10 > 0,
                        (__int64)&v21) )
    goto LABEL_4;
  v12 = v22;
  if ( v10 <= 0 )
  {
    if ( !v10 )
    {
      *v22 = a3;
      goto LABEL_4;
    }
  }
  else
  {
    v24 = *v22;
    v23 = a3;
    if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v23, &v24) < 0 )
      goto LABEL_4;
  }
  if ( v10 >= 0 && **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 )
  {
    v13 = *(_DWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
    v24 = v13;
    v23 = a3;
    if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v23, &v24) < 0 )
    {
      *v12 = v13;
      goto LABEL_4;
    }
    return 0LL;
  }
  v15 = (void **)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDescendToSibling(
                   &v21,
                   v10 > 0,
                   0LL);
  if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 )
    v16 = (int *)*v15;
  else
    v16 = (int *)NP_CONTEXT::NpLeafRefInternal((struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0)), v15, v14);
  if ( v16 )
  {
    v17 = 0;
    if ( v10 >= 0 )
    {
      v19 = v16[4];
      v24 = v19;
      v23 = a3;
      if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v23, &v24) >= 0 )
        goto LABEL_31;
      *v12 = v19;
    }
    else
    {
      v18 = *v16;
      v24 = a3;
      v23 = v16[(unsigned __int16)v18 + 3];
      if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v23, &v24) >= 0 )
        goto LABEL_31;
      *v12 = a3;
    }
    v17 = 1;
LABEL_31:
    v20 = (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0));
    if ( **(_DWORD **)v20 != -1 )
      NP_CONTEXT::NpLeafDerefInternal(v20, v15);
    if ( v17 )
      goto LABEL_4;
    return 0LL;
  }
  return 0xFFFFFFFFLL;
}
