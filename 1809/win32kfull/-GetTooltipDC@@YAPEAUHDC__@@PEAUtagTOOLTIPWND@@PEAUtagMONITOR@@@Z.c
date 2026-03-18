/*
 * XREFs of ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C0131608
 * Callers:
 *     ?InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C013159C (-InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C01513D0 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C022782C (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C02278E0 (-TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 * Callees:
 *     GreSelectFont @ 0x1C0056790 (GreSelectFont.c)
 *     GetDPIMETRICSForDpi @ 0x1C00AB75C (GetDPIMETRICSForDpi.c)
 */

HDC __fastcall GetTooltipDC(struct tagTOOLTIPWND *a1, struct tagMONITOR *a2)
{
  HDC result; // rax
  HDC v5; // rdi
  unsigned __int16 v6; // cx

  result = (HDC)_GetDCEx(*(_QWORD *)a1, 0LL, 65539LL);
  v5 = result;
  if ( result )
  {
    if ( a2 )
      v6 = *(_WORD *)(*((_QWORD *)a2 + 5) + 64LL);
    else
      v6 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 284LL);
    GetDPIMETRICSForDpi(v6);
    GreSelectFont(v5);
    return v5;
  }
  return result;
}
