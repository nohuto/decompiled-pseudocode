/*
 * XREFs of ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14014759C
 * Callers:
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14014748C (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z @ 0x140305C6C (-StDmSinglePageRetrieveSync@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z.c)
 * Callees:
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140146008 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     SmSetThreadSystemPagePriority @ 0x140147788 (SmSetThreadSystemPagePriority.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1401477C8 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?StDmSinglePageTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x1401478D4 (-StDmSinglePageTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LO.c)
 *     ?StDmpSinglePageLookup@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAPEAU_ST_PAGE_RECORD@1@@Z @ 0x14014AF14 (-StDmpSinglePageLookup@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@P.c)
 *     SmFpFree @ 0x14014CB3C (SmFpFree.c)
 *     ?SmStMapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1403028FC (-SmStMapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?StDmIsCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z @ 0x140305370 (-StDmIsCurrentRegion@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageRetrieve(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v6; // r12d
  unsigned __int64 v7; // r15
  int v8; // ebx
  int v9; // edi
  __int64 v10; // rdi
  int v11; // ebp
  __int64 v12; // r14
  unsigned int v13; // eax
  __int16 v14; // ax
  int v15; // ecx
  unsigned int IsCurrentRegion; // eax
  unsigned int v17; // ebp
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // r8d
  __int64 v22; // r9
  __int64 v24; // rax
  __int64 v25; // r10
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r10
  __int64 v28; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v29[10]; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v30; // [rsp+A0h] [rbp+8h]
  unsigned int v33; // [rsp+B8h] [rbp+20h]

  v33 = a4;
  v6 = a4 & 2 | 1;
  v7 = 0LL;
  v8 = 0;
  if ( (a4 & 2) != 0 )
  {
    v10 = *(_QWORD *)(a3 + 16);
  }
  else
  {
    v9 = ST_STORE<SM_TRAITS>::StDmpSinglePageLookup(a1, a2, a3, v29);
    if ( v9 < 0 )
      return (unsigned int)v9;
    v10 = v29[0];
  }
  v11 = *(_DWORD *)v10 & *(_DWORD *)(a1 + 808);
  v12 = (unsigned int)(*(_DWORD *)v10 >> *(_DWORD *)(a1 + 812));
  if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0 )
  {
    v28 = 0LL;
    v13 = SmSetThreadSystemPagePriority(&v28, 0LL, 0LL);
    v8 = 1;
  }
  else
  {
    v13 = v33;
  }
  v30 = v13;
  *(_DWORD *)a5 = *(_DWORD *)v10;
  v14 = 4096;
  v15 = *(_DWORD *)(v10 + 4) & 0xFFF;
  if ( v15 )
    v14 = v15;
  *(_WORD *)(a5 + 4) = v14;
  *(_WORD *)(a5 + 6) = (unsigned __int8)*(_WORD *)a3;
  if ( *(_BYTE *)(a1 + 776) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 1016) + 24LL) )
    {
      *(_DWORD *)(a5 + 8) = *(_DWORD *)(v10 + 12);
      *(_DWORD *)(a5 + 12) = *(unsigned __int16 *)(v10 + 6);
    }
  }
  else
  {
    *(_DWORD *)(a5 + 8) = *(_DWORD *)(v10 + 8);
  }
  if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0 )
    IsCurrentRegion = 8;
  else
    IsCurrentRegion = ST_STORE<SM_TRAITS>::StDmIsCurrentRegion(a1, (unsigned int)v12);
  v17 = 16 * v11;
  if ( IsCurrentRegion == 8 )
  {
    v18 = *(_QWORD *)(a1 + 800);
    if ( (*(_BYTE *)(v18 + 6021) & 4) != 0 )
      v19 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v18, v12, v17, a4, 1u);
    else
      v19 = SMKM_STORE<SM_TRAITS>::SmStMapPhysicalRegion(v18, v12, v17, a4, 1);
    v7 = v19;
    if ( v19 <= 3 )
    {
      v9 = -2147483634;
      if ( v19 != 1 )
        v9 = -1073741550;
      goto LABEL_22;
    }
    LODWORD(v20) = v19;
  }
  else
  {
    v20 = *(_QWORD *)(a1 + 16LL * IsCurrentRegion + 1256) + v17;
  }
  *(_QWORD *)(a2 + 56) = a3;
  v9 = ST_STORE<SM_TRAITS>::StDmSinglePageTransfer(
         a1,
         *(_QWORD *)(a2 + 16),
         (unsigned int)v20 | v6,
         v33,
         *(_QWORD *)(a3 + 8),
         a5,
         a2);
  if ( v9 >= 0 )
    v9 = 0;
  if ( v7 )
  {
    v22 = *(_QWORD *)(a1 + 800);
    if ( (*(_BYTE *)(v22 + 6021) & 4) != 0 )
    {
      SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v22, v12, v21, v22);
    }
    else
    {
      v24 = *(_QWORD *)(v22 + 6216);
      v25 = *(_QWORD *)(v24 + 8 * v12);
      v26 = v25 & 0xFFFFFFFFFFFFFFFEuLL;
      v27 = v25 & 0xFFFFFFFFFFFFFFF8uLL;
      *(_QWORD *)(v24 + 8 * v12) = v26;
      if ( (v26 & 3) == 0 )
        SmFpFree(v22 + 6592, 5LL, KeGetCurrentThread(), v27);
    }
  }
LABEL_22:
  if ( v8 )
    SmSetThreadSystemPagePriority(&v28, v30, 1LL);
  return (unsigned int)v9;
}
