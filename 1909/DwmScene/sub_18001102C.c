/*
 * XREFs of sub_18001102C @ 0x18001102C
 * Callers:
 *     sub_180017E58 @ 0x180017E58 (sub_180017E58.c)
 *     sub_180018D98 @ 0x180018D98 (sub_180018D98.c)
 *     sub_180083084 @ 0x180083084 (sub_180083084.c)
 *     sub_180083208 @ 0x180083208 (sub_180083208.c)
 *     sub_180083324 @ 0x180083324 (sub_180083324.c)
 *     sub_1800833AC @ 0x1800833AC (sub_1800833AC.c)
 *     sub_18008468C @ 0x18008468C (sub_18008468C.c)
 *     sub_1800B17CC @ 0x1800B17CC (sub_1800B17CC.c)
 *     sub_1800B18A0 @ 0x1800B18A0 (sub_1800B18A0.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
_UNKNOWN **__fastcall sub_18001102C(_OWORD *a1, double a2, double a3, double a4)
{
  __int128 v4; // xmm0
  _UNKNOWN **result; // rax
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = &retaddr;
  if ( !a1 )
    wassert(L"pDestination", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x831u);
  *a1 = v4;
  a1[1] = *(_OWORD *)&a2;
  a1[2] = *(_OWORD *)&a3;
  a1[3] = *(_OWORD *)&a4;
  return result;
}
