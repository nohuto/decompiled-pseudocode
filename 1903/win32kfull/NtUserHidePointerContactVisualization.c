/*
 * XREFs of NtUserHidePointerContactVisualization @ 0x1C022FC00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall NtUserHidePointerContactVisualization(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  int v6; // ebx

  EnterCrit(0LL, 1LL);
  if ( (unsigned int)(a1 - 2) > 0xFFFD )
  {
    v6 = 0;
    UserSetLastError(87LL, v2, v3, v4);
  }
  else
  {
    v6 = CTouchProcessor::SetPointerVisualization(gpTouchProcessor, a1, 0, 0LL, 1);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
