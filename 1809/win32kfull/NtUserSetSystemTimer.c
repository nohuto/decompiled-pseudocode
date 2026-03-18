/*
 * XREFs of NtUserSetSystemTimer @ 0x1C021D3B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _SetSystemTimer @ 0x1C00DC7D4 (_SetSystemTimer.c)
 */

__int64 __fastcall NtUserSetSystemTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v11 = 0LL;
  if ( v6 )
  {
    if ( *(_QWORD *)(v6 + 16) == gptiCurrent )
      v11 = SetSystemTimer(v6, a2, a3, 0LL, 0);
    else
      UserSetLastError(5LL, v7, v9, v10);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
