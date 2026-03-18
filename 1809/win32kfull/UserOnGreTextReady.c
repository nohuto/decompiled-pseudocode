/*
 * XREFs of UserOnGreTextReady @ 0x1C00C2B5C
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00C2940 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 * Callees:
 *     SetIconMetrics @ 0x1C00BEFB0 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C00BF1B8 (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C00BF2F4 (xxxSetWindowNCMetrics.c)
 *     ?UserReinitializeStockFonts@@YAXKHH@Z @ 0x1C00C2A48 (-UserReinitializeStockFonts@@YAXKHH@Z.c)
 *     xxxLW_LoadFonts @ 0x1C00C2CF0 (xxxLW_LoadFonts.c)
 */

_BOOL8 UserOnGreTextReady()
{
  unsigned __int16 LogPixels; // ax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  struct _UNICODE_STRING *ProfileUserName; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  BOOL v9; // ebx
  struct _UNICODE_STRING *v10; // rsi
  BOOL v11; // edi
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  LogPixels = DrvGetLogPixels();
  UserReinitializeStockFonts(LogPixels, 0LL, 1);
  xxxLW_LoadFonts(0LL);
  ProfileUserName = (struct _UNICODE_STRING *)CreateProfileUserName(v13, v1, v2, v3);
  v9 = 0;
  v10 = ProfileUserName;
  if ( ProfileUserName )
  {
    gbGreTextReady = 1;
    v11 = xxxSetWindowNCMetrics(ProfileUserName, 0LL, -1);
    SetMinMetrics(v10, 0LL);
    v9 = (unsigned int)SetIconMetrics(v10, 0LL) != 0 && v11;
    FreeProfileUserName(v10, v13);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
