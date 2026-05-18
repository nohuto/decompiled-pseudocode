/*
 * XREFs of sub_18012328C @ 0x18012328C
 * Callers:
 *     sub_18012305C @ 0x18012305C (sub_18012305C.c)
 *     sub_180123340 @ 0x180123340 (sub_180123340.c)
 *     sub_180124568 @ 0x180124568 (sub_180124568.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18008D570 @ 0x18008D570 (sub_18008D570.c)
 *     sub_18008D608 @ 0x18008D608 (sub_18008D608.c)
 */

unsigned __int64 __fastcall sub_18012328C(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 **v2; // rbx
  unsigned __int64 v4; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (unsigned __int64 **)(a1 + 3);
  v4 = 2 * a2;
  if ( v4 > (__int64)(a1[5] - a1[3]) >> 3 )
  {
    if ( v4 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    sub_18008D570(a1 + 3, v4);
  }
  v8 = a1[1];
  v6 = 2 * a2;
  if ( !is_mul_ok(a2, 2uLL) )
    v6 = -1LL;
  sub_18008D608(v2, v6, &v8);
  result = a2 - 1;
  a1[6] = a2 - 1;
  a1[7] = a2;
  return result;
}
