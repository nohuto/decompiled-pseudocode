/*
 * XREFs of NtUserShowSystemCursor @ 0x1C0236230
 * Callers:
 *     <none>
 * Callees:
 *     GreHidePointer @ 0x1C0031C10 (GreHidePointer.c)
 *     CheckWinstaAttributeAccess @ 0x1C0089140 (CheckWinstaAttributeAccess.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall NtUserShowSystemCursor(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ebx
  __int64 v7; // rcx

  EnterCrit(0LL, 1LL);
  v6 = 0;
  if ( (unsigned int)CheckWinstaAttributeAccess(16LL, v2) )
  {
    LOBYTE(v6) = a1 == 0;
    v6 = GreHidePointer(v6);
  }
  else
  {
    UserSetLastError(5LL, v3, v4, v5);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v6;
}
