/*
 * XREFs of ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18001F720
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001D830 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z @ 0x18001077C (-ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z.c)
 *     ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x180010880 (-ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180012FC0 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800198B0 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180019C10 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180032028 (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180032054 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180073C5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x180076094 (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800882AC (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     McTemplateU0pq @ 0x180088340 (McTemplateU0pq.c)
 */

__int64 __fastcall CTopLevelWindow3D::ShowWindow(CTopLevelWindow3D *this, unsigned __int8 a2, char a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdx
  int v7; // eax
  int v8; // eax
  __int64 v10; // r11
  CLivePreview *v11; // rcx
  int v13; // eax
  HWND v14; // rsi
  int SnapshotIndex; // eax
  CTransitionVisualController *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  int started; // eax
  unsigned int v24; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CTransitionWindowSnapshot *v26; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  if ( !a2 || *(char *)(*((_QWORD *)this + 41) + 599LL) < 0 )
  {
    v6 = *((_QWORD *)this + 41);
    if ( *(char *)(v6 + 599) < 0
      || (*(_DWORD *)(v6 + 604) & 0xFFF) == 0xFFF
      || (v14 = *(HWND *)(v6 + 40),
          SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(
                            *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
                            v14),
          (int)CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v16, SnapshotIndex, &v26) < 0) )
    {
      if ( !*((_QWORD *)this + 45) || *((_DWORD *)this + 92) != 3 )
      {
        v7 = CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
        v3 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x12Du);
        }
        else
        {
          v8 = CTopLevelWindow::ShowWindow(*(CTopLevelWindow **)(*((_QWORD *)this + 41) + 392LL), 0);
          v3 = v8;
          if ( v8 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x12Fu);
        }
      }
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0pq(v18, v17, v14, 0LL);
      started = CTopLevelWindow3D::StartDelayHideAnimation(this);
      v3 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x124u);
    }
    return v3;
  }
  if ( CTopLevelWindow3D::ShouldDelayTransition(this, a2) )
  {
    v21 = CTopLevelWindow3D::StartAnimation((__int64)this, 7u);
    v3 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x10Du);
  }
  else
  {
    if ( !CTopLevelWindow3D::ShouldShowTransition((__int64)this, 1) )
    {
LABEL_10:
      if ( !*((_QWORD *)this + 45) )
      {
        v10 = *((_QWORD *)this + 41);
        v11 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 64);
        if ( !*((_BYTE *)v11 + 280)
          || !v10
          || !CLivePreview::_IsInLivePreview(v11, *((const struct CWindowData **)this + 41)) )
        {
          v13 = CTopLevelWindow::ShowWindow(*(CTopLevelWindow **)(v10 + 392), 1);
          v3 = v13;
          if ( v13 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x11Cu);
        }
      }
      return v3;
    }
    if ( !a3 )
    {
      v20 = *((_QWORD *)this + 41);
      if ( *(_DWORD *)(v20 + 604) != 93 )
        goto LABEL_10;
      *(_DWORD *)(v20 + 604) = 4095;
    }
    if ( *((_QWORD *)this + 45) )
    {
      v22 = CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
      if ( v22 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x114,
          (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
          (const char *)(unsigned int)v22,
          v24);
    }
    v19 = CTopLevelWindow3D::StartAnimation((__int64)this, 1u);
    v3 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x116u);
  }
  return v3;
}
