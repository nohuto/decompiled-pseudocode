/*
 * XREFs of ?_GetDesktopRootVisual@CProjectionBorderManager@@AEAAJPEAI@Z @ 0x1800899CC
 * Callers:
 *     ?StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180086E00 (-StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@.c)
 * Callees:
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x180018A54 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_GetDesktopRootVisual(CProjectionBorderManager *this, unsigned int *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  __int64 v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = (unsigned __int64)this;
  *a2 = 0;
  if ( !(unsigned int)GetDesktopID(1LL, &v9) )
  {
    v3 = -2147467259;
    v4 = 985LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)v3);
    return v3;
  }
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           v9);
  if ( !RootVisualForDesktop )
  {
    v3 = -2147467261;
    v4 = 987LL;
    goto LABEL_3;
  }
  v7 = *((_QWORD *)RootVisualForDesktop + 2);
  if ( v7 )
    LODWORD(v7) = *(_DWORD *)(*(_QWORD *)(v7 + 16) + 24LL);
  *a2 = v7;
  if ( !(_DWORD)v7 )
  {
    v3 = -2147024890;
    v4 = 989LL;
    goto LABEL_3;
  }
  return 0LL;
}
