/*
 * XREFs of ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C01048F8
 * Callers:
 *     ?InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C01048A0 (-InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C01FE90C (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C01FEB40 (-TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C01FF05C (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 * Callees:
 *     GreSelectFont @ 0x1C00115F0 (GreSelectFont.c)
 *     GetDPIMETRICSForDpi @ 0x1C0013D64 (GetDPIMETRICSForDpi.c)
 */

HDC __fastcall GetTooltipDC(struct tagTOOLTIPWND *a1, struct tagMONITOR *a2)
{
  HDC result; // rax
  HDC v3; // rdi

  result = (HDC)_GetDCEx(*(_QWORD *)a1, 0LL, 65539LL);
  v3 = result;
  if ( result )
  {
    GetDPIMETRICSForDpi();
    GreSelectFont(v3);
    return v3;
  }
  return result;
}
