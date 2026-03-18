/*
 * XREFs of xxxLW_LoadFonts @ 0x1C00E8A00
 * Callers:
 *     UserOnGreTextReady @ 0x1C00E886C (UserOnGreTextReady.c)
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C004EF74 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     xxxAddFontResourceW @ 0x1C00B4934 (xxxAddFontResourceW.c)
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C00E8AD0 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C00E8C78 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     EngCloseFNTCache @ 0x1C00E8F78 (EngCloseFNTCache.c)
 *     ClientLoadLocalT1Fonts @ 0x1C00E90EC (ClientLoadLocalT1Fonts.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall xxxLW_LoadFonts(__int64 a1)
{
  int v1; // edi
  __int64 v2; // rcx
  unsigned int v3; // edi
  union _LARGE_INTEGER Interval; // [rsp+48h] [rbp+10h] BYREF

  v1 = a1;
  UserSessionSwitchLeaveCrit(a1);
  if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
  {
    EnterCrit(0LL, 1LL);
    return 0LL;
  }
  else
  {
    EnterCrit(0LL, 1LL);
    if ( v1 )
    {
      Interval.QuadPart = 0LL;
      v3 = 0;
      if ( gbPermanentFontsLoaded )
      {
LABEL_8:
        xxxLoadUserAndNetworkFonts();
      }
      else
      {
        while ( !gbRemoteSession || v3 < 0x960 )
        {
          if ( gdwInAtomicOperation )
          {
            v2 = gdwExtraInstrumentations;
            if ( (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
          }
          UserSessionSwitchLeaveCrit(v2);
          Interval.QuadPart = -2500000LL;
          KeDelayExecutionThread(0, 0, &Interval);
          EnterCrit(0LL, 1LL);
          ++v3;
          if ( gbPermanentFontsLoaded )
            goto LABEL_8;
        }
      }
      gbNetworkFontsLoaded = 1;
    }
    else
    {
      xxxAddFontResourceW(L"marlett.ttf", 1, 0LL);
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
