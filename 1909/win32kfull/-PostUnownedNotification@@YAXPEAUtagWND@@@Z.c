/*
 * XREFs of ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x1C011BA0C
 * Callers:
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C01311C0 (PostIAMShellHookMessageEx.c)
 */

void __fastcall PostUnownedNotification(struct tagWND *a1)
{
  __int64 v1; // rdx

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
  {
    if ( !gpqForeground || (v1 = 26LL, *(struct tagWND **)(gpqForeground + 128LL) != a1) )
      v1 = 29LL;
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), v1, *(_QWORD *)a1);
  }
}
