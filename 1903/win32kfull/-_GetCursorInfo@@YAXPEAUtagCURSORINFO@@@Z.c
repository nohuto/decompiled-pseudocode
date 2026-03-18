/*
 * XREFs of ?_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z @ 0x1C0088EC8
 * Callers:
 *     NtUserGetCursorInfo @ 0x1C0088D90 (NtUserGetCursorInfo.c)
 * Callees:
 *     UsingPenCursors @ 0x1C0088F54 (UsingPenCursors.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

void __fastcall _GetCursorInfo(struct tagCURSORINFO *a1)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v3; // rax
  struct tagCURSOR *v4; // rdx
  int v5; // eax

  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  v3 = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
  v4 = 0LL;
  *((_QWORD *)a1 + 2) = v3;
  v5 = gCursorSuppressionState;
  *((_DWORD *)a1 + 1) = 0;
  if ( v5 > 0 && v5 != 4 && v5 < 7 || (unsigned int)UsingPenCursors() && Feedback::gfInRange == (_DWORD)v4 )
  {
    *((_DWORD *)a1 + 1) = 2;
  }
  else if ( gpcurPhysCurrent != v4 )
  {
    *((_DWORD *)a1 + 1) = 1;
  }
  if ( gpcurLogCurrent )
    v4 = *(struct tagCURSOR **)gpcurLogCurrent;
  *((_QWORD *)a1 + 1) = v4;
}
