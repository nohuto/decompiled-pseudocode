/*
 * XREFs of LdrpFetchAddressOfSecurityCookie @ 0x14068311C
 * Callers:
 *     LdrInitSecurityCookie @ 0x14068306C (LdrInitSecurityCookie.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14009D7A0 (RtlImageNtHeaderEx.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1406831B4 (LdrImageDirectoryEntryToLoadConfig.c)
 */

unsigned __int64 __fastcall LdrpFetchAddressOfSecurityCookie(
        PVOID BaseAddress,
        unsigned int a2,
        _DWORD *a3,
        __int64 *a4)
{
  __int64 v5; // rbp
  __int64 Config; // rax
  unsigned __int64 v9; // r8
  PIMAGE_NT_HEADERS v11; // [rsp+40h] [rbp+18h] BYREF

  v5 = a2;
  RtlImageNtHeaderEx(1u, BaseAddress, 0LL, &v11);
  Config = LdrImageDirectoryEntryToLoadConfig(BaseAddress);
  *a3 = 0;
  if ( Config
    && *(_DWORD *)Config >= 0x70u
    && (v9 = *(_QWORD *)(Config + 88), v9 > (unsigned __int64)BaseAddress)
    && v9 < (unsigned __int64)BaseAddress + v5 - 8 )
  {
    if ( a4 )
      *a4 = Config;
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
