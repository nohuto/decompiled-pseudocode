/*
 * XREFs of SpiMax311GetByte @ 0x14032D8B0
 * Callers:
 *     <none>
 * Callees:
 *     SpiSend16 @ 0x14032DC08 (SpiSend16.c)
 */

__int64 __fastcall SpiMax311GetByte(_QWORD *a1, _BYTE *a2)
{
  __int16 v3; // cx
  bool v4; // zf
  __int16 v5; // ax

  if ( !a1 || !*a1 )
    return 3LL;
  if ( HIDWORD(qword_1404E1CC0) == (_DWORD)qword_1404E1CC0 )
  {
    v5 = SpiSend16(a1, 0LL);
    if ( v5 >= 0 )
      return 1LL;
    *a2 = v5;
    v4 = (v5 & 0x400) == 0;
  }
  else
  {
    v3 = word_1404E1CCA[HIDWORD(qword_1404E1CC0)];
    *a2 = v3;
    HIDWORD(qword_1404E1CC0) = (WORD2(qword_1404E1CC0) + 1) & 0x3FF;
    v4 = (v3 & 0x400) == 0;
  }
  if ( v4 )
    return 0LL;
  else
    return 2LL;
}
