/*
 * XREFs of GetDPIServerInfo @ 0x1C012C168
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0034030 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 *     FinalUserInit @ 0x1C00801F4 (FinalUserInit.c)
 *     GetWindowNCMetrics @ 0x1C0129D6C (GetWindowNCMetrics.c)
 *     xxxSetNCFonts @ 0x1C013D3B0 (xxxSetNCFonts.c)
 *     ValidateExternalLogFont @ 0x1C013E248 (ValidateExternalLogFont.c)
 *     GetCharDimensions @ 0x1C0142DC8 (GetCharDimensions.c)
 *     xxxDrawCaptionTemp @ 0x1C0158138 (xxxDrawCaptionTemp.c)
 *     CreateCompatiblePublicDC @ 0x1C0158BC0 (CreateCompatiblePublicDC.c)
 *     CreateScaledFont @ 0x1C01CC8E0 (CreateScaledFont.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F38A0 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F3C0C (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F4800 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0211494 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0217DE0 (SfnINLPKDRAWSWITCHWND.c)
 *     xxxDrawState @ 0x1C0248824 (xxxDrawState.c)
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C025A6F4 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 *     IsSysFontAndDefaultMode @ 0x1C025ADBC (IsSysFontAndDefaultMode.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetProcessDpiServerInfo @ 0x1C012C194 (GetProcessDpiServerInfo.c)
 */

__int64 __fastcall GetDPIServerInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  if ( (W32GetCurrentThreadDpiAwarenessContext(a1, a2, a3) & 0xF) != 0 )
    return GetProcessDpiServerInfo();
  else
    return Get96DpiServerInfo(v4, v3, v5);
}
