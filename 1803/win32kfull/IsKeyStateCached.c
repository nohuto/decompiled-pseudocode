/*
 * XREFs of IsKeyStateCached @ 0x1C005DF00
 * Callers:
 *     NtUserGetKeyboardState @ 0x1C005DB30 (NtUserGetKeyboardState.c)
 *     NtUserGetKeyState @ 0x1C005DCF0 (NtUserGetKeyState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsKeyStateCached(int a1)
{
  int v1; // edx
  unsigned __int8 *i; // rax

  v1 = 0;
  if ( a1 >= 32 )
  {
    for ( i = byte_1C02DCE50; *i != a1; ++i )
    {
      if ( (unsigned int)++v1 >= 0xE )
        return a1 <= 165 && (a1 < 93 || a1 >= 160) && a1 >= 91 && (a1 <= 92 || (unsigned int)(a1 - 160) <= 5);
    }
  }
  return 1LL;
}
