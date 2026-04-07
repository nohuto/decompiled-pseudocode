/*
 * XREFs of ?_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@I@Z @ 0x180083A00
 * Callers:
 *     ?UpdateCaptureControllerPropertiesFromDisplays@CProjectionBorderManager@@UEAAJXZ @ 0x18003AFF0 (-UpdateCaptureControllerPropertiesFromDisplays@CProjectionBorderManager@@UEAAJXZ.c)
 *     ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@IAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180082568 (-_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@IAEBUDWM_CAPTURE_TOKEN@@.c)
 * Callees:
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800791E4 (-GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ??$UpdateCaptureControllerTransformFromDisplay@NN@WindowFrameLoggingTelemetry@@SAX$$QEAN0@Z @ 0x18007F24C (--$UpdateCaptureControllerTransformFromDisplay@NN@WindowFrameLoggingTelemetry@@SAX$$QEAN0@Z.c)
 *     ?_SetCaptureControllerOffsetTransform@CProjectionBorderManager@@AEAAJIHH@Z @ 0x1800835F4 (-_SetCaptureControllerOffsetTransform@CProjectionBorderManager@@AEAAJIHH@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_UpdateCaptureControllerTransformFromDisplay(
        CProjectionBorderManager *this,
        __int64 a2,
        unsigned int a3)
{
  int DisplayRect; // ebx
  __int64 v6; // rdx
  int v8; // edi
  int v9; // esi
  double v10; // [rsp+20h] [rbp-38h] BYREF
  double v11[2]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  DisplayRect = CDesktopManager::GetDisplayRect((__int64)CDesktopManager::s_pDesktopManagerInstance, a2, v11);
  if ( DisplayRect < 0 )
  {
    v6 = 919LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)DisplayRect);
    return (unsigned int)DisplayRect;
  }
  v8 = -HIDWORD(v11[0]);
  v9 = -LODWORD(v11[0]);
  DisplayRect = CProjectionBorderManager::_SetCaptureControllerOffsetTransform(
                  this,
                  a3,
                  -LODWORD(v11[0]),
                  -HIDWORD(v11[0]));
  if ( DisplayRect < 0 )
  {
    v6 = 922LL;
    goto LABEL_3;
  }
  v10 = (double)v8;
  v11[0] = (double)v9;
  WindowFrameLoggingTelemetry::UpdateCaptureControllerTransformFromDisplay<double,double>((__int64)v11, (__int64)&v10);
  return 0LL;
}
