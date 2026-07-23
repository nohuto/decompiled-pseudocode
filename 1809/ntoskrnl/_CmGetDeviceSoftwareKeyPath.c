/*
 * XREFs of _CmGetDeviceSoftwareKeyPath @ 0x1406B35DC
 * Callers:
 *     _CmGetDeviceRegKeyPath @ 0x1405C8544 (_CmGetDeviceRegKeyPath.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140015EF4 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406B3704 (_CmGetDeviceSoftwareKey.c)
 */

__int64 __fastcall CmGetDeviceSoftwareKeyPath(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        int a4,
        char a5,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        unsigned int *a8)
{
  unsigned int DeviceSoftwareKey; // ecx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned int v13; // r8d
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned int v18; // r8d
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned int v21; // r8d
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned int v24; // r8d
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned int v27; // r8d
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned int v30; // r8d
  _WORD v31[48]; // [rsp+60h] [rbp-98h] BYREF

  if ( !*(_BYTE *)(a1 + 4) )
  {
    DeviceSoftwareKey = CmGetDeviceSoftwareKey(a1, a2, v31, a2, a5);
    if ( (DeviceSoftwareKey & 0x80000000) != 0 )
      return DeviceSoftwareKey;
    if ( (a3 & 0x200) == 0 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( v31[v11] );
      v12 = v11 + 40;
      v13 = -1;
      if ( v12 <= 0xFFFFFFFF )
        v13 = v12;
      DeviceSoftwareKey = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v12 <= 0xFFFFFFFF )
      {
        if ( a8 )
          *a8 = v13;
        if ( v13 <= (unsigned int)cchDest )
          return (unsigned int)RtlStringCchPrintfExW(
                                 pszDest,
                                 (unsigned int)cchDest,
                                 0LL,
                                 0LL,
                                 0x800u,
                                 L"%s\\%s",
                                 L"System\\CurrentControlSet\\Control\\Class",
                                 v31);
        return (unsigned int)-1073741789;
      }
      return DeviceSoftwareKey;
    }
    if ( !a4 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( v31[v25] );
      v26 = v25 + 91;
      v27 = -1;
      if ( v26 <= 0xFFFFFFFF )
        v27 = v26;
      DeviceSoftwareKey = v26 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v26 <= 0xFFFFFFFF )
      {
        if ( a8 )
          *a8 = v27;
        if ( v27 <= (unsigned int)cchDest )
          return (unsigned int)RtlStringCchPrintfExW(
                                 pszDest,
                                 (unsigned int)cchDest,
                                 0LL,
                                 0LL,
                                 0x800u,
                                 L"%s\\%s\\%s",
                                 L"System\\CurrentControlSet\\Hardware Profiles\\Current",
                                 L"System\\CurrentControlSet\\Control\\Class",
                                 v31);
        return (unsigned int)-1073741789;
      }
      return DeviceSoftwareKey;
    }
    if ( a4 != -1 )
    {
      v28 = -1LL;
      do
        ++v28;
      while ( v31[v28] );
      v29 = v28 + 88;
      v30 = -1;
      if ( v29 <= 0xFFFFFFFF )
        v30 = v29;
      DeviceSoftwareKey = v29 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v29 <= 0xFFFFFFFF )
      {
        if ( a8 )
          *a8 = v30;
        if ( v30 <= (unsigned int)cchDest )
          return (unsigned int)RtlStringCchPrintfExW(
                                 pszDest,
                                 (unsigned int)cchDest,
                                 0LL,
                                 0LL,
                                 0x800u,
                                 L"%s\\%04u\\%s\\%s",
                                 L"System\\CurrentControlSet\\Hardware Profiles",
                                 a4,
                                 L"System\\CurrentControlSet\\Control\\Class",
                                 v31);
        return (unsigned int)-1073741789;
      }
      return DeviceSoftwareKey;
    }
    return (unsigned int)-1073741811;
  }
  if ( (a3 & 0x200) == 0 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( *(_WORD *)(a2 + 2 * v22) );
    v23 = v22 + 49;
    v24 = -1;
    if ( v23 <= 0xFFFFFFFF )
      v24 = v23;
    DeviceSoftwareKey = v23 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v23 <= 0xFFFFFFFF )
    {
      if ( a8 )
        *a8 = v24;
      if ( v24 <= (unsigned int)cchDest )
        return (unsigned int)RtlStringCchPrintfExW(
                               pszDest,
                               (unsigned int)cchDest,
                               0LL,
                               0LL,
                               0x800u,
                               L"%s\\%s\\%s",
                               L"System\\CurrentControlSet\\Enum",
                               a2,
                               L"Driver Parameters");
      return (unsigned int)-1073741789;
    }
    return DeviceSoftwareKey;
  }
  if ( !a4 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_WORD *)(a2 + 2 * v16) );
    v17 = v16 + 100;
    v18 = -1;
    if ( v17 <= 0xFFFFFFFF )
      v18 = v17;
    DeviceSoftwareKey = v17 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v17 <= 0xFFFFFFFF )
    {
      if ( a8 )
        *a8 = v18;
      if ( v18 <= (unsigned int)cchDest )
        return (unsigned int)RtlStringCchPrintfExW(
                               pszDest,
                               (unsigned int)cchDest,
                               0LL,
                               0LL,
                               0x800u,
                               L"%s\\%s\\%s\\%s",
                               L"System\\CurrentControlSet\\Hardware Profiles\\Current",
                               L"System\\CurrentControlSet\\Enum",
                               a2,
                               L"Driver Parameters");
      return (unsigned int)-1073741789;
    }
    return DeviceSoftwareKey;
  }
  if ( a4 == -1 )
    return (unsigned int)-1073741811;
  v19 = -1LL;
  do
    ++v19;
  while ( *(_WORD *)(a2 + 2 * v19) );
  v20 = v19 + 97;
  v21 = -1;
  if ( v20 <= 0xFFFFFFFF )
    v21 = v20;
  DeviceSoftwareKey = v20 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v20 <= 0xFFFFFFFF )
  {
    if ( a8 )
      *a8 = v21;
    if ( v21 <= (unsigned int)cchDest )
      return (unsigned int)RtlStringCchPrintfExW(
                             pszDest,
                             (unsigned int)cchDest,
                             0LL,
                             0LL,
                             0x800u,
                             L"%s\\%04u\\%s\\%s\\%s",
                             L"System\\CurrentControlSet\\Hardware Profiles",
                             a4,
                             L"System\\CurrentControlSet\\Enum",
                             a2,
                             L"Driver Parameters");
    return (unsigned int)-1073741789;
  }
  return DeviceSoftwareKey;
}
