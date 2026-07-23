/*
 * XREFs of sub_1800465D0 @ 0x1800465D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180044584 @ 0x180044584 (sub_180044584.c)
 *     sub_180044E1C @ 0x180044E1C (sub_180044E1C.c)
 *     sub_180047490 @ 0x180047490 (sub_180047490.c)
 */

__int64 __fastcall sub_1800465D0(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r14

  sub_180044E1C(a1, a2);
  v5 = a3 >> 12;
  result = 8LL;
  if ( (*(_BYTE *)(a1 + 13) & 8) != 0 )
    return sub_180047490(a1, 0, 0LL);
  v7 = *(__int16 *)(a1 + 22);
  v8 = *(_QWORD *)(v7 + a1 + 8) >> *(_BYTE *)(a1 + 11);
  if ( v8 <= 8 )
    v8 = 8LL;
  v9 = *(_QWORD *)(v7 + a1 + 8) >> *(_BYTE *)(a1 + 12);
  if ( v9 <= 8 )
    v9 = 8LL;
  v10 = v5 + *(_QWORD *)(v7 + a1 + 16) + *(_QWORD *)(v7 + a1 + 24);
  if ( v10 > v8 )
  {
    result = sub_180044584();
    if ( (int)result < 0 )
      return sub_180047490(a1, 0, 0LL);
  }
  if ( v10 > v9 )
    return sub_180047490(a1, 0, 0LL);
  return result;
}
