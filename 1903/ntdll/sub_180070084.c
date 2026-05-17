/*
 * XREFs of sub_180070084 @ 0x180070084
 * Callers:
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 * Callees:
 *     sub_1800700E8 @ 0x1800700E8 (sub_1800700E8.c)
 */

__int64 __fastcall sub_180070084(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rbx

  if ( a1
    && a2 <= qword_1801627A0
    && (v2 = (a2 + 23) >> 4, v3 = byte_180120E60[v2 - 1], (unsigned int)v3 < 0x81)
    && (*(_QWORD *)(a1 + 8 * v3 + 1192) || (int)sub_1800700E8(a1, byte_180120E60[v2 - 1]) >= 0) )
  {
    return (unsigned __int16)v3;
  }
  else
  {
    return 0xFFFFLL;
  }
}
