/*
 * XREFs of NtUserGetSystemMenu @ 0x1C00C2060
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetSystemMenu @ 0x1C00C2104 (xxxGetSystemMenu.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetSystemMenu(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *SystemMenu; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = 0LL;
  gbValidateHandleForIL = 0;
  v5 = ValidateHwnd(a1);
  if ( v5 )
  {
    v12[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v12;
    v12[1] = v5;
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    SystemMenu = (__int64 *)xxxGetSystemMenu((struct tagWND *)v5);
    if ( SystemMenu )
      v2 = *SystemMenu;
    ThreadUnlock1(v9, v8, v10);
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v2;
}
