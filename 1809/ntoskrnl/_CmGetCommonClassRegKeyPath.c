/*
 * XREFs of _CmGetCommonClassRegKeyPath @ 0x140597C9C
 * Callers:
 *     _CmOpenCommonClassRegKeyWorker @ 0x1405C73A4 (_CmOpenCommonClassRegKeyWorker.c)
 *     PiDqGetRelativeObjectRegPath @ 0x1406DB1C0 (PiDqGetRelativeObjectRegPath.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1408F76AC (_CmDeleteCommonClassRegKeyWorker.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140015EF4 (RtlStringCchPrintfExW.c)
 *     _CmValidateInstallerClassName @ 0x140597DE4 (_CmValidateInstallerClassName.c)
 */

signed int __fastcall CmGetCommonClassRegKeyPath(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        int a4,
        int a5,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        unsigned int *a8)
{
  int v11; // esi
  signed int result; // eax
  const wchar_t *v13; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned int v21; // r9d
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  unsigned int v25; // r9d

  if ( (a3 & 0x60) == 0x60 )
    return -1073741811;
  if ( (unsigned __int8)a3 == 32 )
  {
    v11 = (unsigned __int8)a3 - 30;
    result = CmValidateInstallerClassName();
  }
  else
  {
    if ( (unsigned __int8)a3 != 64 )
      return -1073741811;
    v11 = 4;
    result = CmValidateInstallerClassName();
  }
  if ( result < 0 )
    return result;
  v13 = L"System\\CurrentControlSet\\Control\\Class";
  if ( v11 != 2 )
    v13 = L"System\\CurrentControlSet\\Control\\DeviceClasses";
  if ( (a3 & 0x200) == 0 )
  {
    v14 = -1LL;
    v15 = -1LL;
    do
      ++v15;
    while ( v13[v15] );
    v16 = v15 + 1;
    if ( a2 )
    {
      do
        ++v14;
      while ( *(_WORD *)(a2 + 2 * v14) );
      v16 += v14 + 1;
    }
    v17 = -1;
    if ( v16 <= 0xFFFFFFFF )
      v17 = v16;
    result = v16 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v16 <= 0xFFFFFFFF )
    {
      if ( a8 )
        *a8 = v17;
      if ( v17 <= (unsigned int)cchDest )
      {
        if ( a2 )
          return RtlStringCchPrintfExW(pszDest, (unsigned int)cchDest, 0LL, 0LL, 0x800u, L"%s\\%s", v13, a2);
        else
          return RtlStringCchPrintfExW(pszDest, (unsigned int)cchDest, 0LL, 0LL, 0x800u, L"%s", v13);
      }
      return -1073741789;
    }
    return result;
  }
  if ( a4 )
  {
    if ( a4 != -1 )
    {
      v22 = -1LL;
      v23 = -1LL;
      do
        ++v23;
      while ( v13[v23] );
      v24 = v23 + 49;
      if ( a2 )
      {
        do
          ++v22;
        while ( *(_WORD *)(a2 + 2 * v22) );
        v24 += v22 + 1;
      }
      v25 = -1;
      if ( v24 <= 0xFFFFFFFF )
        v25 = v24;
      result = v24 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v24 <= 0xFFFFFFFF )
      {
        if ( a8 )
          *a8 = v25;
        if ( v25 > (unsigned int)cchDest )
          return -1073741789;
        if ( a2 )
          return RtlStringCchPrintfExW(
                   pszDest,
                   (unsigned int)cchDest,
                   0LL,
                   0LL,
                   0x800u,
                   L"%s\\%04u\\%s\\%s",
                   L"System\\CurrentControlSet\\Hardware Profiles",
                   a4,
                   v13,
                   a2);
        else
          return RtlStringCchPrintfExW(
                   pszDest,
                   (unsigned int)cchDest,
                   0LL,
                   0LL,
                   0x800u,
                   L"%s\\%04u\\%s",
                   L"System\\CurrentControlSet\\Hardware Profiles",
                   a4,
                   v13);
      }
      return result;
    }
    return -1073741811;
  }
  v18 = -1LL;
  v19 = -1LL;
  do
    ++v19;
  while ( v13[v19] );
  v20 = v19 + 52;
  if ( a2 )
  {
    do
      ++v18;
    while ( *(_WORD *)(a2 + 2 * v18) );
    v20 += v18 + 1;
  }
  v21 = -1;
  if ( v20 <= 0xFFFFFFFF )
    v21 = v20;
  result = v20 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v20 <= 0xFFFFFFFF )
  {
    if ( a8 )
      *a8 = v21;
    if ( v21 > (unsigned int)cchDest )
      return -1073741789;
    if ( a2 )
      return RtlStringCchPrintfExW(
               pszDest,
               (unsigned int)cchDest,
               0LL,
               0LL,
               0x800u,
               L"%s\\%s\\%s",
               L"System\\CurrentControlSet\\Hardware Profiles\\Current",
               v13,
               a2);
    else
      return RtlStringCchPrintfExW(
               pszDest,
               (unsigned int)cchDest,
               0LL,
               0LL,
               0x800u,
               L"%s\\%s",
               L"System\\CurrentControlSet\\Hardware Profiles\\Current",
               v13);
  }
  return result;
}
