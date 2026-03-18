/*
 * XREFs of NtUserEnableWindowGDIScaledDpiMessage @ 0x1C015C470
 * Callers:
 *     <none>
 * Callees:
 *     xxxEnableWindowGDIScaledDpiMessageX @ 0x1C015C530 (xxxEnableWindowGDIScaledDpiMessageX.c)
 */

__int64 __fastcall NtUserEnableWindowGDIScaledDpiMessage(__int64 a1, unsigned int a2)
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
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v4;
  if ( v4 )
  {
    v12 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v12;
    v13 = v4;
    HMLockObject(v4);
    v6 = xxxEnableWindowGDIScaledDpiMessageX(v7, a2);
    ThreadUnlock1(v9, v8, v10);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
