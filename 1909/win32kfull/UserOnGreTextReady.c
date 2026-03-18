/*
 * XREFs of UserOnGreTextReady @ 0x1C011C848
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C011C740 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 * Callees:
 *     xxxLW_LoadFonts @ 0x1C011D370 (xxxLW_LoadFonts.c)
 *     SetIconMetrics @ 0x1C013CCA0 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C013CEB8 (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C013D004 (xxxSetWindowNCMetrics.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C01649B4 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 */

_BOOL8 UserOnGreTextReady()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  unsigned __int16 LogPixels; // ax
  struct _UNICODE_STRING *ProfileUserName; // rax
  __int64 v5; // rcx
  BOOL v6; // ebx
  struct _UNICODE_STRING *v7; // rsi
  BOOL v8; // edi
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  memset(v10, 0, 24);
  EnterCrit(0LL, 1LL);
  LogPixels = DrvGetLogPixels(v1, v0, v2);
  UserReinitializeStockFonts(LogPixels, 0);
  xxxLW_LoadFonts(0LL);
  ProfileUserName = (struct _UNICODE_STRING *)CreateProfileUserName(v10);
  v6 = 0;
  v7 = ProfileUserName;
  if ( ProfileUserName )
  {
    v8 = xxxSetWindowNCMetrics(ProfileUserName, 0LL) != 0;
    SetMinMetrics(v7);
    v6 = (unsigned int)SetIconMetrics(v7) != 0 && v8;
    FreeProfileUserName(v7, v10);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
