/*
 * XREFs of GreCreateFontIndirectW @ 0x1C00CA7E0
 * Callers:
 *     DrawFrameControl @ 0x1C0011304 (DrawFrameControl.c)
 *     xxxSetNCFonts @ 0x1C0054100 (xxxSetNCFonts.c)
 *     UserSetAltScaleFont @ 0x1C00545A4 (UserSetAltScaleFont.c)
 *     CreateFontFromUserProfile @ 0x1C00546D4 (CreateFontFromUserProfile.c)
 *     ValidateExternalLogFont @ 0x1C0054984 (ValidateExternalLogFont.c)
 *     FinishStockFontInit @ 0x1C0055700 (FinishStockFontInit.c)
 *     CreateScaledFont @ 0x1C0197B88 (CreateScaledFont.c)
 * Callees:
 *     hfontCreate @ 0x1C00CA860 (hfontCreate.c)
 *     vConvertLogFontW @ 0x1C00CAA60 (vConvertLogFontW.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall GreCreateFontIndirectW(__int64 a1, unsigned int a2)
{
  _BYTE Src[432]; // [rsp+30h] [rbp-1C8h] BYREF

  memset(Src, 0, 0x1A4uLL);
  vConvertLogFontW(Src, a1);
  return hfontCreate(Src, a2);
}
