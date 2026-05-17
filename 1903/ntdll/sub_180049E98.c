/*
 * XREFs of sub_180049E98 @ 0x180049E98
 * Callers:
 *     sub_18004B17C @ 0x18004B17C (sub_18004B17C.c)
 *     sub_18004C2EC @ 0x18004C2EC (sub_18004C2EC.c)
 * Callees:
 *     sub_180049EE0 @ 0x180049EE0 (sub_180049EE0.c)
 */

__int64 __fastcall sub_180049E98(__int64 a1, __int64 a2)
{
  unsigned __int8 *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 result; // rax

  v2 = byte_180163580;
  v3 = 32LL;
  do
  {
    v4 = sub_180049EE0(a1, a2);
    a1 = 0x7F7F7F7F7F7F7F7FLL;
    result = v4 & 0x7F7F7F7F7F7F7F7FLL;
    *(_QWORD *)v2 = result;
    v2 += 8;
    --v3;
  }
  while ( v3 );
  return result;
}
