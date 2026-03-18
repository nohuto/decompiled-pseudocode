/*
 * XREFs of SpiMax311GetByte @ 0x14034E9A0
 * Callers:
 *     <none>
 * Callees:
 *     SpiSend16 @ 0x14034ECF8 (SpiSend16.c)
 */

__int64 __fastcall SpiMax311GetByte(_QWORD *a1, _BYTE *a2)
{
  __int16 v3; // cx
  bool v4; // zf
  __int16 v5; // ax

  if ( !a1 || !*a1 )
    return 3LL;
  if ( HIDWORD(qword_14050E0B0) == (_DWORD)qword_14050E0B0 )
  {
    v5 = SpiSend16(a1, 0LL);
    if ( v5 >= 0 )
      return 1LL;
    *a2 = v5;
    v4 = (v5 & 0x400) == 0;
  }
  else
  {
    v3 = word_14050E0BA[HIDWORD(qword_14050E0B0)];
    *a2 = v3;
    HIDWORD(qword_14050E0B0) = (WORD2(qword_14050E0B0) + 1) & 0x3FF;
    v4 = (v3 & 0x400) == 0;
  }
  if ( v4 )
    return 0LL;
  else
    return 2LL;
}
