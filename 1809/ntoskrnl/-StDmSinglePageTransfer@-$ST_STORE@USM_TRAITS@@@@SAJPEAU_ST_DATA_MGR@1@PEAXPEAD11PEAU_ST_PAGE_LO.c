/*
 * XREFs of ?StDmSinglePageTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x1401478D4
 * Callers:
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14014759C (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?StDmDeviceIoTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@PEAU_ST_DEVICE_IO@1@@Z @ 0x1403048A4 (-StDmDeviceIoTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@PEAU_ST.c)
 * Callees:
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x140147994 (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
 *     SmMapPage @ 0x14014A87C (SmMapPage.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmSinglePageTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v10; // rdi
  __int64 v11; // r9
  int v12; // ebx
  __int64 v13; // rax
  char v14; // dl
  __int64 v15; // r8
  unsigned __int64 v16; // r9
  char v18; // [rsp+68h] [rbp+20h] BYREF

  v10 = a4 & -(__int64)(a4 != 0);
  v11 = -a4;
  v12 = v11 != 0 ? 4 : 0;
  if ( (v11 != 0 ? 4 : 0) != 0 )
  {
    v13 = SmMapPage(a5, &v18);
    v14 = v12 | 0x10;
    v15 = v13;
    if ( (*(_DWORD *)(v10 + 8) & 0x8000000) == 0 )
      v14 = v12;
    LOBYTE(v12) = v14;
  }
  else
  {
    v15 = a5;
  }
  if ( !v15 )
    return 3221225626LL;
  v16 = (v15 + ((unsigned __int64)*(unsigned __int16 *)(a6 + 6) << 12)) | 1;
  if ( (v12 & 0x10) == 0 )
    v16 = v15 + ((unsigned __int64)*(unsigned __int16 *)(a6 + 6) << 12);
  return ST_STORE<SM_TRAITS>::StDmSinglePageCopy(a1, a2, a3, v16, a6, a7);
}
