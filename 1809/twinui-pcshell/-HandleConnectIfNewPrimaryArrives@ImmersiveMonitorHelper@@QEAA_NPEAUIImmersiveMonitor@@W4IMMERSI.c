/*
 * XREFs of ?HandleConnectIfNewPrimaryArrives@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18029F310
 * Callers:
 *     s_HandleConnectIfNewPrimaryArrives @ 0x18029FA80 (s_HandleConnectIfNewPrimaryArrives.c)
 * Callees:
 *     ?IsCurrentMonitorAlsoPrimary@ImmersiveMonitorHelper@@AEAA_NXZ @ 0x18000B550 (-IsCurrentMonitorAlsoPrimary@ImmersiveMonitorHelper@@AEAA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?MoveStartToMonitorWithoutHiding@ImmersiveMonitorHelper@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18029F684 (-MoveStartToMonitorWithoutHiding@ImmersiveMonitorHelper@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 */

char __fastcall ImmersiveMonitorHelper::HandleConnectIfNewPrimaryArrives(
        ImmersiveMonitorHelper *a1,
        struct IImmersiveMonitor *a2,
        char a3)
{
  char v6; // bl
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v11; // [rsp+40h] [rbp+18h] BYREF
  int v12; // [rsp+48h] [rbp+20h] BYREF

  if ( (a3 & 2) == 0 )
    return 0;
  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 48LL))(a2, &v11);
  if ( v7 < 0 )
  {
    v8 = 369LL;
LABEL_8:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      v8,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v7);
    return v6;
  }
  if ( v11 )
  {
    v7 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 56LL))(a2, &v12);
    if ( v7 >= 0 )
    {
      if ( v12 && !ImmersiveMonitorHelper::IsCurrentMonitorAlsoPrimary(a1) )
      {
        v9 = ImmersiveMonitorHelper::MoveStartToMonitorWithoutHiding(a1, a2);
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            378LL,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
            (const char *)(unsigned int)v9);
        return 1;
      }
      return v6;
    }
    v8 = 372LL;
    goto LABEL_8;
  }
  return v6;
}
