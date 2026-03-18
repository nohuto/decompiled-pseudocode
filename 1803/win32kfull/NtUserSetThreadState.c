/*
 * XREFs of NtUserSetThreadState @ 0x1C010BF50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetThreadState(unsigned int a1, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx

  v4 = 1LL;
  EnterCrit(0LL, 1LL);
  if ( (a1 & 0xFFFFBFFF) != 0 )
  {
    UserSetLastError(3221225485LL, v5);
    v4 = 0LL;
  }
  else
  {
    v6 = gptiCurrent;
    v7 = *(_QWORD *)(gptiCurrent + 424LL);
    v8 = *(_DWORD *)(v7 + 388) ^ a2 & (a1 ^ *(_DWORD *)(v7 + 388));
    *(_DWORD *)(v7 + 388) = v8;
  }
  UserSessionSwitchLeaveCrit(v8, v5, v6, v7);
  return v4;
}
