/*
 * XREFs of xxxLW_LoadFonts @ 0x1C004EBF0
 * Callers:
 *     UserOnGreTextReady @ 0x1C0050168 (UserOnGreTextReady.c)
 * Callees:
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C004ECB0 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C004EE60 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     xxxAddFontResourceW @ 0x1C004F254 (xxxAddFontResourceW.c)
 *     ClientLoadLocalT1Fonts @ 0x1C004F520 (ClientLoadLocalT1Fonts.c)
 *     EngCloseFNTCache @ 0x1C004F588 (EngCloseFNTCache.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C00814D8 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall xxxLW_LoadFonts(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // edi
  union _LARGE_INTEGER Interval; // [rsp+48h] [rbp+10h] BYREF

  v4 = a1;
  UserSessionSwitchLeaveCrit(a1, a2, a3, a4);
  if ( (int)UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
  {
    EnterCrit(0LL, 1LL);
    return 0LL;
  }
  else
  {
    EnterCrit(0LL, 1LL);
    if ( v4 )
    {
      v8 = 0;
      if ( gbPermanentFontsLoaded )
      {
LABEL_8:
        xxxLoadUserAndNetworkFonts();
      }
      else
      {
        while ( !gbRemoteSession || v8 < 0x960 )
        {
          if ( gdwInAtomicOperation )
          {
            v5 = gdwExtraInstrumentations;
            if ( (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
          }
          UserSessionSwitchLeaveCrit(v5, gdwInAtomicOperation, v6, v7);
          Interval.QuadPart = -2500000LL;
          KeDelayExecutionThread(0, 0, &Interval);
          EnterCrit(0LL, 1LL);
          ++v8;
          if ( gbPermanentFontsLoaded )
            goto LABEL_8;
        }
      }
      gbNetworkFontsLoaded = 1;
    }
    else
    {
      xxxAddFontResourceW(L"marlett.ttf");
      if ( (unsigned int)xxxLoadPermanentFonts() && !gbPermanentT1FontsLoaded )
      {
        if ( gbPermanentFontsLoaded )
        {
          ClientLoadLocalT1Fonts();
          gbPermanentT1FontsLoaded = 1;
          Interval.QuadPart = ghsemFntCache;
          GreAcquireSemaphore(ghsemFntCache);
          EngCloseFNTCache();
          SEMOBJ::vUnlock((SEMOBJ *)&Interval);
        }
      }
    }
    return 1LL;
  }
}
