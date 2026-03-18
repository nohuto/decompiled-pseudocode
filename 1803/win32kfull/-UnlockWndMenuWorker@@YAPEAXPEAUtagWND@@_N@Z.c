/*
 * XREFs of ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C0103EEC
 * Callers:
 *     xxxSetWindowData @ 0x1C0025B98 (xxxSetWindowData.c)
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 *     xxxGetSystemMenu @ 0x1C00C2104 (xxxGetSystemMenu.c)
 *     VerifyChildMenu @ 0x1C013B334 (VerifyChildMenu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnlockWndMenuWorker(struct tagWND *a1, unsigned __int8 a2)
{
  __int64 v4; // rcx
  struct tagWND **v5; // rcx
  char *v6; // rcx

  v4 = *((_QWORD *)a1 + (a2 ^ 1LL) + 17);
  if ( !v4 )
    return 0LL;
  v5 = (struct tagWND **)(v4 + 80);
  if ( a1 == *v5 )
    HMAssignmentUnlock(v5);
  if ( a2 )
  {
    v6 = (char *)a1 + 136;
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 160LL) = 0LL;
  }
  else
  {
    v6 = (char *)a1 + 144;
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 152LL) = 0LL;
  }
  return HMAssignmentUnlock(v6);
}
