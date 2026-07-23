/*
 * XREFs of ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x14014B5A4
 * Callers:
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14014B374 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 * Callees:
 *     SmKmStoreReferenceEx @ 0x1400E126C (SmKmStoreReferenceEx.c)
 *     ?SmFeReadInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z @ 0x14014B658 (-SmFeReadInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmReadPickStore(
        __int64 a1,
        int a2,
        int *a3,
        unsigned __int64 *a4,
        _DWORD *a5)
{
  unsigned int Initiate; // esi
  unsigned int v9; // ebx
  unsigned __int64 v10; // rax
  _DWORD *v11; // rdx
  bool v12; // zf
  int v14; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-20h] BYREF
  int v16; // [rsp+70h] [rbp+18h] BYREF

  v16 = *a3;
  Initiate = SMKM_STORE_MGR<SM_TRAITS>::SmFeReadInitiate(a1, a2, (unsigned int)&v16, (unsigned int)&v15, (__int64)&v14);
  if ( Initiate == 1024 )
    return (unsigned int)-1073741275;
  v9 = 0;
  ++*(_DWORD *)(a1 + 1868);
  if ( v15 && v15 > *(_QWORD *)&KeQueryPerformanceCounter(0LL) + (unsigned __int64)*(unsigned int *)(a1 + 1864) )
    return (unsigned int)-1073741763;
  v10 = SmKmStoreReferenceEx(a1, Initiate);
  if ( !v10 )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    v11 = a5;
    v12 = v14 == 0;
    *a4 = v10;
    *v11 = !v12;
    *a3 = v16;
  }
  return v9;
}
