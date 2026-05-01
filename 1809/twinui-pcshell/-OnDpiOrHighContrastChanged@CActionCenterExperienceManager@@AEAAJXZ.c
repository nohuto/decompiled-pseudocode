/*
 * XREFs of ?OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x18014A230
 * Callers:
 *     ?DisplaySettingsChange@CActionCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180149530 (-DisplaySettingsChange@CActionCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_M.c)
 *     ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x18014A468 (-OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18014A884 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?IsHighContrast@@YAHXZ @ 0x18000C9B4 (-IsHighContrast@@YAHXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_830bb74467276d48148af287ccc5d12f___ @ 0x18008CB78 (Windows--Internal--ComTaskPool--QueueTask__lambda_830bb74467276d48148af287ccc5d12f___.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnDpiOrHighContrastChanged(CActionCenterExperienceManager *this)
{
  unsigned int v2; // edi
  HMONITOR v3; // rax
  int ScaleFactorForMonitor; // eax
  unsigned int v5; // ebx
  int v7; // ebx
  __int64 v8; // rcx
  DWORD SysColor; // eax
  unsigned int v10; // eax
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v13; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v3 = MonitorFromPoint(0LL, 1u);
  v13 = 0;
  ScaleFactorForMonitor = GetScaleFactorForMonitor(v3, &v13);
  v5 = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor >= 0 )
  {
    v7 = 0;
    if ( (unsigned int)IsHighContrast() )
    {
      if ( !(unsigned int)IsHighContrast()
        || (SysColor = GetSysColor(5),
            v7 = 2,
            v8 = BYTE2(SysColor) + 5 * BYTE1(SysColor) + 2 * (unsigned int)(unsigned __int8)SysColor,
            (unsigned int)v8 <= 0x400) )
      {
        v7 = 1;
      }
    }
    v10 = v13;
    if ( *((_DWORD *)this + 126) != v13 || *((_DWORD *)this + 127) != v7 )
    {
      *((_DWORD *)this + 126) = v13;
      *((_DWORD *)this + 127) = v7;
      v14 = __PAIR64__(v7, v10);
      v11 = Windows::Internal::ComTaskPool::QueueTask__lambda_830bb74467276d48148af287ccc5d12f___(v8, &v14);
      v2 = v11;
      if ( v11 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x22D,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v11);
    }
    return v2;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20A,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)ScaleFactorForMonitor);
    return v5;
  }
}
