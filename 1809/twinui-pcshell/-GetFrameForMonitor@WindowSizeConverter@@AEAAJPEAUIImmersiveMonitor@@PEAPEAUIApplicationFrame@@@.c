/*
 * XREFs of ?GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@Z @ 0x1803328A8
 * Callers:
 *     ?DisplaySettingsChange@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180332420 (-DisplaySettingsChange@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISP.c)
 *     ?GetPhysicalChromeOffsets@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@PEAUtagRECT@@@Z @ 0x180332AA0 (-GetPhysicalChromeOffsets@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@PEAUtagRECT@@@Z.c)
 *     ?GetPhysicalNonClientAreaOffsets@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@HHHPEAUIApplicationViewTitlebarConfiguration@@PEAUtagRECT@@@Z @ 0x180332C70 (-GetPhysicalNonClientAreaOffsets@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@HHHPEAUIApplic.c)
 * Callees:
 *     wil::ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab___ @ 0x180031A6C (wil--ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab___.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowSizeConverter::GetFrameForMonitor(
        WindowSizeConverter *this,
        struct IImmersiveMonitor *a2,
        struct IApplicationFrame **a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IImmersiveMonitor *v8; // [rsp+58h] [rbp+10h] BYREF
  struct IApplicationFrame **v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = a3;
  v8 = a2;
  v6[0] = this;
  v6[1] = &v8;
  v6[2] = &v9;
  v3 = wil::ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab___((__int64)v6);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x248,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
