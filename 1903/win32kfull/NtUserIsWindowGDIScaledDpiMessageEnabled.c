/*
 * XREFs of NtUserIsWindowGDIScaledDpiMessageEnabled @ 0x1C0231050
 * Callers:
 *     <none>
 * Callees:
 *     IsWindowGDIScaledDpiMessageEnabledX @ 0x1C01E70D0 (IsWindowGDIScaledDpiMessageEnabledX.c)
 */

__int64 __fastcall NtUserIsWindowGDIScaledDpiMessageEnabled(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // ebx
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
  v4 = 0;
  v5 = v2;
  if ( v2 )
  {
    v13 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v13;
    v14 = v2;
    HMLockObject(v2);
    v4 = IsWindowGDIScaledDpiMessageEnabledX(v5, v6, v7, v8);
    ThreadUnlock1(v10, v9, v11);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
