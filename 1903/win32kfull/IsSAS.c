/*
 * XREFs of IsSAS @ 0x1C010E628
 * Callers:
 *     EditionKeyEventLLHook @ 0x1C00B4470 (EditionKeyEventLLHook.c)
 *     EditionDoHotKeys @ 0x1C010DF30 (EditionDoHotKeys.c)
 *     xxxDoHotKeyStuff @ 0x1C010DF80 (xxxDoHotKeyStuff.c)
 *     EditionIsSAS @ 0x1C015DE20 (EditionIsSAS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsSAS(unsigned __int8 a1, _DWORD *a2)
{
  struct tagSASKEY near **v2; // r8
  int v3; // r9d
  int v4; // r10d
  __int64 result; // rax

  v2 = &gSasKeyList;
  v3 = 0;
  while ( 1 )
  {
    v4 = *((_DWORD *)v2 + 1);
    if ( !v4 )
      return 0LL;
    if ( a1 == v4 && gfsSASModifiersDown == *(_DWORD *)v2 )
      break;
    ++v3;
    ++v2;
    if ( v3 >= 2 )
      return 0LL;
  }
  result = 1LL;
  *a2 = gfsSASModifiersDown;
  return result;
}
