/*
 * XREFs of NtUserIsWindowBroadcastingDpiToChildren @ 0x1C0113880
 * Callers:
 *     <none>
 * Callees:
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C0113934 (IsWindowBroadcastingDpiToChildrenX.c)
 */

__int64 __fastcall NtUserIsWindowBroadcastingDpiToChildren(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0;
  v5 = v2;
  if ( v2 )
  {
    v10 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v10;
    v11 = v2;
    HMLockObject(v2);
    v4 = IsWindowBroadcastingDpiToChildrenX(v5);
    ThreadUnlock1(v7, v6, v8);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
