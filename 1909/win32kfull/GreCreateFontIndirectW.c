/*
 * XREFs of GreCreateFontIndirectW @ 0x1C0090888
 * Callers:
 *     DrawFrameControl @ 0x1C012B23C (DrawFrameControl.c)
 *     xxxSetNCFonts @ 0x1C013D3B0 (xxxSetNCFonts.c)
 *     UserSetAltScaleFont @ 0x1C013DDEC (UserSetAltScaleFont.c)
 *     CreateFontFromUserProfile @ 0x1C013DF50 (CreateFontFromUserProfile.c)
 *     ValidateExternalLogFont @ 0x1C013E248 (ValidateExternalLogFont.c)
 *     FinishStockFontInit @ 0x1C0140790 (FinishStockFontInit.c)
 *     CreateScaledFont @ 0x1C01CC8E0 (CreateScaledFont.c)
 * Callees:
 *     hfontCreate @ 0x1C0090AD0 (hfontCreate.c)
 *     vConvertLogFontW @ 0x1C0093D10 (vConvertLogFontW.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall GreCreateFontIndirectW(__int64 a1, unsigned int a2)
{
  _BYTE Src[432]; // [rsp+30h] [rbp-1C8h] BYREF

  memset(Src, 0, 0x1A4uLL);
  vConvertLogFontW(Src, a1);
  return hfontCreate(Src, a2);
}
