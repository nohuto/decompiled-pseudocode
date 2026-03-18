/*
 * XREFs of ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C000ACAC
 * Callers:
 *     xxxDesktopThread @ 0x1C000D660 (xxxDesktopThread.c)
 * Callees:
 *     xxxEnsureMonitorCursors @ 0x1C0008198 (xxxEnsureMonitorCursors.c)
 *     TransitionCursorSuppressionState @ 0x1C000A5B0 (TransitionCursorSuppressionState.c)
 *     ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01A812C (-xxxRestoreMouseCursors@Feedback@@YAXXZ.c)
 *     ?xxxSwitchCursors@@YAXH@Z @ 0x1C01A81B8 (-xxxSwitchCursors@@YAXH@Z.c)
 */

void HandlePointerCursorSideOp(void)
{
  signed __int32 v0; // eax
  signed __int32 v1; // ett
  unsigned __int32 v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  Feedback *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9

  _m_prefetchw(&Feedback::gdwPointerCursorOps);
  v0 = Feedback::gdwPointerCursorOps;
  do
  {
    v1 = v0;
    v0 = _InterlockedCompareExchange((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 0, v0);
  }
  while ( v1 != v0 );
  v2 = v0;
  if ( (v0 & 1) != 0 )
  {
    EnterCrit(0LL, 1LL);
    Feedback::xxxRestoreMouseCursors(v12);
    UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  }
  if ( (v2 & 0x300) != 0 )
  {
    EnterCrit(0LL, 1LL);
    xxxSwitchCursors((v2 >> 8) & 1);
    Feedback::gfInRange = 0;
    UserSessionSwitchLeaveCrit(v18, v17, v19, v20);
  }
  if ( (v2 & 2) != 0 )
  {
    EnterCrit(0LL, 1LL);
    if ( gCursorSuppressionState == 4 )
    {
      v6 = 8;
    }
    else if ( gCursorSuppressionState == 5 )
    {
      v6 = 1;
    }
    else
    {
      v7 = (unsigned int)(gCursorSuppressionState - 6);
      if ( gCursorSuppressionState == 6 )
      {
        v6 = 2;
      }
      else
      {
        if ( gCursorSuppressionState != 7 )
          goto LABEL_11;
        v6 = 3;
      }
    }
    TransitionCursorSuppressionState(v6, 0);
LABEL_11:
    UserSessionSwitchLeaveCrit(v7, v3, v4, v5);
  }
  if ( (v2 & 4) != 0 )
  {
    EnterCrit(0LL, 1LL);
    xxxEnsureMonitorCursors();
    UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  }
}
