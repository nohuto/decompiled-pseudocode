/*
 * XREFs of NtUserSetThreadLayoutHandles @ 0x1C0235040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserSetThreadLayoutHandles(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = 0LL;
  v7 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( !v7 || *(_QWORD *)(v7 + 40) == a2 )
  {
    v8 = HKLtoPKL(gptiCurrent, a1, v5);
    if ( v8 )
    {
      LOBYTE(v6) = (WORD1(a2) & 0xF000) == 0xE000;
      if ( (_DWORD)v6 != ((WORD1(a1) & 0xF000) == 0xE000) )
        *(_QWORD *)(gptiCurrent + 792LL) = a2;
      v10[0] = gptiCurrent + 432LL;
      v10[1] = v8;
      HMAssignmentLock(v10);
      v6 = 1LL;
    }
  }
  UserSessionSwitchLeaveCrit(v4);
  return v6;
}
