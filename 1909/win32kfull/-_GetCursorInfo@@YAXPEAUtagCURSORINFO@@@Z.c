/*
 * XREFs of ?_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z @ 0x1C0088738
 * Callers:
 *     NtUserGetCursorInfo @ 0x1C0088600 (NtUserGetCursorInfo.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UsingPenCursors @ 0x1C00887C4 (UsingPenCursors.c)
 */

void __fastcall _GetCursorInfo(struct tagCURSORINFO *a1, __int64 a2, __int64 a3)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v5; // rax
  struct tagCURSOR *v6; // rdx
  int v7; // eax

  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext((__int64)a1, a2, a3);
  v5 = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
  v6 = 0LL;
  *((_QWORD *)a1 + 2) = v5;
  v7 = gCursorSuppressionState;
  *((_DWORD *)a1 + 1) = 0;
  if ( v7 > 0 && v7 != 4 && v7 < 7 || (unsigned int)UsingPenCursors() && Feedback::gfInRange == (_DWORD)v6 )
  {
    *((_DWORD *)a1 + 1) = 2;
  }
  else if ( gpcurPhysCurrent != v6 )
  {
    *((_DWORD *)a1 + 1) = 1;
  }
  if ( gpcurLogCurrent )
    v6 = *(struct tagCURSOR **)gpcurLogCurrent;
  *((_QWORD *)a1 + 1) = v6;
}
