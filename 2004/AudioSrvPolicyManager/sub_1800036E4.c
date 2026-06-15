/*
 * XREFs of sub_1800036E4 @ 0x1800036E4
 * Callers:
 *     sub_180003780 @ 0x180003780 (sub_180003780.c)
 *     DllMain @ 0x180005830 (DllMain.c)
 * Callees:
 *     sub_180002714 @ 0x180002714 (sub_180002714.c)
 *     memset @ 0x18003A7D8 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall __noreturn sub_1800036E4(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  _QWORD v4[21]; // [rsp+20h] [rbp-A8h] BYREF

  if ( qword_18004FD88 )
    qword_18004FD88();
  memset(v4, 0, 0x98uLL);
  v2 = *(_QWORD *)(a1 + 128);
  LODWORD(v4[3]) = 1;
  v4[0] = 0x1C0000409LL;
  v4[4] = 7LL;
  if ( !v2 )
    sub_180002714((__int64)v4);
  v4[5] = *(int *)(a1 + 4);
  v3 = *(unsigned int *)(a1 + 56);
  v4[2] = v2;
  v4[6] = v3;
  LODWORD(v4[3]) = 3;
  sub_180002714((__int64)v4);
}
