/*
 * XREFs of NtUserIsWindowBroadcastingDpiToChildren @ 0x1C00F0620
 * Callers:
 *     <none>
 * Callees:
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C00F069C (IsWindowBroadcastingDpiToChildrenX.c)
 */

__int64 __fastcall NtUserIsWindowBroadcastingDpiToChildren(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v2;
  if ( v2 )
  {
    v12[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v12;
    v12[1] = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v6 = IsWindowBroadcastingDpiToChildrenX(v2);
    ThreadUnlock1(v9, v8, v10);
  }
  UserSessionSwitchLeaveCrit(v3, v7, v4, v5);
  return v6;
}
