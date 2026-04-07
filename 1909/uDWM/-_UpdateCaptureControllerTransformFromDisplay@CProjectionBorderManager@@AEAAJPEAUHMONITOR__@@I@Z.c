/*
 * XREFs of ?_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z @ 0x18008A40C
 * Callers:
 *     ?UpdateCaptureControllerPropertiesFromDisplays@CProjectionBorderManager@@UEAAJXZ @ 0x18003C770 (-UpdateCaptureControllerPropertiesFromDisplays@CProjectionBorderManager@@UEAAJXZ.c)
 *     ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@IAEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x180088F98 (-_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@IAEBUDWM_CAPTURE_TOKEN@@.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18007F550 (-GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ??$UpdateCaptureControllerTransformFromDisplay@NN@WindowFrameLoggingTelemetry@@SAX$$QEAN0@Z @ 0x18008562C (--$UpdateCaptureControllerTransformFromDisplay@NN@WindowFrameLoggingTelemetry@@SAX$$QEAN0@Z.c)
 *     ?_SetCaptureControllerOffsetTransform@CProjectionBorderManager@@AEAAJIHH@Z @ 0x180089FFC (-_SetCaptureControllerOffsetTransform@CProjectionBorderManager@@AEAAJIHH@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_UpdateCaptureControllerTransformFromDisplay(
        CProjectionBorderManager *this,
        HMONITOR a2,
        unsigned int a3)
{
  int DisplayRect; // eax
  CProjectionBorderManager *v5; // rcx
  unsigned int v6; // ebx
  int v8; // ebx
  int v9; // edi
  int v10; // eax
  unsigned int v11; // esi
  double v12; // [rsp+20h] [rbp-28h] BYREF
  double v13[2]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  DisplayRect = CDesktopManager::GetDisplayRect((__int64)CDesktopManager::s_pDesktopManagerInstance, a2, v13);
  v6 = DisplayRect;
  if ( DisplayRect >= 0 )
  {
    v8 = -HIDWORD(v13[0]);
    v9 = -LODWORD(v13[0]);
    v10 = CProjectionBorderManager::_SetCaptureControllerOffsetTransform(v5, a3, -LODWORD(v13[0]), -HIDWORD(v13[0]));
    v11 = v10;
    if ( v10 >= 0 )
    {
      v12 = (double)v8;
      v13[0] = (double)v9;
      WindowFrameLoggingTelemetry::UpdateCaptureControllerTransformFromDisplay<double,double>(
        (__int64)v13,
        (__int64)&v12);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3FE,
        (__int64)"windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)v10);
      return v11;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3FB,
      (__int64)"windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)DisplayRect);
    return v6;
  }
}
