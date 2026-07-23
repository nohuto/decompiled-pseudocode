/*
 * XREFs of LdrInitSecurityCookie @ 0x14068306C
 * Callers:
 *     MiProcessLoadConfigForDriver @ 0x140683008 (MiProcessLoadConfigForDriver.c)
 * Callees:
 *     LdrpFetchAddressOfSecurityCookie @ 0x14068311C (LdrpFetchAddressOfSecurityCookie.c)
 */

__int64 __fastcall LdrInitSecurityCookie(void *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 AddressOfSecurityCookie; // r8
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx

  AddressOfSecurityCookie = LdrpFetchAddressOfSecurityCookie(a1);
  if ( !AddressOfSecurityCookie || *(_QWORD *)AddressOfSecurityCookie != 0x2B992DDFA232LL )
    return 0LL;
  v6 = __rdtsc();
  v7 = (AddressOfSecurityCookie ^ (((unsigned __int64)HIDWORD(v6) << 32) | (unsigned int)v6) ^ HIDWORD(a4) ^ ((unsigned __int64)(unsigned int)a4 << 16)) & 0xFFFFFFFFFFFFLL;
  if ( v7 == 0x2B992DDFA232LL || !v7 )
    v7 = 0x2B992DDFA233LL;
  *(_QWORD *)AddressOfSecurityCookie = v7;
  return 1LL;
}
