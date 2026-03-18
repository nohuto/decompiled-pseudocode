/*
 * XREFs of UserOnGreTextReady @ 0x1C0050168
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C004EA98 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 * Callees:
 *     xxxLW_LoadFonts @ 0x1C004EBF0 (xxxLW_LoadFonts.c)
 *     ?UserReinitializeStockFonts@@YAXKHH@Z @ 0x1C005021C (-UserReinitializeStockFonts@@YAXKHH@Z.c)
 *     SetIconMetrics @ 0x1C0053A98 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C0053C74 (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C0053DAC (xxxSetWindowNCMetrics.c)
 */

_BOOL8 UserOnGreTextReady()
{
  unsigned __int16 LogPixels; // ax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _UNICODE_STRING *ProfileUserName; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  BOOL v12; // ebx
  struct _UNICODE_STRING *v13; // rsi
  BOOL v14; // edi
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  LogPixels = DrvGetLogPixels();
  UserReinitializeStockFonts(LogPixels, 0, 1);
  xxxLW_LoadFonts(0LL, v1, v2, v3);
  ProfileUserName = (struct _UNICODE_STRING *)CreateProfileUserName(v16, v4, v5, v6);
  v12 = 0;
  v13 = ProfileUserName;
  if ( ProfileUserName )
  {
    gbGreTextReady = 1;
    v14 = xxxSetWindowNCMetrics(ProfileUserName, 0LL) != 0;
    SetMinMetrics(v13);
    v12 = (unsigned int)SetIconMetrics(v13) != 0 && v14;
    FreeProfileUserName(v13, v16);
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v12;
}
