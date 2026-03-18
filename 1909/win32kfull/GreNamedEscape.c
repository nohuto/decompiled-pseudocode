/*
 * XREFs of GreNamedEscape @ 0x1C02A01F0
 * Callers:
 *     NtGdiExtEscape @ 0x1C0121B20 (NtGdiExtEscape.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     AtmDrvFontManagementRedirector @ 0x1C02989AC (AtmDrvFontManagementRedirector.c)
 */

__int64 __fastcall GreNamedEscape(wchar_t *Str1, int a2, int a3, int *a4, int a5, __int64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  _BYTE v13[520]; // [rsp+40h] [rbp-248h] BYREF

  memset(v13, 0, sizeof(v13));
  if ( _wcsicmp(Str1, L"atmfd.dll") )
    return 0LL;
  else
    return AtmDrvFontManagementRedirector(v11, v10, a2, a3, a4, a5, a6);
}
