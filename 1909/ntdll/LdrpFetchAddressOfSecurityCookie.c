/*
 * XREFs of LdrpFetchAddressOfSecurityCookie @ 0x180020454
 * Callers:
 *     LdrInitSecurityCookie @ 0x180020514 (LdrInitSecurityCookie.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     RtlSectionTableFromVirtualAddress @ 0x18001EFD0 (RtlSectionTableFromVirtualAddress.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x18001F450 (LdrImageDirectoryEntryToLoadConfig.c)
 */

unsigned __int64 __fastcall LdrpFetchAddressOfSecurityCookie(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        _QWORD *a4)
{
  __int64 v5; // rbp
  _DWORD *Config; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r11
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v5 = a2;
  RtlImageNtHeaderEx(1, a1, 0LL, &v14);
  Config = LdrImageDirectoryEntryToLoadConfig(a1);
  *a3 = 0;
  if ( Config && *Config >= 0x70u && (v9 = *((_QWORD *)Config + 11), v9 > a1) && (v10 = v5 + a1 - 8, v9 < v10) )
  {
    v11 = RtlSectionTableFromVirtualAddress(v14, v10, (int)v9 - (int)a1);
    if ( v11 && *(int *)(v11 + 36) >= 0 )
      *a3 = 1;
    if ( a4 )
      *a4 = v12;
    return v9;
  }
  else
  {
    if ( a4 )
    {
      if ( Config && *Config >= 4u )
        *a4 = Config;
      else
        *a4 = 0LL;
    }
    return 0LL;
  }
}
