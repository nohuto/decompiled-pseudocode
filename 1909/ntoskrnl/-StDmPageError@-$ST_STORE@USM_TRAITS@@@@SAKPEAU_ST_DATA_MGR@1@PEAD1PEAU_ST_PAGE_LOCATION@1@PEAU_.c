/*
 * XREFs of ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@J@Z @ 0x1403228E0
 * Callers:
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x1401623F4 (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
 * Callees:
 *     SmEtwEnabled @ 0x1400D7B48 (SmEtwEnabled.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14032223C (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 *     SmEtwLogStoreCorruption @ 0x140324408 (SmEtwLogStoreCorruption.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageError(
        __int64 a1,
        void *a2,
        UCHAR *a3,
        ULONG_PTR a4,
        __int64 a5,
        int a6)
{
  int v6; // eax
  __int64 v11; // rdx
  ULONGLONG *v12; // rcx
  __int64 v13; // r9
  char v14; // al
  unsigned int v15; // ebx
  __int64 result; // rax
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v6 = *(_DWORD *)(a1 + 776);
  v17 = 0LL;
  v12 = SmEtwEnabled((_BYTE)v6 == 0 ? 2 : 0);
  if ( v12 )
  {
    if ( a6 == -1073741116 )
    {
      BYTE1(v17) = 2;
    }
    else
    {
      v14 = BYTE1(v17);
      v11 = 1LL;
      if ( a6 == -1073741761 )
        v14 = 1;
      BYTE1(v17) = v14;
    }
    SmEtwLogStoreCorruption(v12, v11, a1, a2, *(_WORD *)(v13 + 4), &v17);
  }
  v15 = (*(_DWORD *)(a1 + 832) >> 5) & 3;
  if ( v15 >= 2 && (_BYTE)KdDebuggerEnabled )
    __debugbreak();
  if ( (*(_DWORD *)(a1 + 776) & 0x40000) == 0
    || a6 != -1073741116
    || (result = ST_STORE<SM_TRAITS>::StDmHandleDecompressionFailure(a1, a2, a3, a4, a5), !(_DWORD)result) )
  {
    if ( v15 >= 3 )
      KeBugCheckEx(0x12Bu, a6, *(unsigned __int16 *)(a4 + 4), (ULONG_PTR)a2, (ULONG_PTR)a3);
    return 0LL;
  }
  return result;
}
