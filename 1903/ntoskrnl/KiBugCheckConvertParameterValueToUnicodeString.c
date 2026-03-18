/*
 * XREFs of KiBugCheckConvertParameterValueToUnicodeString @ 0x1402A8C5C
 * Callers:
 *     KiDisplayBlueScreen @ 0x1402A9008 (KiDisplayBlueScreen.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiBugCheckConvertParameterValueToUnicodeString(unsigned __int64 a1, __int64 a2)
{
  _DWORD *v2; // r9
  int v3; // r8d
  _WORD *v4; // r11
  unsigned int i; // edi
  unsigned __int16 v6; // dx
  __int64 v7; // rcx
  _WORD *v8; // rdi
  __int64 result; // rax

  v2 = *(_DWORD **)(a2 + 8);
  v3 = *(unsigned __int16 *)(a2 + 2) >> 1;
  if ( v3 == 19 )
  {
    *v2 = 7864368;
    v4 = v2 + 1;
    for ( i = 0; i < 0x40; i += 4 )
    {
      v6 = (a1 >> (60 - (unsigned __int8)i)) & 0xF;
      *v4++ = v6 + (v6 < 0xAu ? 48 : 55);
    }
  }
  else if ( v3 != 1 )
  {
    v7 = (unsigned int)(v3 - 1);
    v8 = *(_WORD **)(a2 + 8);
    while ( v7 )
    {
      *v8++ = 45;
      --v7;
    }
  }
  result = (unsigned int)(v3 - 1);
  *((_WORD *)v2 + result) = 0;
  return result;
}
