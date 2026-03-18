/*
 * XREFs of GreCreateFontIndirectW @ 0x1C007DE28
 * Callers:
 *     DrawFrameControl @ 0x1C007BB1C (DrawFrameControl.c)
 *     xxxSetNCFonts @ 0x1C00BF664 (xxxSetNCFonts.c)
 *     UserSetAltScaleFont @ 0x1C00BFB38 (UserSetAltScaleFont.c)
 *     CreateFontFromUserProfile @ 0x1C00BFC88 (CreateFontFromUserProfile.c)
 *     ValidateExternalLogFont @ 0x1C00BFF4C (ValidateExternalLogFont.c)
 *     FinishStockFontInit @ 0x1C00C1820 (FinishStockFontInit.c)
 *     CreateScaledFont @ 0x1C01B8B58 (CreateScaledFont.c)
 * Callees:
 *     hfontCreate @ 0x1C007E170 (hfontCreate.c)
 *     vConvertLogFontW @ 0x1C007FC10 (vConvertLogFontW.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall GreCreateFontIndirectW(__int64 a1, unsigned int a2)
{
  _BYTE Src[432]; // [rsp+30h] [rbp-1C8h] BYREF

  memset(Src, 0, 0x1A4uLL);
  vConvertLogFontW(Src, a1);
  return hfontCreate(Src, a2);
}
