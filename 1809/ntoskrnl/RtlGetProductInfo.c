/*
 * XREFs of RtlGetProductInfo @ 0x14018D620
 * Callers:
 *     ExGetSuiteMask @ 0x1407550D0 (ExGetSuiteMask.c)
 *     ExpInitSystemPhase1 @ 0x1409B0434 (ExpInitSystemPhase1.c)
 * Callees:
 *     CompareVersions @ 0x14018D760 (CompareVersions.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x1401BAB10 (ZwQueryLicenseValue.c)
 */

BOOLEAN __stdcall RtlGetProductInfo(
        ULONG OSMajorVersion,
        ULONG OSMinorVersion,
        ULONG SpMajorVersion,
        ULONG SpMinorVersion,
        PULONG ReturnedProductType)
{
  ULONG v5; // esi
  BOOLEAN v6; // bl
  __int128 v7; // xmm6
  unsigned __int64 v9; // rax
  int v10; // r9d
  unsigned __int64 v11; // r10
  __int64 v12; // r11
  unsigned int v13; // [rsp+38h] [rbp-D0h] BYREF
  int v14; // [rsp+3Ch] [rbp-CCh] BYREF
  ULONG v15; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v16; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v17; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v18[52]; // [rsp+68h] [rbp-A0h] BYREF

  v5 = 0;
  v14 = 0;
  v6 = 1;
  v13 = 0;
  v15 = 0;
  LODWORD(v16) = OSMajorVersion;
  DWORD1(v16) = OSMinorVersion;
  DWORD2(v16) = SpMajorVersion;
  HIDWORD(v16) = SpMinorVersion;
  if ( !ReturnedProductType )
    return 0;
  *ReturnedProductType = 0;
  v7 = v16;
  v17 = xmmword_140369658;
  if ( (int)CompareVersions(&v16, &v17) < 0 )
    return 0;
  if ( (int)ZwQueryLicenseValue(L"$&", &v14, &v15, 4LL, &v13) < 0 || v14 != 4 || v13 != 4 )
  {
    *ReturnedProductType = -1412584499;
    return v6;
  }
  if ( (int)ZwQueryLicenseValue(L">@", &v14, v18, 200LL, &v13) < 0 )
    goto LABEL_7;
  if ( v14 != 3 || v13 < 0x14 || v13 != 20 * (v13 / 0x14uLL) )
    return 0;
  if ( v13 / 0x14uLL )
  {
    v9 = 0LL;
    v16 = v7;
    do
    {
      v17 = *(_OWORD *)&v18[5 * v9];
      if ( (int)CompareVersions(&v16, &v17) < 0 )
        v5 = v18[v12 + 4];
      v9 = (unsigned int)(v10 + 1);
    }
    while ( v9 < v11 );
    if ( v5 )
    {
      *ReturnedProductType = v5;
      return v6;
    }
  }
LABEL_7:
  *ReturnedProductType = v15;
  return v6;
}
