/*
 * XREFs of NtUserRegisterTouchHitTestingWindow @ 0x1C0016ED0
 * Callers:
 *     <none>
 * Callees:
 *     _SetTargetingWindowValue @ 0x1C0016F4C (_SetTargetingWindowValue.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 */

__int64 __fastcall NtUserRegisterTouchHitTestingWindow(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  if ( v4 )
  {
    if ( gptiCurrent == *(_QWORD *)(v4 + 16) )
      v6 = SetTargetingWindowValue(v4, a2);
    else
      UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
