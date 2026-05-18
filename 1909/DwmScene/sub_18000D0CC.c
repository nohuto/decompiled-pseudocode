/*
 * XREFs of sub_18000D0CC @ 0x18000D0CC
 * Callers:
 *     sub_18000BF3C @ 0x18000BF3C (sub_18000BF3C.c)
 * Callees:
 *     sub_18000D164 @ 0x18000D164 (sub_18000D164.c)
 *     memset @ 0x1801272D8 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

void __fastcall __noreturn sub_18000D0CC(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  _QWORD v4[21]; // [rsp+20h] [rbp-A8h] BYREF

  if ( qword_180269AD0 )
    qword_180269AD0();
  memset(v4, 0, 0x98uLL);
  v2 = *(_QWORD *)(a1 + 128);
  LODWORD(v4[3]) = 1;
  v4[0] = 0x1C0000409LL;
  v4[4] = 7LL;
  if ( !v2 )
    sub_18000D164(v4, 0LL, 1LL);
  v4[5] = *(int *)(a1 + 4);
  v3 = *(unsigned int *)(a1 + 56);
  v4[2] = v2;
  v4[6] = v3;
  LODWORD(v4[3]) = 3;
  sub_18000D164(v4, 0LL, 0LL);
}
