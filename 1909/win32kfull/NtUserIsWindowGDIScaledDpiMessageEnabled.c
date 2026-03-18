/*
 * XREFs of NtUserIsWindowGDIScaledDpiMessageEnabled @ 0x1C0230A30
 * Callers:
 *     <none>
 * Callees:
 *     IsWindowGDIScaledDpiMessageEnabledX @ 0x1C01E6F50 (IsWindowGDIScaledDpiMessageEnabledX.c)
 */

__int64 __fastcall NtUserIsWindowGDIScaledDpiMessageEnabled(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
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
  v2 = ValidateHwnd(a1);
  v4 = 0;
  v5 = v2;
  if ( v2 )
  {
    v12 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v12;
    v13 = v2;
    HMLockObject(v2);
    v4 = IsWindowGDIScaledDpiMessageEnabledX(v5, v6, v7);
    ThreadUnlock1(v9, v8, v10);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
