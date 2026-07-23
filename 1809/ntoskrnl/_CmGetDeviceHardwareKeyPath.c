/*
 * XREFs of _CmGetDeviceHardwareKeyPath @ 0x1406BDC54
 * Callers:
 *     _CmGetDeviceRegKeyPath @ 0x1405C8544 (_CmGetDeviceRegKeyPath.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140015EF4 (RtlStringCchPrintfExW.c)
 */

__int64 __fastcall CmGetDeviceHardwareKeyPath(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        int a4,
        int a5,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        unsigned int *a8)
{
  __int64 v8; // rax
  unsigned int v9; // r9d
  unsigned __int64 v10; // rax
  unsigned int v11; // ecx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned int v16; // r9d
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned int v19; // r11d
  unsigned __int64 v20; // rax

  if ( (a3 & 0x200) != 0 )
  {
    if ( a4 )
    {
      if ( a4 == -1 )
        return (unsigned int)-1073741811;
      v17 = -1LL;
      do
        ++v17;
      while ( *(_WORD *)(a2 + 2 * v17) );
      v18 = v17 + 79;
      v19 = -1;
      if ( v18 <= 0xFFFFFFFF )
        v19 = v18;
      v11 = v18 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v18 <= 0xFFFFFFFF )
      {
        if ( a8 )
          *a8 = v19;
        if ( v19 <= (unsigned int)cchDest )
          return (unsigned int)RtlStringCchPrintfExW(
                                 pszDest,
                                 (unsigned int)cchDest,
                                 0LL,
                                 0LL,
                                 0x800u,
                                 L"%s\\%04u\\%s\\%s",
                                 L"System\\CurrentControlSet\\Hardware Profiles",
                                 a4,
                                 L"System\\CurrentControlSet\\Enum",
                                 a2);
        return (unsigned int)-1073741789;
      }
    }
    else
    {
      v14 = -1LL;
      do
        ++v14;
      while ( *(_WORD *)(a2 + 2 * v14) );
      v15 = v14 + 82;
      v16 = -1;
      if ( v15 <= 0xFFFFFFFF )
        v16 = v15;
      v11 = v15 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v15 <= 0xFFFFFFFF )
      {
        if ( a8 )
          *a8 = v16;
        if ( v16 <= (unsigned int)cchDest )
          return (unsigned int)RtlStringCchPrintfExW(
                                 pszDest,
                                 (unsigned int)cchDest,
                                 0LL,
                                 0LL,
                                 0x800u,
                                 L"%s\\%s\\%s",
                                 L"System\\CurrentControlSet\\Hardware Profiles\\Current",
                                 L"System\\CurrentControlSet\\Enum",
                                 a2);
        return (unsigned int)-1073741789;
      }
    }
  }
  else
  {
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)(a2 + 2 * v8) );
    v9 = -1;
    if ( (a3 & 0x100) != 0 )
    {
      v20 = v8 + 31;
      if ( v20 <= 0xFFFFFFFF )
        v9 = v20;
      v11 = v20 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v20 <= 0xFFFFFFFF )
      {
        if ( a8 )
          *a8 = v9;
        if ( v9 <= (unsigned int)cchDest )
          return (unsigned int)RtlStringCchPrintfExW(
                                 pszDest,
                                 (unsigned int)cchDest,
                                 0LL,
                                 0LL,
                                 0x800u,
                                 L"%s\\%s",
                                 L"System\\CurrentControlSet\\Enum",
                                 a2);
        return (unsigned int)-1073741789;
      }
    }
    else
    {
      v10 = v8 + 49;
      if ( v10 <= 0xFFFFFFFF )
        v9 = v10;
      v11 = v10 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v10 <= 0xFFFFFFFF )
      {
        if ( a8 )
          *a8 = v9;
        if ( v9 <= (unsigned int)cchDest )
          return (unsigned int)RtlStringCchPrintfExW(
                                 pszDest,
                                 (unsigned int)cchDest,
                                 0LL,
                                 0LL,
                                 0x800u,
                                 L"%s\\%s\\%s",
                                 L"System\\CurrentControlSet\\Enum",
                                 a2,
                                 L"Device Parameters");
        return (unsigned int)-1073741789;
      }
    }
  }
  return v11;
}
