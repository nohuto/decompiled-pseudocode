/*
 * XREFs of sub_18008D4D8 @ 0x18008D4D8
 * Callers:
 *     sub_1800890CC @ 0x1800890CC (sub_1800890CC.c)
 *     sub_18008D340 @ 0x18008D340 (sub_18008D340.c)
 *     sub_18008DA9C @ 0x18008DA9C (sub_18008DA9C.c)
 *     sub_1800BCE6C @ 0x1800BCE6C (sub_1800BCE6C.c)
 *     sub_1800CAEB4 @ 0x1800CAEB4 (sub_1800CAEB4.c)
 *     sub_1800CB258 @ 0x1800CB258 (sub_1800CB258.c)
 *     sub_18010DA8C @ 0x18010DA8C (sub_18010DA8C.c)
 *     sub_180111C38 @ 0x180111C38 (sub_180111C38.c)
 *     sub_180111FA8 @ 0x180111FA8 (sub_180111FA8.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18008D570 @ 0x18008D570 (sub_18008D570.c)
 *     sub_18008D608 @ 0x18008D608 (sub_18008D608.c)
 */

__int64 __fastcall sub_18008D4D8(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rsi
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 + 3;
  v4 = 2 * a2;
  if ( 2 * a2 > (unsigned __int64)((__int64)(a1[5] - a1[3]) >> 3) )
  {
    if ( v4 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    sub_18008D570(a1 + 3, 2 * a2);
  }
  v7 = a1[1];
  sub_18008D608(v2, v4, &v7);
  result = a2 - 1;
  a1[6] = a2 - 1;
  a1[7] = a2;
  return result;
}
