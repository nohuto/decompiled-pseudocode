/*
 * XREFs of NtUserGetSystemMenu @ 0x1C00FB6B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetSystemMenu @ 0x1C00FB780 (xxxGetSystemMenu.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetSystemMenu(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  struct tagWND *v4; // rbx
  __int64 *SystemMenu; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = 0LL;
  gbValidateHandleForIL = 0;
  v4 = (struct tagWND *)ValidateHwnd(a1);
  if ( v4 )
  {
    v10 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v10;
    v11 = v4;
    HMLockObject(v4);
    SystemMenu = (__int64 *)xxxGetSystemMenu(v4);
    if ( SystemMenu )
      v2 = *SystemMenu;
    ThreadUnlock1(v7, v6, v8);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
