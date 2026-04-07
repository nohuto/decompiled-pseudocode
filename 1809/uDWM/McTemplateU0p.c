/*
 * XREFs of McTemplateU0p @ 0x180088248
 * Callers:
 *     ?InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@@Z @ 0x1800053E4 (-InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@.c)
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@II@Z @ 0x180008000 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000A6D4 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000D8A0 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z @ 0x18002D90C (-SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z.c)
 *     ?SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18008C7D8 (-SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBI.c)
 *     ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18008C910 (-SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOT.c)
 *     ?_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800A6C34 (-_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?Morph@CAnimationComponent@@QEAAXXZ @ 0x1800AA4FC (-Morph@CAnimationComponent@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x180077960 (McGenEventWrite.c)
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
