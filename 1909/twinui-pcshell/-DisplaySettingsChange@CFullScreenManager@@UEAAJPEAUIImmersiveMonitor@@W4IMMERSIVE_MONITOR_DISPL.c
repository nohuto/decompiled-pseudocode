/*
 * XREFs of ?DisplaySettingsChange@CFullScreenManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18018FCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_EvictAppsOnMonitor@CFullScreenManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180192B54 (-_EvictAppsOnMonitor@CFullScreenManager@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 */

__int64 __fastcall CFullScreenManager::DisplaySettingsChange(__int64 a1, struct IImmersiveMonitor *a2, char a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 80) && (a3 & 0x20) != 0 )
  {
    v5 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 48LL))(a2, &v9);
    if ( v5 < 0 )
    {
      v6 = 387LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
    if ( !v9 )
    {
      v5 = CFullScreenManager::_EvictAppsOnMonitor((CFullScreenManager *)(a1 - 120), a2);
      if ( v5 < 0 )
      {
        v6 = 390LL;
        goto LABEL_5;
      }
    }
  }
  return 0LL;
}
