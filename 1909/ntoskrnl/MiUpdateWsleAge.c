/*
 * XREFs of MiUpdateWsleAge @ 0x14012B4C8
 * Callers:
 *     MiActOnPte @ 0x1400BE5C0 (MiActOnPte.c)
 * Callees:
 *     MiGetVaAge @ 0x14005B0B0 (MiGetVaAge.c)
 *     MiSetVaAgeList @ 0x1400A55E0 (MiSetVaAgeList.c)
 */

char __fastcall MiUpdateWsleAge(__int64 a1, __int64 a2)
{
  char result; // al
  unsigned __int8 v4; // r9
  unsigned __int64 v5; // r10
  _QWORD *v6; // r11

  result = MiGetVaAge(a1, a2 << 25 >> 16);
  if ( v4 != result && (unsigned __int8)result < 8u && (v4 == 7 || result == 7) )
  {
    if ( !v4 )
      *v6 |= 0x20uLL;
    return MiSetVaAgeList(a1, v5, 1u, v4);
  }
  return result;
}
