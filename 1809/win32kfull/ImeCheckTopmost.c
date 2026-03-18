/*
 * XREFs of ImeCheckTopmost @ 0x1C000CD64
 * Callers:
 *     NtUserSetImeOwnerWindow @ 0x1C000CA40 (NtUserSetImeOwnerWindow.c)
 *     zzzImeCanDestroyDefIME @ 0x1C00AD67C (zzzImeCanDestroyDefIME.c)
 * Callees:
 *     ImeSetTopmost @ 0x1C001C474 (ImeSetTopmost.c)
 */

void __fastcall ImeCheckTopmost(_QWORD *a1)
{
  unsigned int v2; // r9d
  __int64 v3; // rcx
  __int64 v4; // r8

  v2 = 0;
  v3 = a1[12];
  if ( v3 )
  {
    v4 = v3;
    if ( a1[2] == gptiForeground )
      v4 = 0LL;
    if ( (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 24LL) & 8) != 0 || *(_DWORD *)(a1[5] + 236LL) != 1 )
      v2 = 1;
    ImeSetTopmost(a1, v2, v4);
  }
}
