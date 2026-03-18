/*
 * XREFs of NtUserShowSystemCursor @ 0x1C021DF70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     GreHidePointer @ 0x1C00A2650 (GreHidePointer.c)
 *     CheckWinstaAttributeAccess @ 0x1C00A56F0 (CheckWinstaAttributeAccess.c)
 */

__int64 __fastcall NtUserShowSystemCursor(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  EnterCrit(0LL, 1LL);
  v5 = 0;
  if ( (unsigned int)CheckWinstaAttributeAccess(16LL) )
  {
    LOBYTE(v5) = a1 == 0;
    v5 = GreHidePointer(v5);
  }
  else
  {
    UserSetLastError(5LL, v2, v3, v4);
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v5;
}
