/*
 * XREFs of NtUserShowSystemCursor @ 0x1C01F64B0
 * Callers:
 *     <none>
 * Callees:
 *     GreHidePointer @ 0x1C000A6D0 (GreHidePointer.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     CheckWinstaAttributeAccess @ 0x1C006A910 (CheckWinstaAttributeAccess.c)
 */

__int64 __fastcall NtUserShowSystemCursor(int a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  EnterCrit(0LL, 1LL);
  v3 = 0;
  if ( (unsigned int)CheckWinstaAttributeAccess(16LL) )
  {
    LOBYTE(v3) = a1 == 0;
    v3 = GreHidePointer(v3);
  }
  else
  {
    UserSetLastError(5LL, v2);
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v3;
}
