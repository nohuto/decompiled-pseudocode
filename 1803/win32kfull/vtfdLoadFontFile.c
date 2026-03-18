/*
 * XREFs of vtfdLoadFontFile @ 0x1C02299CC
 * Callers:
 *     vtfdLoadFontFileTE @ 0x1C02289B0 (vtfdLoadFontFileTE.c)
 * Callees:
 *     bVtfdLoadFont @ 0x1C0228FC0 (bVtfdLoadFont.c)
 */

__int64 __fastcall vtfdLoadFontFile(__int64 a1, __int64 a2, unsigned int a3, PVOID *a4)
{
  __int64 result; // rax

  *a4 = 0LL;
  result = bVtfdLoadFont(a2, a3, a1, 2, a4);
  if ( !(_DWORD)result )
    return bVtfdLoadFont(a2, a3, a1, 1, a4);
  return result;
}
