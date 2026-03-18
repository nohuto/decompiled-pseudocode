/*
 * XREFs of ?_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z @ 0x1C00A55A8
 * Callers:
 *     NtUserGetCursorInfo @ 0x1C00A5470 (NtUserGetCursorInfo.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UsingPenCursors @ 0x1C00A5634 (UsingPenCursors.c)
 */

void __fastcall _GetCursorInfo(struct tagCURSORINFO *a1, __int64 a2)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v4; // rax
  struct tagCURSOR *v5; // rdx
  int v6; // eax

  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext((__int64)a1, a2);
  v4 = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
  v5 = 0LL;
  *((_QWORD *)a1 + 2) = v4;
  v6 = gCursorSuppressionState;
  *((_DWORD *)a1 + 1) = 0;
  if ( v6 > 0 && v6 != 4 && v6 < 7 || (unsigned int)UsingPenCursors() && Feedback::gfInRange == (_DWORD)v5 )
  {
    *((_DWORD *)a1 + 1) = 2;
  }
  else if ( gpcurPhysCurrent != v5 )
  {
    *((_DWORD *)a1 + 1) = 1;
  }
  if ( gpcurLogCurrent )
    v5 = *(struct tagCURSOR **)gpcurLogCurrent;
  *((_QWORD *)a1 + 1) = v5;
}
