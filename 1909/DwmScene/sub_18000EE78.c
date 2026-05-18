/*
 * XREFs of sub_18000EE78 @ 0x18000EE78
 * Callers:
 *     sub_18000EA20 @ 0x18000EA20 (sub_18000EA20.c)
 *     sub_180023830 @ 0x180023830 (sub_180023830.c)
 *     sub_18002C760 @ 0x18002C760 (sub_18002C760.c)
 *     sub_18002CB20 @ 0x18002CB20 (sub_18002CB20.c)
 *     sub_18002FC7C @ 0x18002FC7C (sub_18002FC7C.c)
 *     sub_180030058 @ 0x180030058 (sub_180030058.c)
 *     sub_180033730 @ 0x180033730 (sub_180033730.c)
 *     ?overflow@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAHH@Z @ 0x180033B70 (-overflow@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAAHH@Z.c)
 *     sub_18003A0C0 @ 0x18003A0C0 (sub_18003A0C0.c)
 *     sub_18003AA50 @ 0x18003AA50 (sub_18003AA50.c)
 *     sub_18003AF44 @ 0x18003AF44 (sub_18003AF44.c)
 *     sub_18004057C @ 0x18004057C (sub_18004057C.c)
 * Callees:
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18000EE78(__int64 *a1, const char *a2)
{
  __int64 v2; // rax
  unsigned int v4; // ebx
  int v6; // [rsp+30h] [rbp-18h] BYREF

  if ( a1 )
  {
    v2 = *a1;
    v4 = 0;
    v6 = 0;
    (*(void (__fastcall **)(__int64 *, void *, int *, _QWORD))(v2 + 32))(a1, &unk_180211200, &v6, 0LL);
    if ( !v6 )
    {
      if ( a2 )
        v4 = strnlen(a2, 0xFFuLL);
      (*(void (__fastcall **)(__int64 *, void *, _QWORD, const char *))(*a1 + 40))(a1, &unk_180211200, v4, a2);
    }
  }
}
