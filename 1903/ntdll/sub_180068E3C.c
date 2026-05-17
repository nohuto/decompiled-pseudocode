/*
 * XREFs of sub_180068E3C @ 0x180068E3C
 * Callers:
 *     sub_18003AAA0 @ 0x18003AAA0 (sub_18003AAA0.c)
 *     sub_180046D7C @ 0x180046D7C (sub_180046D7C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180068E3C(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // r9d
  unsigned int v4; // ecx
  __int64 result; // rax

  v2 = a2 - 16;
  v3 = *(_DWORD *)(a1 + 176) & 1;
  if ( v3 && (a2 & 0xFFF) == 0 )
    v2 = a2 - 32;
  v4 = 16 * (WORD1(qword_180163540) ^ WORD1(v2) ^ *(unsigned __int16 *)(v2 + 2)) - 16;
  if ( v3 && ((v2 + 32) & 0xFFF) == 0 )
    v4 = 16 * (WORD1(qword_180163540) ^ WORD1(v2) ^ *(unsigned __int16 *)(v2 + 2)) - 32;
  result = v4;
  *(_WORD *)(v4 + a2 - 2) |= 0x4000u;
  return result;
}
