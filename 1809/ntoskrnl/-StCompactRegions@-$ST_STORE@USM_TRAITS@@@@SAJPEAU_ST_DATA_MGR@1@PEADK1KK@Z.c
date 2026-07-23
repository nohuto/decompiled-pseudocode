/*
 * XREFs of ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x140146BC0
 * Callers:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14011E134 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmReuseCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_CURRENT_REGION@1@@Z @ 0x140145158 (-StDmReuseCurrentRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_CURRENT_REGION@1@.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1401451F8 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140303A60 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?BTreeSearchResultInit@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x1400E4AF8 (-BTreeSearchResultInit@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14011DE98 (-BTreeSearchResultCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14011DEDC (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x1401467C4 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14014687C (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x140146B50 (-BTreeIteratorCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeChangeKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x140147134 (-BTreeChangeKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x14014938C (-StDmpUpdateRegionState@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z.c)
 *     ?BTreeInsert@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x140149914 (-BTreeInsert@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140149C18 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14014A260 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ?BTreeDelete@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14014B1FC (-BTreeDelete@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140301154 (-BTreeFindLeafSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactRegions(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6)
{
  __int64 v8; // rcx
  _WORD *v9; // rax
  int v10; // r12d
  __int64 v11; // rdx
  _QWORD *v12; // rsi
  int v13; // ecx
  __int64 *v14; // r14
  int v15; // ebx
  unsigned __int64 v16; // r15
  _DWORD *v17; // r13
  __int64 v18; // rcx
  _DWORD *LeafSibling; // rax
  unsigned int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // r9d
  __int64 v25; // rbx
  int *v26; // rbx
  int v27; // r9d
  int v28; // edx
  int v29; // r8d
  unsigned int v30; // r11d
  size_t v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // r14
  int v35; // eax
  int v36; // edx
  int v37; // eax
  __int64 v38; // r8
  unsigned int v39; // ebx
  int *v40; // r14
  int v41; // eax
  int v43; // eax
  __int64 v44; // r8
  int v45; // [rsp+20h] [rbp-E0h] BYREF
  int v46; // [rsp+24h] [rbp-DCh]
  int v47; // [rsp+28h] [rbp-D8h]
  unsigned int v48; // [rsp+2Ch] [rbp-D4h]
  __int128 v49; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v50; // [rsp+40h] [rbp-C0h]
  unsigned int v51; // [rsp+44h] [rbp-BCh]
  unsigned int v52; // [rsp+48h] [rbp-B8h]
  __int64 v53; // [rsp+50h] [rbp-B0h]
  _WORD *v54; // [rsp+58h] [rbp-A8h]
  __int64 v55; // [rsp+60h] [rbp-A0h]
  int *v56; // [rsp+68h] [rbp-98h]
  _WORD *v57; // [rsp+70h] [rbp-90h]
  __int64 *v58; // [rsp+78h] [rbp-88h]
  _QWORD v59[3]; // [rsp+80h] [rbp-80h] BYREF
  int v60; // [rsp+98h] [rbp-68h]
  int v61; // [rsp+9Ch] [rbp-64h]
  char v62; // [rsp+A8h] [rbp-58h] BYREF

  v47 = 0;
  v8 = *(_QWORD *)(a1 + 1032);
  v55 = a2;
  v49 = 0uLL;
  v53 = a4;
  v9 = (_WORD *)(v8 + 2LL * a5);
  v50 = a3;
  v48 = a5;
  v57 = (_WORD *)(v8 + 2LL * a3);
  v54 = v9;
  if ( v57 == v9 )
    v10 = 0;
  else
    v10 = *v9 & 0x1FFF;
  v11 = *(_QWORD *)(a1 + 760);
  v46 = v10;
  ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, v11);
  v12 = (_QWORD *)(a1 + 88);
  v13 = *(_DWORD *)(a1 + 120);
  v14 = (__int64 *)(a1 + 64);
  v58 = (__int64 *)(a1 + 64);
  if ( (v13 & 1) != 0 )
  {
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 64),
      a1 + 88);
    v13 = *(_DWORD *)(a1 + 120);
  }
  *(_DWORD *)(a1 + 120) = v13 & 0xFFFFFFFE;
  **(_DWORD **)(a1 + 760) = a3 << *(_DWORD *)(a1 + 812);
  v15 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
          a1 + 64,
          *(unsigned int *)(a1 + 768),
          a1 + 88);
  if ( v15 != -1073741818 )
  {
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
      (unsigned __int8 **)(a1 + 64),
      &v49,
      a1 + 88);
    v16 = *((_QWORD *)&v49 + 1);
    v17 = (_DWORD *)v49;
    while ( 1 )
    {
      if ( v47 )
      {
        **(_DWORD **)(a1 + 760) = v50 << *(_DWORD *)(a1 + 812);
        v15 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
                v14,
                *(unsigned int *)(a1 + 768),
                a1 + 88);
        if ( v15 == -1073741818 )
          break;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
          (__int64 *)&v49,
          v14);
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
          (unsigned __int8 **)v14,
          &v49,
          a1 + 88);
        v16 = *((_QWORD *)&v49 + 1);
        v17 = (_DWORD *)v49;
      }
      if ( !v17 )
      {
LABEL_45:
        v15 = 0;
        break;
      }
      v16 += 4LL;
      v18 = (unsigned __int16)*v17;
      *((_QWORD *)&v49 + 1) = v16;
      if ( v16 < (unsigned __int64)&v17[v18 + 4] )
        goto LABEL_10;
      if ( **(_DWORD **)((unsigned __int64)(v14 + 2) & -(__int64)(v14 != 0LL)) == -1 )
      {
        LeafSibling = (_DWORD *)*((_QWORD *)v17 + 1);
      }
      else
      {
        LeafSibling = (_DWORD *)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindLeafSibling(
                                  v14,
                                  v17);
        if ( LeafSibling == (_DWORD *)-1LL )
          goto LABEL_11;
      }
      if ( LeafSibling )
      {
        v16 = (unsigned __int64)(LeafSibling + 4);
        *(_QWORD *)&v49 = LeafSibling;
        *((_QWORD *)&v49 + 1) = LeafSibling + 4;
        v17 = LeafSibling;
LABEL_10:
        LeafSibling = (_DWORD *)v16;
      }
LABEL_11:
      if ( LeafSibling == (_DWORD *)-1LL )
        goto LABEL_66;
      if ( !LeafSibling )
        goto LABEL_45;
      v20 = *LeafSibling;
      v21 = (unsigned int)(*(_DWORD *)(a1 + 464) * (*LeafSibling & *(_DWORD *)(a1 + 460)));
      v22 = v20 >> *(_DWORD *)(a1 + 456);
      _BitScanReverse((unsigned int *)&v23, v22);
      v52 = v20;
      v24 = *(_DWORD *)(a1 + 808);
      v25 = *(_QWORD *)(*(_QWORD *)(a1 + 8 * v23 + 192) + 16 * (v22 ^ (unsigned int)(1 << v23)));
      LODWORD(v23) = *(_DWORD *)(a1 + 812);
      v26 = (int *)(*(unsigned int *)(a1 + 472) + v21 + v25);
      v56 = v26;
      v27 = *v26 & v24;
      if ( (unsigned int)*v26 >> v23 != v50 )
        goto LABEL_45;
      v28 = 4096;
      v29 = *(_DWORD *)(a1 + 824);
      v30 = v48;
      if ( (v26[1] & 0xFFF) != 0 )
        v28 = v26[1] & 0xFFF;
      v51 = (unsigned int)(v28 + v29 + 15) >> 4;
      v31 = (-*(_DWORD *)(*(_QWORD *)(a1 + 1016) + 8LL) & (unsigned int)(v28
                                                                       + *(_DWORD *)(*(_QWORD *)(a1 + 1016) + 8LL)
                                                                       - 1))
          + v29;
      if ( v48 == v50 || v51 + (*v54 & 0x1FFF) <= *(_DWORD *)(a1 + 816) )
      {
        v32 = v53;
      }
      else
      {
        v10 = 0;
        v32 = v55;
        v30 = v50;
        v47 = 0;
        v54 = v57;
        v53 = v55;
        v46 = 0;
        v48 = v50;
      }
      if ( v27 != v10 || v50 != v30 )
      {
        if ( !v32 )
        {
          v15 = -1073741802;
          break;
        }
        memmove((void *)(v32 + (unsigned int)(16 * v10)), (const void *)(v55 + (unsigned int)(16 * v27)), v31);
        ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, v26);
        v33 = a1 + 96;
        v34 = a1 + 96;
        v35 = *(_DWORD *)(a1 + 112);
        v36 = v10 | (v48 << *(_DWORD *)(a1 + 812));
        v45 = v36;
        if ( v35 != -1 && v35 )
          v34 = *v12 + 16LL * (unsigned int)(v35 - 1);
        if ( *(_DWORD **)v34 == v17 )
        {
          *(_QWORD *)(v34 + 8) = v16;
        }
        else
        {
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
            (__int64 *)(a1 + 64),
            a1 + 88);
          if ( *(_DWORD *)(a1 + 112) == -1 )
          {
            *(_OWORD *)v34 = v49;
          }
          else
          {
            B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
              a1 + 64,
              (unsigned int)v17[4],
              a1 + 88);
            v43 = *(_DWORD *)(a1 + 112);
            if ( v43 != -1 && v43 )
              v33 = *v12 + 16LL * (unsigned int)(v43 - 1);
            *(_QWORD *)(v33 + 8) = v16;
          }
          v36 = v45;
        }
        if ( !v47 )
        {
          **(_DWORD **)(a1 + 760) = v36;
          v37 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
                  a1 + 64,
                  a1 + 88,
                  *(unsigned int *)(a1 + 768));
          if ( v37 )
          {
            if ( v37 == -1 )
            {
LABEL_66:
              v15 = -1073741818;
              break;
            }
            v38 = v52;
            *v56 = v45;
            B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
              a1 + 64,
              a1 + 88,
              v38);
            goto LABEL_29;
          }
          v47 = 1;
        }
        v40 = v56;
        **(_DWORD **)(a1 + 760) = *v56;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
          a1 + 64,
          a1 + 88,
          *(unsigned int *)(a1 + 768));
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
          (__int64 *)&v49,
          (__int64 *)(a1 + 64));
        v16 = 0LL;
        *v40 = v45;
        v45 = v52;
        v17 = 0LL;
        v49 = 0uLL;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultInit(
          v59,
          0);
        v60 = 0;
        v59[0] = &v62;
        v61 = 8;
        v15 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsert(
                a1 + 64,
                &v45,
                v59);
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultCleanup(
          a1 + 64,
          (__int64)v59,
          1);
        if ( v15 < 0 )
        {
          v44 = v52;
          *v40 = **(_DWORD **)(a1 + 760);
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
            a1 + 64,
            a1 + 88,
            v44);
          break;
        }
        v41 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDelete(
                a1 + 64,
                *(unsigned int *)(a1 + 768),
                a1 + 88);
        v15 = v41;
        if ( v41 < 0 )
        {
          if ( v41 == -1073741818 )
            break;
          __int2c();
        }
LABEL_29:
        v39 = v48;
        if ( v50 != v48 )
        {
          ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(a1, v50, -v51, 1LL);
          ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(a1, v39, v51, 0LL);
        }
        v10 = v46;
        v14 = (__int64 *)(a1 + 64);
      }
      v10 += v51;
      v46 = v10;
      if ( a6 && (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0) != 2 )
      {
        v15 = -2147483634;
        break;
      }
    }
  }
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
    (__int64 *)&v49,
    v58);
  return (unsigned int)v15;
}
