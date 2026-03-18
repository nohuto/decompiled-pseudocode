/*
 * XREFs of NtUserGetSystemMenu @ 0x1C000C580
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetSystemMenu @ 0x1C000C650 (xxxGetSystemMenu.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetSystemMenu(__int64 a1)
{
  __int64 v2; // rdi
  struct tagWND *v3; // rbx
  __int64 *SystemMenu; // rax
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = 0LL;
  gbValidateHandleForIL = 0;
  v3 = (struct tagWND *)ValidateHwnd(a1);
  if ( v3 )
  {
    v6 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v6;
    v7 = v3;
    HMLockObject(v3);
    SystemMenu = (__int64 *)xxxGetSystemMenu(v3);
    if ( SystemMenu )
      v2 = *SystemMenu;
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
