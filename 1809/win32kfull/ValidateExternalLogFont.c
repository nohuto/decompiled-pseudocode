/*
 * XREFs of ValidateExternalLogFont @ 0x1C00BFF4C
 * Callers:
 *     ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00BFDA0 (-GetLogFontFromUserProfile@@YA-AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C00C14C4 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 * Callees:
 *     GreSelectFont @ 0x1C0056790 (GreSelectFont.c)
 *     GreCreateFontIndirectW @ 0x1C007DE28 (GreCreateFontIndirectW.c)
 *     ?GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z @ 0x1C0111088 (-GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z.c)
 */

_BOOL8 __fastcall ValidateExternalLogFont(__int64 a1)
{
  BOOL v1; // ebx
  HDC v2; // rsi
  __int64 FontIndirectW; // rdi
  int CharDimensionsInternal; // eax
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v2 = *(HDC *)(gpDispInfo + 64LL);
  FontIndirectW = GreCreateFontIndirectW(a1, 0);
  if ( FontIndirectW )
  {
    GreSelectFont(v2);
    CharDimensionsInternal = GetCharDimensionsInternal(v2, 0LL, &v6, gbGreTextReady);
    if ( v6 > 0 && CharDimensionsInternal > 0 && v6 < 0x7FFF )
      v1 = CharDimensionsInternal < 0x7FFF;
    GreSelectFont(v2);
    GreDeleteObject(FontIndirectW);
  }
  return v1;
}
