/*
 * XREFs of sub_18010FFE0 @ 0x18010FFE0
 * Callers:
 *     sub_180110078 @ 0x180110078 (sub_180110078.c)
 * Callees:
 *     sub_1800DCF0C @ 0x1800DCF0C (sub_1800DCF0C.c)
 *     sub_180110134 @ 0x180110134 (sub_180110134.c)
 */

__int64 __fastcall sub_18010FFE0(_WORD *a1, _WORD *a2, __int64 a3, _WORD *a4)
{
  __int16 v4; // ax
  _WORD *v5; // r11
  unsigned int v8; // ebx
  __int64 v9; // r11

  v4 = *a1;
  v5 = a1;
  v8 = 0;
  while ( v4 )
  {
    if ( v4 == 33 )
    {
      if ( (int)sub_180110134(a2, a2, a1, v5 - a1) >= 0 && (int)sub_1800DCF0C(a4, 1024LL, v9 + 2) >= 0 )
        return 1;
      break;
    }
    v4 = *++v5;
  }
  if ( a2 )
    *a2 = 0;
  if ( a4 )
    *a4 = 0;
  return v8;
}
