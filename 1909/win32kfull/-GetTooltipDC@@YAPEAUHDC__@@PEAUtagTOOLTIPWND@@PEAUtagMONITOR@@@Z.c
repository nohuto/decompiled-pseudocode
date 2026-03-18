/*
 * XREFs of ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C00E9A1C
 * Callers:
 *     ?InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C00E99B4 (-InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C023EF0C (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C023F184 (-TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C023F6F0 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 * Callees:
 *     GetDPIMETRICSForDpi @ 0x1C012A5CC (GetDPIMETRICSForDpi.c)
 *     GreSelectFont @ 0x1C012B530 (GreSelectFont.c)
 */

HDC __fastcall GetTooltipDC(struct tagTOOLTIPWND *a1, struct tagMONITOR *a2)
{
  HDC result; // rax
  HDC v5; // rdi
  unsigned __int16 v6; // cx
  __int64 DPIMETRICSForDpi; // rax

  result = (HDC)_GetDCEx(*(_QWORD *)a1, 0LL, 65539LL);
  v5 = result;
  if ( result )
  {
    if ( a2 )
      v6 = *(_WORD *)(*((_QWORD *)a2 + 5) + 64LL);
    else
      v6 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 284LL);
    DPIMETRICSForDpi = GetDPIMETRICSForDpi(v6);
    GreSelectFont(v5, *(_QWORD *)(DPIMETRICSForDpi + 56));
    return v5;
  }
  return result;
}
