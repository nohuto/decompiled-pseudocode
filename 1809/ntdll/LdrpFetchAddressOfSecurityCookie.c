/*
 * XREFs of LdrpFetchAddressOfSecurityCookie @ 0x180027304
 * Callers:
 *     LdrInitSecurityCookie @ 0x1800271C4 (LdrInitSecurityCookie.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180007BB0 (RtlImageNtHeaderEx.c)
 *     RtlSectionTableFromVirtualAddress @ 0x180009C40 (RtlSectionTableFromVirtualAddress.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1800273C4 (LdrImageDirectoryEntryToLoadConfig.c)
 */

unsigned __int64 __fastcall LdrpFetchAddressOfSecurityCookie(char *a1, unsigned int a2, _DWORD *a3, __int64 *a4)
{
  __int64 v5; // rbp
  __int64 Config; // rax
  unsigned __int64 v9; // rdi
  char *v10; // rdx
  PIMAGE_SECTION_HEADER v11; // rax
  __int64 v12; // r11
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp+18h] BYREF

  v5 = a2;
  RtlImageNtHeaderEx(1u, a1, 0LL, &OutHeaders);
  Config = LdrImageDirectoryEntryToLoadConfig((int)a1);
  *a3 = 0;
  if ( Config
    && *(_DWORD *)Config >= 0x70u
    && (v9 = *(_QWORD *)(Config + 88), v9 > (unsigned __int64)a1)
    && (v10 = &a1[v5 - 8], v9 < (unsigned __int64)v10) )
  {
    v11 = RtlSectionTableFromVirtualAddress(OutHeaders, v10, (int)v9 - (int)a1);
    if ( v11 && (v11->Characteristics & 0x80000000) == 0 )
      *a3 = 1;
    if ( a4 )
      *a4 = v12;
    return v9;
  }
  else
  {
    if ( a4 )
    {
      if ( Config && *(_DWORD *)Config >= 4u )
        *a4 = Config;
      else
        *a4 = 0LL;
    }
    return 0LL;
  }
}
