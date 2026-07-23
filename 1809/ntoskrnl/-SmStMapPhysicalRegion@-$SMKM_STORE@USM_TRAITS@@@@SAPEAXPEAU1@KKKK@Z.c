/*
 * XREFs of ?SmStMapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1403028FC
 * Callers:
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140145E0C (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14014759C (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 * Callees:
 *     SmFpAllocate @ 0x14014BB74 (SmFpAllocate.c)
 */

unsigned __int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStMapPhysicalRegion(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        char a5)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx

  v5 = *(_QWORD *)(a1 + 6216);
  v6 = a2;
  v7 = a3;
  v8 = *(_QWORD *)(v5 + 8LL * a2);
  v9 = v8 & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (v8 & 3) != 0 )
  {
    v10 = *(_QWORD *)(v9 + 24);
  }
  else
  {
    v10 = SmFpAllocate((PEX_SPIN_LOCK)(a1 + 6592), 5, (__int64)KeGetCurrentThread(), v9, a5 & 1);
    if ( !v10 )
      return v10;
  }
  *(_QWORD *)(v5 + 8 * v6) |= ((a5 & 0x10) != 0) + 1LL;
  v10 += v7;
  return v10;
}
