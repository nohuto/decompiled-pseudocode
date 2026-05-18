/*
 * XREFs of sub_18000EE28 @ 0x18000EE28
 * Callers:
 *     sub_18000E9D0 @ 0x18000E9D0 (sub_18000E9D0.c)
 *     sub_180023720 @ 0x180023720 (sub_180023720.c)
 *     sub_18002C650 @ 0x18002C650 (sub_18002C650.c)
 *     sub_18002CA10 @ 0x18002CA10 (sub_18002CA10.c)
 *     sub_18002FB6C @ 0x18002FB6C (sub_18002FB6C.c)
 *     sub_18002FF48 @ 0x18002FF48 (sub_18002FF48.c)
 *     sub_180033620 @ 0x180033620 (sub_180033620.c)
 *     ?overflow@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAHH@Z @ 0x180033A60 (-overflow@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAAHH@Z.c)
 *     sub_180039FB0 @ 0x180039FB0 (sub_180039FB0.c)
 *     sub_18003A940 @ 0x18003A940 (sub_18003A940.c)
 *     sub_18003AE34 @ 0x18003AE34 (sub_18003AE34.c)
 *     sub_18004046C @ 0x18004046C (sub_18004046C.c)
 * Callees:
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18000EE28(__int64 *a1, const char *a2)
{
  __int64 v2; // rax
  unsigned int v4; // ebx
  int v6; // [rsp+30h] [rbp-18h] BYREF

  if ( a1 )
  {
    v2 = *a1;
    v4 = 0;
    v6 = 0;
    (*(void (__fastcall **)(__int64 *, void *, int *, _QWORD))(v2 + 32))(a1, &unk_180210200, &v6, 0LL);
    if ( !v6 )
    {
      if ( a2 )
        v4 = strnlen(a2, 0xFFuLL);
      (*(void (__fastcall **)(__int64 *, void *, _QWORD, const char *))(*a1 + 40))(a1, &unk_180210200, v4, a2);
    }
  }
}
