/*
 * XREFs of ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C0034C20
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     zzzImeSetFutureOwner @ 0x1C006D7A0 (zzzImeSetFutureOwner.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WantImeWindow(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax

  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x2000000) != 0 )
    return 0LL;
  if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 18LL) & 4) != 0 )
    return 0LL;
  v3 = *((_QWORD *)a2 + 3);
  if ( !v3 )
    return 0LL;
  v4 = *(_QWORD *)(v3 + 40);
  if ( !v4 || (*(_DWORD *)(v4 + 32) & 4) != 0 )
    return 0LL;
  while ( a1 && v3 == *((_QWORD *)a1 + 3) )
  {
    if ( a1 == *(struct tagWND **)(v3 + 104) )
      return 0LL;
    a1 = (struct tagWND *)*((_QWORD *)a1 + 10);
  }
  return 1LL;
}
