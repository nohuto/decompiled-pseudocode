/*
 * XREFs of ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C012FA60
 * Callers:
 *     ?InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C012F9F8 (-InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C023F52C (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C023F7A4 (-TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C023FD10 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 * Callees:
 *     GetDPIMETRICSForDpi @ 0x1C0021E08 (GetDPIMETRICSForDpi.c)
 *     GreSelectFont @ 0x1C008CDF0 (GreSelectFont.c)
 */

HDC __fastcall GetTooltipDC(struct tagTOOLTIPWND *a1, struct tagMONITOR *a2)
{
  HDC result; // rax
  HDC v3; // rdi
  __int64 DPIMETRICSForDpi; // rax

  result = (HDC)_GetDCEx(*(_QWORD *)a1, 0LL, 65539LL);
  v3 = result;
  if ( result )
  {
    DPIMETRICSForDpi = GetDPIMETRICSForDpi();
    GreSelectFont((__int64)v3, *(_QWORD *)(DPIMETRICSForDpi + 56));
    return v3;
  }
  return result;
}
