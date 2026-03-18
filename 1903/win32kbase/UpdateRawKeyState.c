/*
 * XREFs of UpdateRawKeyState @ 0x1C008EACC
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C01865B0 (xxxProcessKeyEvent.c)
 *     ?ApplyKeyStateUpdate@@YAXE_N@Z @ 0x1C01884DC (-ApplyKeyStateUpdate@@YAXE_N@Z.c)
 * Callees:
 *     ApiSetEditionUpdateModifiersForHotkey @ 0x1C008EB58 (ApiSetEditionUpdateModifiersForHotkey.c)
 */

__int64 __fastcall UpdateRawKeyState(unsigned __int8 a1, unsigned int a2)
{
  __int64 v3; // rdx
  int v4; // eax
  unsigned __int64 v5; // r10
  unsigned int v6; // r9d
  int v7; // ecx
  int v8; // ecx

  if ( (unsigned __int8)(a1 - 16) <= 2u )
  {
    v3 = 4 >> (a1 - 16);
  }
  else
  {
    v3 = 8LL;
    if ( (unsigned __int8)(a1 - 91) > 1u )
      v3 = 0LL;
  }
  v4 = a1 & 3;
  v5 = (unsigned __int64)a1 >> 2;
  v6 = 2 * v4;
  v7 = gafRawKeyState[v5];
  if ( a2 )
  {
    v8 = v7 & ~(1 << v6);
  }
  else
  {
    if ( !_bittest(&v7, v6) )
      v7 ^= 1 << (2 * v4 + 1);
    v8 = (unsigned __int8)v7 | (1 << v6);
  }
  gafRawKeyState[v5] = v8;
  return ApiSetEditionUpdateModifiersForHotkey(a2, v3);
}
