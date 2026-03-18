/*
 * XREFs of ?BTreeChangeKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14014EF18
 * Callers:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14014E94C (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 * Callees:
 *     ?BTreeFindSeperatorIndexEntry@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x140152814 (-BTreeFindSeperatorIndexEntry@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CO.c)
 *     ?Compare@ST_REGION_ENTRY_COMPARATOR@?$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z @ 0x1401537D0 (-Compare@ST_REGION_ENTRY_COMPARATOR@-$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z.c)
 *     ?BTreeDescendToSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAUPATH_ENTRY@1@KPEAUSEARCH_RESULT@1@@Z @ 0x140168CBC (-BTreeDescendToSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x14031F80C (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x14031F8C8 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v3; // r9
  __int64 *v5; // r9
  int *v8; // r13
  __int64 v9; // r12
  int v10; // esi
  _DWORD *v12; // r15
  __int64 v13; // r14
  bool v14; // cc
  __int64 v15; // rdx
  void **v16; // rdx
  unsigned int v17; // r8d
  struct NP_CONTEXT::NP_CTX *v18; // rcx
  int *v19; // rdx
  int v20; // r12d
  int v21; // eax
  struct NP_CONTEXT::NP_CTX *v22; // rcx
  __int64 v23; // rax
  int v24; // esi
  int v25; // esi
  __int64 v26; // [rsp+20h] [rbp-10h] BYREF
  _DWORD *v27; // [rsp+28h] [rbp-8h]
  int v28; // [rsp+78h] [rbp+48h] BYREF
  int v29; // [rsp+80h] [rbp+50h] BYREF
  void **v30; // [rsp+88h] [rbp+58h]

  v3 = (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
  v26 = 0LL;
  v5 = (__int64 *)(*(_QWORD *)a2 + 16 * v3);
  v27 = 0LL;
  v28 = a3;
  v8 = (int *)v5[1];
  v9 = *v5;
  v29 = *v8;
  v10 = ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v28, &v29);
  if ( v10 > 0 )
  {
    if ( (unsigned __int64)v8 < v9 + 4 * ((unsigned __int64)((unsigned int)(unsigned __int16)*(_DWORD *)v9 - 1) + 4) )
    {
      v29 = v8[1];
      v28 = a3;
LABEL_6:
      if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v28, &v29) < 0 )
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
    v28 = *(v8 - 1);
    v29 = a3;
    goto LABEL_6;
  }
  if ( !(unsigned int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindSeperatorIndexEntry(
                        a2,
                        v10 > 0,
                        &v26) )
    goto LABEL_4;
  v12 = v27;
  if ( v10 > 0 )
  {
    v29 = *v27;
    v28 = a3;
    if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v28, &v29) < 0 )
      goto LABEL_4;
  }
  else if ( !v10 )
  {
    *v27 = a3;
    goto LABEL_4;
  }
  v13 = a1 + 16;
  v14 = v10 <= 0;
  if ( v10 >= 0 )
  {
    if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 )
    {
      if ( **(_DWORD **)(v13 & -(__int64)(a1 != 0)) == -1 )
        v23 = *(_QWORD *)(v9 + 8);
      else
        v23 = 3358LL;
      v24 = *(_DWORD *)(v23 + 16);
      v29 = v24;
      v28 = a3;
      if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v28, &v29) < 0 )
      {
        *v12 = v24;
        goto LABEL_4;
      }
      return 0LL;
    }
    v14 = v10 <= 0;
  }
  v15 = !v14;
  v16 = (void **)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDescendToSibling(
                   &v26,
                   v15,
                   0LL);
  v30 = v16;
  v18 = (struct NP_CONTEXT::NP_CTX *)(v13 & -(__int64)(a1 != 0));
  if ( **(_DWORD **)v18 == -1 )
    v19 = (int *)*v16;
  else
    v19 = (int *)NP_CONTEXT::NpLeafRefInternal(v18, v16, v17);
  if ( v19 )
  {
    v20 = 0;
    if ( v10 >= 0 )
    {
      v25 = v19[4];
      v29 = v25;
      v28 = a3;
      if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v28, &v29) >= 0 )
      {
LABEL_24:
        v22 = (struct NP_CONTEXT::NP_CTX *)(v13 & -(__int64)(a1 != 0));
        if ( **(_DWORD **)v22 != -1 )
          NP_CONTEXT::NpLeafDerefInternal(v22, v30);
        if ( v20 )
          goto LABEL_4;
        return 0LL;
      }
      *v12 = v25;
    }
    else
    {
      v21 = *v19;
      v29 = a3;
      v28 = v19[(unsigned __int16)v21 + 3];
      if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v28, &v29) >= 0 )
        goto LABEL_24;
      *v12 = a3;
    }
    v20 = 1;
    goto LABEL_24;
  }
  return 0xFFFFFFFFLL;
}
