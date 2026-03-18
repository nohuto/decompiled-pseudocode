/*
 * XREFs of NtUserShowSystemCursor @ 0x1C0235C10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     CheckWinstaAttributeAccess @ 0x1C00889B0 (CheckWinstaAttributeAccess.c)
 *     GreHidePointer @ 0x1C013AA70 (GreHidePointer.c)
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
