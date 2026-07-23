/*
 * XREFs of _CmGetDeviceLogConfKeyPath @ 0x1406FDC64
 * Callers:
 *     _CmGetDeviceRegKeyPath @ 0x1405C8544 (_CmGetDeviceRegKeyPath.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140015EF4 (RtlStringCchPrintfExW.c)
 */

__int64 __fastcall CmGetDeviceLogConfKeyPath(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        unsigned int *a8)
{
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned int v11; // edx
  unsigned int v12; // ecx

  if ( (a3 & 0xFFFFFFEB) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)(a2 + 2 * v9) );
    v10 = v9 + 39;
    v11 = -1;
    if ( v10 <= 0xFFFFFFFF )
      v11 = v10;
    v12 = v10 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v10 <= 0xFFFFFFFF )
    {
      if ( a8 )
        *a8 = v11;
      if ( v11 > (unsigned int)cchDest )
        return (unsigned int)-1073741789;
      else
        return (unsigned int)RtlStringCchPrintfExW(
                               pszDest,
                               (unsigned int)cchDest,
                               0LL,
                               0LL,
                               0x800u,
                               L"%s\\%s\\%s",
                               L"System\\CurrentControlSet\\Enum",
                               a2,
                               L"LogConf");
    }
  }
  return v12;
}
