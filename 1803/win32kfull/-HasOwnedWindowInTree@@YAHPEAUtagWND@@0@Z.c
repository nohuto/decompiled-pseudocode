/*
 * XREFs of ?HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z @ 0x1C006EEE8
 * Callers:
 *     SetWindowGroupBand @ 0x1C006EDD0 (SetWindowGroupBand.c)
 *     ?HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z @ 0x1C006EEE8 (-HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z @ 0x1C006EEE8 (-HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z.c)
 *     ?IsOwnee@@YAHPEAUtagWND@@0@Z @ 0x1C006F764 (-IsOwnee@@YAHPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall HasOwnedWindowInTree(struct tagWND *a1, struct tagWND *a2)
{
  __int64 i; // rbx

  if ( (unsigned int)IsOwnee(a1, a2) )
    return 1LL;
  for ( i = *((_QWORD *)a1 + 11); i; i = *(_QWORD *)(i + 64) )
  {
    if ( (unsigned int)HasOwnedWindowInTree((struct tagWND *)i, a2) )
      return 1LL;
  }
  return 0LL;
}
