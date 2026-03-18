/*
 * XREFs of ?StDmCombineBufferAddEntry@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_BUFFER@@PEAU_STDM_COMBINE_ENTRY_CACHE@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14014F424
 * Callers:
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14014F144 (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140105970 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeSearchResultInit@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x140108830 (-BTreeSearchResultInit@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@US.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14014F8BC (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140150718 (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     qsort_s @ 0x1401A0E80 (qsort_s.c)
 *     _alloca_probe @ 0x1401CC4E0 (_alloca_probe.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x14031EFFC (-BTreeFindLeafSibling@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x14031F80C (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombineBufferAddEntry(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  char *v6; // rbx
  unsigned int *v8; // r9
  unsigned __int64 v10; // r8
  char *v11; // rsi
  int v13; // ecx
  __int16 v14; // ax
  int v15; // eax
  unsigned int v16; // r11d
  unsigned int v17; // r10d
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned int v20; // r9d
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int *v23; // rdx
  unsigned __int8 v24; // cl
  unsigned int v25; // esi
  __int64 *v26; // r15
  struct NP_CONTEXT::NP_CTX *v27; // r14
  unsigned __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rax
  char *v32; // rdx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  int *v35; // rsi
  int *v36; // r9
  unsigned int v37; // r8d
  int *v38; // rdx
  __int64 LeafSibling; // rax
  __int64 v40; // rbx
  unsigned int v41; // r13d
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  unsigned __int64 v44; // rcx
  void *v45; // rsp
  void *v46; // rsp
  __int64 v47; // rdx
  unsigned __int64 v48; // rdi
  __int64 v49; // rbx
  void **v50; // rdx
  _DWORD v51[2]; // [rsp+30h] [rbp+0h] BYREF
  __int64 v52; // [rsp+38h] [rbp+8h] BYREF
  unsigned __int64 v53; // [rsp+40h] [rbp+10h]
  unsigned int v54; // [rsp+48h] [rbp+18h]
  unsigned int *v55; // [rsp+50h] [rbp+20h]
  __int64 Context; // [rsp+58h] [rbp+28h] BYREF
  __int64 v57; // [rsp+60h] [rbp+30h]
  unsigned __int64 v58; // [rsp+68h] [rbp+38h]
  _QWORD v59[5]; // [rsp+70h] [rbp+40h] BYREF

  v4 = *((unsigned __int16 *)a2 + 3);
  v5 = 0LL;
  v55 = a3;
  v6 = (char *)a2 + v4;
  Context = 0LL;
  v57 = 0LL;
  v8 = a3;
  v52 = 0LL;
  v10 = (unsigned __int64)a2 + *((unsigned __int16 *)a2 + 2);
  v53 = 0LL;
  v11 = v6 + 8;
  v58 = v10;
  if ( (unsigned __int64)(v6 + 8) > v10 )
  {
LABEL_55:
    v25 = -2147483643;
    goto LABEL_17;
  }
  *(_QWORD *)v6 = 0LL;
  if ( v6 )
    *(_DWORD *)v6 = *a4 & *(_DWORD *)(a1 + 808);
  *(_DWORD *)v6 *= 16;
  v13 = a4[1] & 0xFFF;
  v14 = 4096;
  if ( v13 )
    v14 = v13;
  *((_WORD *)v6 + 2) = v14;
  if ( v8[1] == a4[2] && v8[2] == (a4[1] & 0xFFF) )
  {
    v31 = *v8;
    if ( (_DWORD)v31 )
    {
      v32 = (char *)a2 + v31;
      if ( (unsigned __int64)&v6[(unsigned int)((_DWORD)v6 - ((_DWORD)a2 + v31))] <= v10 )
      {
        v33 = (unsigned __int64)(v32 + 8);
        v34 = (unsigned __int64)&v32[8 * (unsigned __int8)v32[6] + 8];
        while ( v33 < v34 )
        {
          if ( *(_DWORD *)(v33 + 4) != *(_DWORD *)v6 || *(_DWORD *)v33 != *a2 )
          {
            *(_QWORD *)v11 = *(_QWORD *)v33;
            v11 += 8;
            ++v6[6];
          }
          v33 += 8LL;
        }
        v24 = v6[6];
        if ( v24 )
          goto LABEL_36;
        goto LABEL_16;
      }
      goto LABEL_55;
    }
  }
  v15 = *(_DWORD *)(a1 + 184);
  if ( (v15 & 1) == 0 )
  {
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 128),
      a1 + 152);
    v15 = *(_DWORD *)(a1 + 184);
  }
  *(_DWORD *)(a1 + 184) = v15 | 1;
  *(_DWORD *)(*(_QWORD *)(a1 + 760) + 8LL) = a4[2];
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
    a1 + 128,
    *(unsigned int *)(a1 + 768),
    a1 + 152);
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
    a1 + 128,
    &v52,
    a1 + 152);
  v5 = v52;
  v16 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2LL * *a2) >> 13;
  v17 = 0;
  v54 = v16;
  v51[0] = 0;
  while ( v5 )
  {
    v18 = (unsigned __int16)*(_DWORD *)v5;
    v19 = v53 + 4;
    v53 = v19;
    if ( v19 >= v5 + 4 * (v18 + 4) )
    {
      if ( **(_DWORD **)((a1 + 144) & -(__int64)(a1 != -128)) == -1 )
      {
        LeafSibling = *(_QWORD *)(v5 + 8);
LABEL_52:
        if ( LeafSibling )
        {
          v19 = LeafSibling + 16;
          v52 = LeafSibling;
          v53 = LeafSibling + 16;
          v5 = LeafSibling;
        }
        else
        {
          v19 = 0LL;
        }
      }
      else
      {
        LeafSibling = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeFindLeafSibling(
                        a1 + 128,
                        v5);
        if ( LeafSibling != -1 )
          goto LABEL_52;
        v19 = -1LL;
      }
      v17 = v51[0];
      v16 = v54;
    }
    if ( !v19 )
      break;
    v20 = *(_DWORD *)v19;
    v21 = (unsigned int)(*(_DWORD *)v19 >> *(_DWORD *)(a1 + 456));
    _BitScanReverse((unsigned int *)&v22, v21);
    v23 = (unsigned int *)(*(unsigned int *)(a1 + 472)
                         + *(_DWORD *)(a1 + 464) * (v20 & *(_DWORD *)(a1 + 460))
                         + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v22 + 192) + 16 * (v21 ^ (unsigned int)(1 << v22))));
    if ( v23 != a4 )
    {
      if ( v23[2] != a4[2] )
        break;
      if ( ((a4[1] ^ v23[1]) & 0xFFF) == 0 )
      {
        v29 = (unsigned __int64)*v23 >> *(_BYTE *)(a1 + 812);
        if ( *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2 * v29) >> 13 >= v16 )
        {
          v30 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 6552LL);
          if ( v30 && (v30 == -1 || _bittest64(*(const signed __int64 **)(v30 + 16), v29))
            || (v23[1] & 0xFFFFF000) >= 0xFFEFF000 )
          {
            v5 = v52;
          }
          else
          {
            v5 = v52;
            if ( (unsigned __int64)(v11 + 8) > v58 )
              goto LABEL_55;
            *(_QWORD *)v11 = 0LL;
            *(_DWORD *)v11 = *v23;
            *((_DWORD *)v11 + 1) = v23[1] >> 12;
            v11 += 8;
            ++v6[6];
          }
        }
      }
    }
    v51[0] = ++v17;
    if ( v17 >= 0x10 )
      break;
  }
  v24 = v6[6];
  if ( !v24 )
    goto LABEL_16;
  v35 = (int *)&v11[-8 * v24];
  if ( v24 > 1u )
  {
    Context = *a2;
    v57 = a1;
    qsort_s(v35, (unsigned __int8)v6[6], 8uLL, ST_STORE<SM_TRAITS>::StDmCombineTargetCompare, &Context);
    v24 = v6[6];
  }
  v36 = &v35[2 * v24];
  if ( v35 < v36 )
  {
    do
    {
      v37 = *v35;
      v38 = v35 + 1;
      *(_QWORD *)v35 = 0LL;
      if ( v35 != (int *)-4LL )
        *v38 = v37 & *(_DWORD *)(a1 + 808);
      *v35 = v37 >> *(_DWORD *)(a1 + 812);
      v35 += 2;
      *v38 *= 16;
    }
    while ( v35 < v36 );
    v24 = v6[6];
  }
  v8 = v55;
LABEL_36:
  *v8 = *((unsigned __int16 *)a2 + 3);
  v8[1] = a4[2];
  v8[2] = a4[1] & 0xFFF;
  *((_WORD *)a2 + 3) = (_WORD)v6 + 8 * (v24 + 1) - (_WORD)a2;
LABEL_16:
  v25 = 0;
LABEL_17:
  v26 = (__int64 *)(a1 + 128);
  v27 = (struct NP_CONTEXT::NP_CTX *)((a1 + 144) & -(__int64)(a1 != -128));
  if ( **(_DWORD **)v27 != -1 )
  {
    if ( v5 )
    {
      v40 = *v26;
      if ( v5 != *v26 )
      {
        memset(v59, 0, sizeof(v59));
        if ( v40 )
          v41 = *(unsigned __int8 *)(v40 + 2);
        else
          v41 = 0;
        v42 = 16LL * v41;
        v43 = v42 + 15;
        if ( v42 + 15 < v42 )
          v43 = 0xFFFFFFFFFFFFFF0LL;
        v44 = v43 & 0xFFFFFFFFFFFFFFF0uLL;
        v45 = alloca(v44);
        v46 = alloca(v44);
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultInit(
          v59,
          2);
        v47 = *(unsigned int *)(v5 + 16);
        LODWORD(v59[3]) = 0;
        v59[0] = v51;
        HIDWORD(v59[3]) = v41;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
          v26,
          v47,
          v59);
        v48 = *(&v52 + 2 * v41 - 4);
        v49 = *(_QWORD *)&v51[4 * v41 - 8];
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
          v26,
          (__int64)v59);
        v50 = (void **)(v48 - 8);
        if ( v48 <= v49 + 16 )
          v50 = (void **)(v49 + 8);
        if ( **(_DWORD **)v27 != -1 )
          NP_CONTEXT::NpLeafDerefInternal(v27, v50);
      }
    }
  }
  return v25;
}
