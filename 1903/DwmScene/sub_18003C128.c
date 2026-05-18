/*
 * XREFs of sub_18003C128 @ 0x18003C128
 * Callers:
 *     sub_18003C848 @ 0x18003C848 (sub_18003C848.c)
 * Callees:
 *     sub_18003C750 @ 0x18003C750 (sub_18003C750.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     memset @ 0x1801271C8 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18003C128(__int64 a1, const wchar_t *a2)
{
  unsigned int v4; // eax
  int v5; // [rsp+20h] [rbp-128h]
  char String[256]; // [rsp+30h] [rbp-118h] BYREF

  if ( a1 )
  {
    memset(String, 0, sizeof(String));
    v5 = dword_180269038++;
    sub_18003C750(String, -1LL, "%S(%u)", a2, v5);
    v4 = strnlen(String, 0x7FFFFFFFuLL);
    (*(void (__fastcall **)(__int64, void *, _QWORD, char *))(*(_QWORD *)a1 + 280LL))(a1, &unk_180210200, v4, String);
  }
}
