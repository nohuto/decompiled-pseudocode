/*
 * XREFs of USBMidiOutCreateSecondByte @ 0x1C0031160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall USBMidiOutCreateSecondByte(__int64 a1, _BYTE *a2, char a3)
{
  char v3; // r9
  char v4; // al
  char v5; // cl

  v3 = 0;
  if ( a3 >= 0 )
  {
    v3 = 1;
    v5 = *a2 & 0xF;
    a2[2] = a3;
    if ( (unsigned __int8)(v5 - 12) > 1u )
      return v5 == 2;
  }
  else if ( (a3 & 0xF8) == 0xF8 )
  {
    if ( *(_BYTE *)(a1 + 68) )
      a2[2] = a3;
  }
  else if ( a3 == -9 && *(_BYTE *)(a1 + 68) )
  {
    v3 = 1;
    v4 = *a2 & 0xF6;
    a2[2] = -9;
    *a2 = v4 | 6;
    *(_BYTE *)(a1 + 68) = 0;
  }
  return v3;
}
