/*
 * XREFs of sub_1800A4114 @ 0x1800A4114
 * Callers:
 *     sub_1800A36E4 @ 0x1800A36E4 (sub_1800A36E4.c)
 *     sub_1800DC0E4 @ 0x1800DC0E4 (sub_1800DC0E4.c)
 *     sub_1800F2D88 @ 0x1800F2D88 (sub_1800F2D88.c)
 * Callees:
 *     sub_1800A629C @ 0x1800A629C (sub_1800A629C.c)
 */

__int64 __fastcall sub_1800A4114(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v2 = (_QWORD *)(a1 + 2088);
  sub_1800A629C(a1 + 2088, &v4, a2);
  if ( v4 == *v2 )
    return 511LL;
  else
    return *(unsigned __int16 *)(v4 + 64);
}
