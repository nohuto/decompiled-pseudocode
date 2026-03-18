/*
 * XREFs of ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x1C0135CF4
 * Callers:
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C006D9B0 (PostIAMShellHookMessageEx.c)
 */

void __fastcall PostUnownedNotification(struct tagWND *a1)
{
  unsigned int v1; // edx

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
  {
    if ( !gpqForeground || (v1 = 26, *(struct tagWND **)(gpqForeground + 120LL) != a1) )
      v1 = 29;
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), v1, *(_QWORD *)a1);
  }
}
