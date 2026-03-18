/*
 * XREFs of NtUserNotifyWinEvent @ 0x1C00AC260
 * Callers:
 *     <none>
 * Callees:
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 */

__int64 __fastcall NtUserNotifyWinEvent(unsigned int a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a2);
  v6 = 0LL;
  if ( v4 )
  {
    xxxWindowEvent(a1, 1);
    v6 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
