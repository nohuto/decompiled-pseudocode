/*
 * XREFs of McTemplateU0p @ 0x18008E3E8
 * Callers:
 *     ?InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@@Z @ 0x1800038EC (-InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@.c)
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800048B4 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z @ 0x18000AE9C (-SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000C4EC (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@II@Z @ 0x180029A30 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 *     ?SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18009281C (-SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBI.c)
 *     ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180092954 (-SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOT.c)
 *     ?_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800AB268 (-_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?Morph@CAnimationComponent@@QEAAXXZ @ 0x1800AE87C (-Morph@CAnimationComponent@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x18007E280 (McGenEventWrite.c)
 */

__int64 __fastcall McTemplateU0p(__int64 a1, int a2, __int64 a3)
{
  _QWORD v4[3]; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]
  __int64 v7; // [rsp+80h] [rbp+18h] BYREF

  v7 = a3;
  v4[2] = &v7;
  v6 = 0;
  v5 = 8;
  return McGenEventWrite((unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context, a2, a3, 2, (__int64)v4);
}
