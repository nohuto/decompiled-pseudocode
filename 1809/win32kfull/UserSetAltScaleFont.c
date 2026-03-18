/*
 * XREFs of UserSetAltScaleFont @ 0x1C00BFB38
 * Callers:
 *     SetIconMetrics @ 0x1C00BEFB0 (SetIconMetrics.c)
 *     xxxSetNCFonts @ 0x1C00BF664 (xxxSetNCFonts.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01C62D8 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C00549E8 (GreExtGetObjectW.c)
 *     GreCreateFontIndirectW @ 0x1C007DE28 (GreCreateFontIndirectW.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall UserSetAltScaleFont(HSURF a1, __int64 *a2)
{
  unsigned int v3; // ebx
  __int64 FontIndirectW; // rax
  INT a; // [rsp+20h] [rbp-78h] BYREF
  INT v7; // [rsp+24h] [rbp-74h]

  v3 = 0;
  if ( !(unsigned int)GreExtGetObjectW(a1, 92LL, (char *)&a) )
    return 0LL;
  a = EngMulDiv(a, 96, *(unsigned __int16 *)(gpsi + 6998LL));
  v7 = EngMulDiv(v7, 96, *(unsigned __int16 *)(gpsi + 6998LL));
  FontIndirectW = GreCreateFontIndirectW((__int64)&a, 0x88u);
  *a2 = FontIndirectW;
  LOBYTE(v3) = FontIndirectW != 0;
  return v3;
}
