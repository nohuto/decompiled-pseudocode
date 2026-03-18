/*
 * XREFs of NtUserSetThreadState @ 0x1C012A650
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetThreadState(unsigned int a1, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx

  v4 = 1LL;
  EnterCrit(0LL, 1LL);
  if ( (a1 & 0xFFFFBFFF) != 0 )
  {
    UserSetLastError(3221225485LL, v5, v6, v7);
    v4 = 0LL;
  }
  else
  {
    v8 = gptiCurrent;
    v9 = *(_QWORD *)(gptiCurrent + 432LL);
    v10 = *(_DWORD *)(v9 + 388) ^ a2 & (a1 ^ *(_DWORD *)(v9 + 388));
    *(_DWORD *)(v9 + 388) = v10;
  }
  UserSessionSwitchLeaveCrit(v10, v5, v8, v9);
  return v4;
}
