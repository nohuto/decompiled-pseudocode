/*
 * XREFs of sub_180046D7C @ 0x180046D7C
 * Callers:
 *     sub_180046E04 @ 0x180046E04 (sub_180046E04.c)
 * Callees:
 *     sub_180044E1C @ 0x180044E1C (sub_180044E1C.c)
 *     sub_180068E3C @ 0x180068E3C (sub_180068E3C.c)
 */

__int64 __fastcall sub_180046D7C(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int8 v5; // dl
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rcx

  result = sub_180044E1C(a1, a2);
  v5 = *(_BYTE *)(result + 24) & 0xC;
  if ( v5 < 8u )
  {
    *(_WORD *)(result + 8) |= 1u;
  }
  else
  {
    v6 = result & *(_QWORD *)a1;
    v7 = ((result - v6) >> 5 << *(_BYTE *)(a1 + 8)) + v6;
    if ( v5 == 8 )
    {
      v8 = (unsigned __int16)qword_180163548 ^ *(unsigned __int16 *)(v7 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)v7 >> 12);
      result = 0x4000LL;
      *(_WORD *)(v8 + a2 - 2) |= 0x4000u;
    }
    else
    {
      return sub_180068E3C(*(_QWORD *)(a1 + 32), a2, v6, v7);
    }
  }
  return result;
}
