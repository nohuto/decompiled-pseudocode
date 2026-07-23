/*
 * XREFs of ?StDmCombineBufferAddEntry@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_BUFFER@@PEAU_STDM_COMBINE_ENTRY_CACHE@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140148484
 * Callers:
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1401481A4 (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?BTreeSearchResultInit@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x1400E4AB4 (-BTreeSearchResultInit@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@US.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14011DD68 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140148904 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14014971C (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     qsort_s @ 0x1401967E0 (qsort_s.c)
 *     _alloca_probe @ 0x1401C5F20 (_alloca_probe.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x14030103C (-BTreeFindLeafSibling@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140301B38 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombineBufferAddEntry(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  __int64 v4; // rsi
  char *v5; // rbx
  unsigned int *v7; // r9
  unsigned __int64 v9; // r8
  char *v10; // rdi
  int v12; // ecx
  __int16 v13; // ax
  int v14; // eax
  unsigned int v15; // r11d
  unsigned int v16; // r10d
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned int v19; // r9d
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int *v22; // rdx
  unsigned __int8 v23; // cl
  unsigned int v24; // edi
  __int64 *v25; // r15
  struct NP_CONTEXT::NP_CTX *v26; // r14
  unsigned __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  char *v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  int *v34; // rdi
  int *v35; // r9
  unsigned int v36; // r8d
  int *v37; // rdx
  __int64 LeafSibling; // rax
  __int64 v39; // rax
  unsigned int v40; // r13d
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  unsigned __int64 v43; // rcx
  void *v44; // rsp
  void *v45; // rsp
  __int64 v46; // rdx
  unsigned __int64 v47; // rsi
  __int64 v48; // rbx
  void **v49; // rdx
  _DWORD v50[2]; // [rsp+30h] [rbp+0h] BYREF
  __int64 v51; // [rsp+38h] [rbp+8h] BYREF
  unsigned __int64 v52; // [rsp+40h] [rbp+10h]
  unsigned int v53; // [rsp+48h] [rbp+18h]
  unsigned int *v54; // [rsp+50h] [rbp+20h]
  _QWORD Context[2]; // [rsp+58h] [rbp+28h] BYREF
  unsigned __int64 v56; // [rsp+68h] [rbp+38h]
  _QWORD v57[3]; // [rsp+70h] [rbp+40h] BYREF
  int v58; // [rsp+88h] [rbp+58h]
  unsigned int v59; // [rsp+8Ch] [rbp+5Ch]

  v4 = 0LL;
  v5 = (char *)a2 + *((unsigned __int16 *)a2 + 3);
  v54 = a3;
  v51 = 0LL;
  v7 = a3;
  v52 = 0LL;
  v9 = (unsigned __int64)a2 + *((unsigned __int16 *)a2 + 2);
  v10 = v5 + 8;
  v56 = v9;
  if ( (unsigned __int64)(v5 + 8) > v9 )
  {
LABEL_52:
    v24 = -2147483643;
    goto LABEL_17;
  }
  *(_QWORD *)v5 = 0LL;
  if ( v5 )
    *(_DWORD *)v5 = *a4 & *(_DWORD *)(a1 + 808);
  *(_DWORD *)v5 *= 16;
  v12 = a4[1] & 0xFFF;
  v13 = 4096;
  if ( v12 )
    v13 = v12;
  *((_WORD *)v5 + 2) = v13;
  if ( v7[1] == a4[2] && v7[2] == (a4[1] & 0xFFF) )
  {
    v30 = *v7;
    if ( (_DWORD)v30 )
    {
      v31 = (char *)a2 + v30;
      if ( (unsigned __int64)&v5[(unsigned int)((_DWORD)v5 - ((_DWORD)a2 + v30))] <= v9 )
      {
        v32 = (unsigned __int64)(v31 + 8);
        v33 = (unsigned __int64)&v31[8 * (unsigned __int8)v31[6] + 8];
        while ( v32 < v33 )
        {
          if ( *(_DWORD *)(v32 + 4) != *(_DWORD *)v5 || *(_DWORD *)v32 != *a2 )
          {
            *(_QWORD *)v10 = *(_QWORD *)v32;
            v10 += 8;
            ++v5[6];
          }
          v32 += 8LL;
        }
        v23 = v5[6];
        if ( v23 )
          goto LABEL_36;
        goto LABEL_16;
      }
      goto LABEL_52;
    }
  }
  v14 = *(_DWORD *)(a1 + 184);
  if ( (v14 & 1) == 0 )
  {
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 128),
      a1 + 152);
    v14 = *(_DWORD *)(a1 + 184);
  }
  *(_DWORD *)(a1 + 184) = v14 | 1;
  *(_DWORD *)(*(_QWORD *)(a1 + 760) + 8LL) = a4[2];
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
    a1 + 128,
    *(unsigned int *)(a1 + 768),
    a1 + 152);
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
    a1 + 128,
    &v51,
    a1 + 152);
  v4 = v51;
  v15 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2LL * *a2) >> 13;
  v16 = 0;
  v53 = v15;
  v50[0] = 0;
  while ( v4 )
  {
    v17 = (unsigned __int16)*(_DWORD *)v4;
    v18 = v52 + 4;
    v52 = v18;
    if ( v18 >= v4 + 4 * (v17 + 4) )
    {
      if ( **(_DWORD **)((a1 + 144) & -(__int64)(a1 != -128)) == -1 )
      {
        LeafSibling = *(_QWORD *)(v4 + 8);
LABEL_49:
        if ( LeafSibling )
        {
          v18 = LeafSibling + 16;
          v51 = LeafSibling;
          v52 = LeafSibling + 16;
          v4 = LeafSibling;
        }
        else
        {
          v18 = 0LL;
        }
      }
      else
      {
        LeafSibling = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeFindLeafSibling(
                        a1 + 128,
                        v4);
        if ( LeafSibling != -1 )
          goto LABEL_49;
        v18 = -1LL;
      }
      v16 = v50[0];
      v15 = v53;
    }
    if ( !v18 )
      break;
    v19 = *(_DWORD *)v18;
    v20 = (unsigned int)(*(_DWORD *)v18 >> *(_DWORD *)(a1 + 456));
    _BitScanReverse((unsigned int *)&v21, v20);
    v22 = (unsigned int *)(*(unsigned int *)(a1 + 472)
                         + *(_DWORD *)(a1 + 464) * (v19 & *(_DWORD *)(a1 + 460))
                         + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v21 + 192) + 16 * (v20 ^ (unsigned int)(1 << v21))));
    if ( v22 != a4 )
    {
      if ( v22[2] != a4[2] )
        break;
      if ( ((a4[1] ^ v22[1]) & 0xFFF) == 0 )
      {
        v28 = (unsigned __int64)*v22 >> *(_BYTE *)(a1 + 812);
        if ( *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2 * v28) >> 13 >= v15 )
        {
          v29 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 6552LL);
          if ( v29 && (v29 == -1 || _bittest64(*(const signed __int64 **)(v29 + 16), v28))
            || (v22[1] & 0xFFFFF000) >= 0xFFEFF000 )
          {
            v4 = v51;
          }
          else
          {
            v4 = v51;
            if ( (unsigned __int64)(v10 + 8) > v56 )
              goto LABEL_52;
            *(_QWORD *)v10 = 0LL;
            *(_DWORD *)v10 = *v22;
            *((_DWORD *)v10 + 1) = v22[1] >> 12;
            v10 += 8;
            ++v5[6];
          }
        }
      }
    }
    v50[0] = ++v16;
    if ( v16 >= 0x10 )
      break;
  }
  v23 = v5[6];
  if ( !v23 )
    goto LABEL_16;
  v34 = (int *)&v10[-8 * v23];
  if ( v23 > 1u )
  {
    Context[1] = a1;
    Context[0] = 0LL;
    LODWORD(Context[0]) = *a2;
    qsort_s(v34, (unsigned __int8)v5[6], 8uLL, ST_STORE<SM_TRAITS>::StDmCombineTargetCompare, Context);
    v23 = v5[6];
  }
  v35 = &v34[2 * v23];
  if ( v34 < v35 )
  {
    do
    {
      v36 = *v34;
      v37 = v34 + 1;
      *(_QWORD *)v34 = 0LL;
      if ( v34 != (int *)-4LL )
        *v37 = v36 & *(_DWORD *)(a1 + 808);
      *v34 = v36 >> *(_DWORD *)(a1 + 812);
      v34 += 2;
      *v37 *= 16;
    }
    while ( v34 < v35 );
    v23 = v5[6];
  }
  v7 = v54;
LABEL_36:
  *v7 = *((unsigned __int16 *)a2 + 3);
  v7[1] = a4[2];
  v7[2] = a4[1] & 0xFFF;
  *((_WORD *)a2 + 3) = (_WORD)v5 + 8 * (v23 + 1) - (_WORD)a2;
LABEL_16:
  v24 = 0;
LABEL_17:
  v25 = (__int64 *)(a1 + 128);
  v26 = (struct NP_CONTEXT::NP_CTX *)((a1 + 144) & -(__int64)(a1 != -128));
  if ( **(_DWORD **)v26 != -1 )
  {
    if ( v4 )
    {
      v39 = *v25;
      if ( v4 != *v25 )
      {
        if ( v39 )
          v40 = *(unsigned __int8 *)(v39 + 2);
        else
          v40 = 0;
        v41 = 16LL * v40;
        v42 = v41 + 15;
        if ( v41 + 15 < v41 )
          v42 = 0xFFFFFFFFFFFFFF0LL;
        v43 = v42 & 0xFFFFFFFFFFFFFFF0uLL;
        v44 = alloca(v43);
        v45 = alloca(v43);
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultInit(
          v57,
          2);
        v46 = *(unsigned int *)(v4 + 16);
        v58 = 0;
        v57[0] = v50;
        v59 = v40;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
          v25,
          v46,
          v57);
        v47 = *(&v51 + 2 * v40 - 4);
        v48 = *(_QWORD *)&v50[4 * v40 - 8];
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
          v25,
          (__int64)v57);
        if ( **(_DWORD **)v26 != -1 )
        {
          v49 = (void **)(v47 - 8);
          if ( v47 <= v48 + 16 )
            v49 = (void **)(v48 + 8);
          NP_CONTEXT::NpLeafDerefInternal(v26, v49);
        }
      }
    }
  }
  return v24;
}
