/*
 * XREFs of ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C00BF0AC
 * Callers:
 *     zzzImeSetFutureOwner @ 0x1C0086C10 (zzzImeSetFutureOwner.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WantImeWindow(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax

  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x2000000) != 0 )
    return 0LL;
  if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 18LL) & 4) != 0 )
    return 0LL;
  v2 = *((_QWORD *)a2 + 3);
  if ( !v2 )
    return 0LL;
  v3 = *(_QWORD *)(v2 + 40);
  if ( !v3 || (*(_DWORD *)(v3 + 32) & 4) != 0 )
    return 0LL;
  while ( a1 && v2 == *((_QWORD *)a1 + 3) )
  {
    if ( a1 == *(struct tagWND **)(v2 + 104) )
      return 0LL;
    a1 = (struct tagWND *)*((_QWORD *)a1 + 13);
  }
  return 1LL;
}
