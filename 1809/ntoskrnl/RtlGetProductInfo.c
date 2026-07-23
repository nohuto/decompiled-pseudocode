/*
 * XREFs of RtlGetProductInfo @ 0x14018D760
 * Callers:
 *     ExGetSuiteMask @ 0x1407562C0 (ExGetSuiteMask.c)
 *     ExpInitSystemPhase1 @ 0x1409B1434 (ExpInitSystemPhase1.c)
 * Callees:
 *     CompareVersions @ 0x14018D8A0 (CompareVersions.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x1401BAC70 (ZwQueryLicenseValue.c)
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
  ULONG ResultDataSize; // [rsp+38h] [rbp-D0h] BYREF
  ULONG Type; // [rsp+3Ch] [rbp-CCh] BYREF
  ULONG Data; // [rsp+40h] [rbp-C8h] BYREF
  __int128 Data_8; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v17; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v18[52]; // [rsp+68h] [rbp-A0h] BYREF

  v5 = 0;
  Type = 0;
  v6 = 1;
  ResultDataSize = 0;
  Data = 0;
  LODWORD(Data_8) = OSMajorVersion;
  DWORD1(Data_8) = OSMinorVersion;
  DWORD2(Data_8) = SpMajorVersion;
  HIDWORD(Data_8) = SpMinorVersion;
  if ( !ReturnedProductType )
    return 0;
  *ReturnedProductType = 0;
  v7 = Data_8;
  v17 = xmmword_14036A5E8;
  if ( (int)CompareVersions(&Data_8, &v17) < 0 )
    return 0;
  if ( ZwQueryLicenseValue((PUNICODE_STRING)&ValueName, &Type, &Data, 4u, &ResultDataSize) < 0
    || Type != 4
    || ResultDataSize != 4 )
  {
    *ReturnedProductType = -1412584499;
    return v6;
  }
  if ( ZwQueryLicenseValue((PUNICODE_STRING)&stru_140354680, &Type, v18, 0xC8u, &ResultDataSize) < 0 )
    goto LABEL_7;
  if ( Type != 3 || ResultDataSize < 0x14 || ResultDataSize != 20 * (ResultDataSize / 0x14uLL) )
    return 0;
  if ( ResultDataSize / 0x14uLL )
  {
    v9 = 0LL;
    Data_8 = v7;
    do
    {
      v17 = *(_OWORD *)&v18[5 * v9];
      if ( (int)CompareVersions(&Data_8, &v17) < 0 )
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
  *ReturnedProductType = Data;
  return v6;
}
