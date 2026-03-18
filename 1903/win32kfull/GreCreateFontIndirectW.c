/*
 * XREFs of GreCreateFontIndirectW @ 0x1C004BB3C
 * Callers:
 *     DrawFrameControl @ 0x1C008CAFC (DrawFrameControl.c)
 *     xxxSetNCFonts @ 0x1C00E4B34 (xxxSetNCFonts.c)
 *     UserSetAltScaleFont @ 0x1C00E5570 (UserSetAltScaleFont.c)
 *     CreateFontFromUserProfile @ 0x1C00E56D4 (CreateFontFromUserProfile.c)
 *     ValidateExternalLogFont @ 0x1C00E59CC (ValidateExternalLogFont.c)
 *     FinishStockFontInit @ 0x1C00E6D90 (FinishStockFontInit.c)
 *     CreateScaledFont @ 0x1C01CCA70 (CreateScaledFont.c)
 * Callees:
 *     vConvertLogFontW @ 0x1C004BAE0 (vConvertLogFontW.c)
 *     hfontCreate @ 0x1C004BDC0 (hfontCreate.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall GreCreateFontIndirectW(__int64 a1, unsigned int a2)
{
  _BYTE Src[432]; // [rsp+30h] [rbp-1C8h] BYREF

  memset(Src, 0, 0x1A4uLL);
  vConvertLogFontW((__int64)Src, a1);
  return hfontCreate(Src, a2);
}
