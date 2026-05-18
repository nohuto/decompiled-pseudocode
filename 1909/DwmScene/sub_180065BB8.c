/*
 * XREFs of sub_180065BB8 @ 0x180065BB8
 * Callers:
 *     sub_180065D28 @ 0x180065D28 (sub_180065D28.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_180069494 @ 0x180069494 (sub_180069494.c)
 */

__int64 __fastcall sub_180065BB8(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v7; // [rsp+48h] [rbp+10h]

  v3 = sub_180069494(a1);
  v4 = v3;
  v7 = v3;
  *(_WORD *)(v3 + 24) = 0;
  *(_QWORD *)(v3 + 48) = 0LL;
  *(_QWORD *)(v3 + 56) = 0LL;
  try
  {
    sub_18000F444((_QWORD *)(v3 + 32), a2);
    *(_OWORD *)(v4 + 64) = *(_OWORD *)(a2 + 32);
    *(_QWORD *)(v4 + 80) = *(_QWORD *)(a2 + 48);
    result = v4;
  }
  catch ( ... )
  {
    sub_1800698A8(a1, v7);
    throw;
  }
  return result;
}
