/*
 * XREFs of _CmGetMatchingFilteredDeviceListWorker @ 0x14093852C
 * Callers:
 *     _CmGetMatchingFilteredDeviceList @ 0x1406DF6E4 (_CmGetMatchingFilteredDeviceList.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140767814 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetDeviceRelationsList @ 0x14093847C (_CmGetDeviceRelationsList.c)
 */

__int64 __fastcall CmGetMatchingFilteredDeviceListWorker(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        __int64 a4,
        const WCHAR **a5,
        _WORD *a6,
        unsigned int a7,
        unsigned int *a8,
        __int16 a9)
{
  unsigned int MatchingDeviceListForSubkey; // ebx
  const WCHAR **v14; // rax
  char (__fastcall *v15)(__int64, __int64, unsigned int, __int64); // r9
  _WORD *v18; // [rsp+28h] [rbp-58h]
  unsigned int v19; // [rsp+30h] [rbp-50h]
  unsigned int *v20; // [rsp+38h] [rbp-48h]
  const WCHAR *v21; // [rsp+40h] [rbp-40h] BYREF
  __int64 v22; // [rsp+48h] [rbp-38h]
  __int64 v23; // [rsp+50h] [rbp-30h]
  _QWORD v24[5]; // [rsp+58h] [rbp-28h] BYREF

  memset(v24, 0, sizeof(v24));
  v21 = 0LL;
  *a8 = 0;
  v22 = 0LL;
  v23 = 0LL;
  if ( a7 )
    *a6 = 0;
  if ( (a3 & 0xFFFFFE00) != 0 || a9 )
    return (unsigned int)-1073741811;
  if ( (a3 & 0x7C) != 0 )
  {
    if ( !a2 )
      return (unsigned int)-1073741811;
    return (unsigned int)CmGetDeviceRelationsList(a1, a2, a3, (int)a6, a7, (__int64)a8);
  }
  if ( (a3 & 2) == 0 )
  {
    if ( (a3 & 0x80u) != 0 )
    {
      if ( !a2 )
        return (unsigned int)-1073741811;
      v20 = a8;
      v19 = a7;
      v23 = (__int64)a5;
      v14 = &v21;
      v18 = a6;
      v15 = CmClassFilterCallback;
      v21 = a2;
      v22 = a4;
      return (unsigned int)CmGetMatchingDeviceListForSubkey(
                             a1,
                             0LL,
                             BYTE1(a3) & 1,
                             (__int64)v15,
                             (__int64)v14,
                             v18,
                             v19,
                             v20);
    }
    if ( (a3 & 1) == 0 )
    {
      v14 = a5;
      v20 = a8;
      v19 = a7;
      v18 = a6;
      v15 = (char (__fastcall *)(__int64, __int64, unsigned int, __int64))a4;
      return (unsigned int)CmGetMatchingDeviceListForSubkey(
                             a1,
                             0LL,
                             BYTE1(a3) & 1,
                             (__int64)v15,
                             (__int64)v14,
                             v18,
                             v19,
                             v20);
    }
    if ( !a2 )
      return (unsigned int)-1073741811;
    return (unsigned int)CmGetMatchingDeviceListForSubkey(a1, a2, BYTE1(a3) & 1, a4, (__int64)a5, a6, a7, a8);
  }
  if ( !a2 )
    return (unsigned int)-1073741811;
  v24[4] = a5;
  v24[2] = 0LL;
  v24[0] = a2;
  v24[1] = 0LL;
  v24[3] = a4;
  MatchingDeviceListForSubkey = CmGetMatchingDeviceListForSubkey(
                                  a1,
                                  0LL,
                                  BYTE1(a3) & 1,
                                  (__int64)CmServiceFilterCallback,
                                  (__int64)v24,
                                  a6,
                                  a7,
                                  a8);
  if ( v24[1] )
    ExFreePoolWithTag((PVOID)v24[1], 0);
  return MatchingDeviceListForSubkey;
}
