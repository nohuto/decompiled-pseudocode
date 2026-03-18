/*
 * XREFs of bContainGlyphSet @ 0x1C0218AD0
 * Callers:
 *     IsBogusSignature @ 0x1C0217D08 (IsBogusSignature.c)
 *     vFill_IFIMETRICS @ 0x1C021C0F0 (vFill_IFIMETRICS.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bContainGlyphSet(unsigned __int16 a1, __int64 a2)
{
  unsigned __int16 *v2; // r10
  unsigned __int16 *v3; // r8
  unsigned __int16 *v4; // r9
  int v5; // edx

  v2 = (unsigned __int16 *)(a2 + 16);
  v3 = (unsigned __int16 *)(a2 + 16 * ((unsigned int)(*(_DWORD *)(a2 + 12) - 1) + 1LL));
  while ( 1 )
  {
    v4 = &v2[8 * ((((char *)v3 - (char *)v2) >> 4) / 2)];
    v5 = a1 - *v4;
    if ( v5 >= 0 )
      break;
    v3 = v4 - 8;
LABEL_6:
    if ( v2 > v3 )
      return 0LL;
  }
  if ( v5 >= v4[1] )
  {
    v2 = v4 + 8;
    goto LABEL_6;
  }
  return *((_QWORD *)v4 + 1) != 0LL;
}
