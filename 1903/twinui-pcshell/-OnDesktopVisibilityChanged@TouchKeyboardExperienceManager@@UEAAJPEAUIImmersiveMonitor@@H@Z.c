/*
 * XREFs of ?OnDesktopVisibilityChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIImmersiveMonitor@@H@Z @ 0x180311A70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?OnDesktopVisibilityChanged@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHMONITOR__@@_N@Z @ 0x180320F94 (-OnDesktopVisibilityChanged@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHMONITOR__@@_N@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnDesktopVisibilityChanged(
        KeyboardHosting::TabTipAdapter **this,
        struct IImmersiveMonitor *a2,
        int a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HMONITOR v9; // [rsp+30h] [rbp+8h] BYREF

  if ( this[69] )
  {
    v5 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, HMONITOR *))(*(_QWORD *)a2 + 40LL))(a2, &v9);
    if ( v5 < 0 )
    {
      v6 = 2228LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
    v5 = KeyboardHosting::TabTipAdapter::OnDesktopVisibilityChanged(this[69], v9, a3 != 0);
    if ( v5 < 0 )
    {
      v6 = 2229LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
