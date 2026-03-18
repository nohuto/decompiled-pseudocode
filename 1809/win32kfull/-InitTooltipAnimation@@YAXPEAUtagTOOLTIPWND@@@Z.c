/*
 * XREFs of ?InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C013159C
 * Callers:
 *     xxxTooltipWndProc @ 0x1C00B84F0 (xxxTooltipWndProc.c)
 * Callees:
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C0131608 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 */

void __fastcall InitTooltipAnimation(struct tagTOOLTIPWND *a1)
{
  HDC TooltipDC; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 CompatibleDC; // rax

  TooltipDC = GetTooltipDC(a1, 0LL);
  CompatibleDC = GreCreateCompatibleDC(TooltipDC, v3, v4);
  *((_QWORD *)a1 + 2) = CompatibleDC;
  if ( CompatibleDC )
  {
    _ReleaseDC(TooltipDC);
    GreSetDCOwnerEx(*((_QWORD *)a1 + 2), 0LL, 0LL, 1LL);
  }
}
