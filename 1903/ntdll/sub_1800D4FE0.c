/*
 * XREFs of sub_1800D4FE0 @ 0x1800D4FE0
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     RtlQueryActivationContextApplicationSettings @ 0x180077860 (RtlQueryActivationContextApplicationSettings.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     wcscmp @ 0x180092310 (wcscmp.c)
 */

bool sub_1800D4FE0()
{
  char v0; // bl
  wchar_t String1[8]; // [rsp+40h] [rbp-28h] BYREF

  v0 = 0;
  if ( RtlQueryActivationContextApplicationSettings(
         0,
         0LL,
         (PWSTR)L"http://schemas.microsoft.com/SMI/2019/WindowsSettings",
         (PWSTR)L"activeCodePage",
         String1,
         8uLL,
         0LL) >= 0 )
    return wcscmp(String1, L"UTF-8") == 0;
  return v0;
}
