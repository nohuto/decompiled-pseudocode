/*
 * XREFs of ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C012456C
 * Callers:
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     xxxSetWindowData @ 0x1C0065ECC (xxxSetWindowData.c)
 *     xxxGetSystemMenu @ 0x1C00A625C (xxxGetSystemMenu.c)
 *     VerifyChildMenu @ 0x1C015E6C4 (VerifyChildMenu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnlockWndMenuWorker(struct tagWND *a1, unsigned __int8 a2)
{
  __int64 v4; // rcx
  struct tagWND **v5; // rcx
  __int64 v6; // rax
  char *v7; // rcx

  v4 = *((_QWORD *)a1 + (a2 ^ 1LL) + 17);
  if ( !v4 )
    return 0LL;
  v5 = (struct tagWND **)(v4 + 80);
  if ( a1 == *v5 )
    HMAssignmentUnlock(v5);
  v6 = *((_QWORD *)a1 + 5);
  if ( a2 )
  {
    *(_QWORD *)(v6 + 160) = 0LL;
    v7 = (char *)a1 + 136;
  }
  else
  {
    *(_QWORD *)(v6 + 152) = 0LL;
    v7 = (char *)a1 + 144;
  }
  return HMAssignmentUnlock(v7);
}
