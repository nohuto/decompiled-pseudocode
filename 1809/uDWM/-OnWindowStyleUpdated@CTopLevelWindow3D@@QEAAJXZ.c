/*
 * XREFs of ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18000D720
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000D380 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ @ 0x1800058E8 (-IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18000BC08 (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z @ 0x18001077C (-ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180012FC0 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800198B0 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180019C10 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ @ 0x180027144 (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180039E24 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180073C5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x180076094 (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::OnWindowStyleUpdated(CTopLevelWindow3D *this)
{
  __int64 v1; // rax
  int v3; // edx
  int v4; // ecx
  char v5; // al
  unsigned int v7; // edi
  int v8; // eax
  unsigned int v9; // esi
  __int128 v10; // xmm0
  __int64 v11; // rax
  int v12; // eax
  int started; // eax
  unsigned int v14; // edi
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // r11
  CLivePreview *v18; // rcx
  int v19; // eax
  unsigned int v20; // ebx
  CTopLevelWindow *v21; // rcx
  int v22; // eax
  unsigned int v23; // edi
  int v24; // eax
  unsigned int v25; // edi
  int v26; // eax
  unsigned int v27; // edi
  int v28; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 41);
  v3 = *(_DWORD *)(v1 + 100) & 0x20000000;
  v4 = *(_DWORD *)(v1 + 100) & 0x1000000;
  v5 = v4 != 0;
  if ( *((_BYTE *)this + 288) == (v3 != 0) )
  {
    if ( v5 == *((_BYTE *)this + 289) || v3 )
      return 0LL;
    *((_BYTE *)this + 289) = v5;
    v7 = 4;
    if ( v4 )
      v7 = 2;
    if ( !(unsigned __int8)CTopLevelWindow3D::ShouldShowTransition(this, v7) )
      return 0LL;
    v8 = CTopLevelWindow3D::EnsureSecondaryWindowRepresentation(this);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = *(_OWORD *)(*((_QWORD *)this + 41) + 48LL);
      *((_DWORD *)this + 93) = v7;
      *(_OWORD *)((char *)this + 308) = v10;
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x233,
      (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
      (const char *)(unsigned int)v8,
      v28);
    return v9;
  }
  else
  {
    *((_BYTE *)this + 288) = v3 != 0;
    *((_BYTE *)this + 289) = v5;
    if ( (unsigned __int8)CTopLevelWindow3D::ShouldShowTransition(this, 3LL) )
    {
      v11 = *((_QWORD *)this + 41);
      if ( *((_BYTE *)this + 288) )
      {
        if ( (*(_BYTE *)(v11 + 596) & 0x40) == 0 && !CTopLevelWindow3D::IsWindowInSystemArrangementAnimation(this) )
        {
          if ( *((_QWORD *)this + 45) )
          {
            v12 = CTopLevelWindow3D::StopAnimation(this);
            if ( v12 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x206,
                (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
                (const char *)(unsigned int)v12,
                v28);
          }
          started = CTopLevelWindow3D::StartAnimation(this, 3LL);
          v14 = started;
          if ( started < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x208,
              (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
              (const char *)(unsigned int)started,
              v28);
            return v14;
          }
        }
      }
      else
      {
        v21 = *(CTopLevelWindow **)(v11 + 392);
        if ( (*(_BYTE *)(v11 + 599) & 8) != 0 )
        {
          v22 = CTopLevelWindow::ShowWindow(v21, 1);
          v23 = v22;
          if ( v22 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x20F,
              (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
              (const char *)(unsigned int)v22,
              v28);
            return v23;
          }
          *(_BYTE *)(*((_QWORD *)this + 41) + 599LL) &= ~8u;
        }
        else
        {
          v24 = CTopLevelWindow::ShowWindow(v21, 0);
          v25 = v24;
          if ( v24 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x217,
              (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
              (const char *)(unsigned int)v24,
              v28);
            return v25;
          }
          *((_BYTE *)this + 480) = 1;
          v26 = CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
          v27 = v26;
          if ( v26 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x219,
              (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
              (const char *)(unsigned int)v26,
              v28);
            return v27;
          }
        }
      }
      v15 = CTopLevelWindow3D::OnZOrderUpdated(this, 1);
      v16 = v15;
      if ( v15 >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x220,
        (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
        (const char *)(unsigned int)v15,
        v28);
      return v16;
    }
    else
    {
      v17 = *((_QWORD *)this + 41);
      v18 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 64);
      if ( *((_BYTE *)v18 + 280)
        && v17
        && CLivePreview::_IsInLivePreview(v18, *((const struct CWindowData **)this + 41)) )
      {
        return 0LL;
      }
      v19 = CTopLevelWindow::ShowWindow(*(CTopLevelWindow **)(v17 + 392), 1);
      v20 = v19;
      if ( v19 >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x226,
        (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
        (const char *)(unsigned int)v19,
        v28);
      return v20;
    }
  }
}
