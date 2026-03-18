/*
 * XREFs of NtUserShowWindow @ 0x1C002DEA0
 * Callers:
 *     <none>
 * Callees:
 *     xxxShowWindowEx @ 0x1C002E00C (xxxShowWindowEx.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall NtUserShowWindow(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwndEx(a1, 1LL, 1LL);
  v6 = 0;
  v7 = v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 40);
    if ( (((*(_WORD *)(v5 + 42) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      v12 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v12;
      v13 = v4;
      HMLockObject(v4);
      if ( a2 > 0xB || *(char *)(*(_QWORD *)(v7 + 40) + 20LL) < 0 )
        UserSetLastError(87LL);
      else
        v6 = xxxShowWindowEx((struct tagWND *)v7);
      ThreadUnlock1(v9, v8, v10);
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
