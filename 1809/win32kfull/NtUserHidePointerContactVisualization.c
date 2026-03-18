/*
 * XREFs of NtUserHidePointerContactVisualization @ 0x1C0217D40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall NtUserHidePointerContactVisualization(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9

  EnterCrit(0LL, 1LL);
  if ( (unsigned int)(a1 - 2) > 0xFFFD )
  {
    v7 = 0;
    UserSetLastError(87LL, v2, v3, v4);
  }
  else
  {
    v7 = CTouchProcessor::SetPointerVisualization(gpTouchProcessor, a1, 0, 0LL, 1);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v8, v9);
  return v7;
}
