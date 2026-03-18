/*
 * XREFs of _GetCursorInfo @ 0x1C006A980
 * Callers:
 *     NtUserGetCursorInfo @ 0x1C006A7E0 (NtUserGetCursorInfo.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UsingPenCursors @ 0x1C006AA08 (UsingPenCursors.c)
 */

__int64 __fastcall GetCursorInfo(__int64 a1, __int64 a2)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // eax
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1, a2);
  v4 = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
  v5 = 0LL;
  *(_QWORD *)(a1 + 16) = v4;
  v6 = gCursorSuppressionState;
  *(_DWORD *)(a1 + 4) = 0;
  if ( v6 > 0 && v6 < 7 && v6 != 4 || (unsigned int)UsingPenCursors() && Feedback::gfInRange == (_DWORD)v5 )
  {
    *(_DWORD *)(a1 + 4) = 2;
  }
  else if ( gpcurPhysCurrent != v5 )
  {
    *(_DWORD *)(a1 + 4) = 1;
  }
  result = gpcurLogCurrent;
  if ( gpcurLogCurrent )
    v5 = *gpcurLogCurrent;
  *(_QWORD *)(a1 + 8) = v5;
  return result;
}
