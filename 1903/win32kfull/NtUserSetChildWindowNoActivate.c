/*
 * XREFs of NtUserSetChildWindowNoActivate @ 0x1C013AC50
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetChildWindowNoActivate(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+30h] [rbp-18h]

  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = v2;
  if ( v2 )
  {
    v13 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v13;
    v14 = v2;
    HMLockObject(v2);
    if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x40) != 0 )
    {
      SetOrClrWF(1, v5, 0xD910u, 1);
      v4 = 1LL;
    }
    else
    {
      UserSetLastError(87LL, v6, v7, v8);
    }
    ThreadUnlock1(v10, v9, v11);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
