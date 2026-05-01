/*
 * XREFs of ?OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x1801768F8
 * Callers:
 *     ?DisplaySettingsChange@CActionCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180175B40 (-DisplaySettingsChange@CActionCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_M.c)
 *     ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180176B38 (-OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180177000 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?IsHighContrast@@YAHXZ @ 0x180050800 (-IsHighContrast@@YAHXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_75704c66f403c7073bbf99df87ceca7e___ @ 0x18017451C (Windows--Internal--ComTaskPool--QueueTask__lambda_75704c66f403c7073bbf99df87ceca7e___.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnDpiOrHighContrastChanged(CActionCenterExperienceManager *this)
{
  unsigned int v2; // esi
  HMONITOR v3; // rax
  int ScaleFactorForMonitor; // eax
  unsigned int v5; // ebx
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  DWORD SysColor; // eax
  unsigned int v11; // eax
  unsigned int v12; // r8d
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v15; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v16; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v3 = MonitorFromPoint(0LL, 1u);
  v15 = 0;
  ScaleFactorForMonitor = GetScaleFactorForMonitor(v3, &v15);
  v5 = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor >= 0 )
  {
    v7 = 0;
    if ( (unsigned int)IsHighContrast() )
    {
      if ( !(unsigned int)IsHighContrast()
        || (SysColor = GetSysColor(5),
            v7 = 2,
            v8 = BYTE2(SysColor) + 5 * BYTE1(SysColor),
            v9 = (unsigned int)v8 + 2 * (unsigned __int8)SysColor,
            (unsigned int)v9 <= 0x400) )
      {
        v7 = 1;
      }
    }
    v11 = v15;
    if ( *((_DWORD *)this + 128) != v15 || *((_DWORD *)this + 129) != v7 )
    {
      v12 = *((_DWORD *)this + 116);
      *((_DWORD *)this + 128) = v15;
      *((_DWORD *)this + 129) = v7;
      v16 = __PAIR64__(v7, v11);
      v13 = Windows::Internal::ComTaskPool::QueueTask__lambda_75704c66f403c7073bbf99df87ceca7e___(v9, v8, v12, &v16);
      v2 = v13;
      if ( v13 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x23A,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v13);
    }
    return v2;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x218,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)ScaleFactorForMonitor);
    return v5;
  }
}
