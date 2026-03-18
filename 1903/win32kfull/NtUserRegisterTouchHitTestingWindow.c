/*
 * XREFs of NtUserRegisterTouchHitTestingWindow @ 0x1C0129200
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _SetTargetingWindowValue @ 0x1C012927C (_SetTargetingWindowValue.c)
 */

__int64 __fastcall NtUserRegisterTouchHitTestingWindow(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  int v8; // ebx

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v8 = 0;
  if ( v4 )
  {
    if ( gptiCurrent == *(_QWORD *)(v4 + 16) )
      v8 = SetTargetingWindowValue(v4, a2);
    else
      UserSetLastError(5LL, v5, v4, v7);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
