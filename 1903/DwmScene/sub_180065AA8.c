/*
 * XREFs of sub_180065AA8 @ 0x180065AA8
 * Callers:
 *     sub_180065C18 @ 0x180065C18 (sub_180065C18.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_180069384 @ 0x180069384 (sub_180069384.c)
 */

__int64 __fastcall sub_180065AA8(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v7; // [rsp+48h] [rbp+10h]

  v3 = sub_180069384(a1);
  v4 = v3;
  v7 = v3;
  *(_WORD *)(v3 + 24) = 0;
  *(_QWORD *)(v3 + 48) = 0LL;
  *(_QWORD *)(v3 + 56) = 0LL;
  try
  {
    sub_18000F3F4((_QWORD *)(v3 + 32), a2);
    *(_OWORD *)(v4 + 64) = *(_OWORD *)(a2 + 32);
    *(_QWORD *)(v4 + 80) = *(_QWORD *)(a2 + 48);
    result = v4;
  }
  catch ( ... )
  {
    sub_180069798(a1, v7);
    throw;
  }
  return result;
}
