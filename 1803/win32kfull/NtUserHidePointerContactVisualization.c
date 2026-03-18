/*
 * XREFs of NtUserHidePointerContactVisualization @ 0x1C01F0A90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall NtUserHidePointerContactVisualization(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9

  EnterCrit(0LL, 1LL);
  if ( (unsigned int)(a1 - 2) > 0xFFFD )
  {
    v5 = 0;
    UserSetLastError(87LL, v2);
  }
  else
  {
    v5 = CTouchProcessor::SetPointerVisualization(gpTouchProcessor, a1, 0, 0LL, 1);
  }
  UserSessionSwitchLeaveCrit(v4, v3, v6, v7);
  return v5;
}
