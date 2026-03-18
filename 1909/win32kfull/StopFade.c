/*
 * XREFs of StopFade @ 0x1C01E9510
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C0010444 (zzzDwmStartRedirection.c)
 *     xxxTooltipWndProc @ 0x1C00E96D0 (xxxTooltipWndProc.c)
 *     EditionHandleSonarKeyEvent @ 0x1C00FE9E0 (EditionHandleSonarKeyEvent.c)
 *     xxxSwitchDesktop @ 0x1C0137CE8 (xxxSwitchDesktop.c)
 *     xxxDwmStopRedirection @ 0x1C015F2D0 (xxxDwmStopRedirection.c)
 *     EditionStopSonar @ 0x1C01E92A0 (EditionStopSonar.c)
 *     zzzAnimateFade @ 0x1C01E9BC8 (zzzAnimateFade.c)
 *     zzzStartSonar @ 0x1C01E9E28 (zzzStartSonar.c)
 *     MNAnimate @ 0x1C0249908 (MNAnimate.c)
 * Callees:
 *     GreGetLayout @ 0x1C0069560 (GreGetLayout.c)
 *     FindTimer @ 0x1C007A674 (FindTimer.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 *     DeleteFadeSprite @ 0x1C01E9220 (DeleteFadeSprite.c)
 */

__int64 StopFade()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rax
  int v3; // ecx
  int v4; // edi
  HDC DCEx; // rbx
  int v6; // esi
  unsigned __int8 Layout; // al
  __int64 StockObject; // rax
  __int64 result; // rax

  FindTimer(gTermIO[1], 65526LL, 2u, 1, 0LL);
  v2 = DeleteFadeSprite(v1, v0);
  v3 = gfade[6];
  if ( (v3 & 2) == 0 && (v3 & 1) != 0 )
  {
    if ( v2 )
    {
      v4 = 0;
      DCEx = (HDC)_GetDCEx(v2, 0LL, 3LL);
      v6 = 0;
    }
    else
    {
      v4 = gfade[3];
      v6 = HIDWORD(gfade[3]);
      DCEx = *(HDC *)(gpDispInfo + 56LL);
    }
    Layout = GreGetLayout(DCEx);
    NtGdiBitBltInternal(DCEx, v4, v6, gfade[4], HIDWORD(gfade[4]), (HDC)gfade[1], 0, 0, (Layout << 31) + 13369376, 0, 0);
    _ReleaseDC(DCEx);
  }
  StockObject = GreGetStockObject(21LL);
  GreSelectBitmap(gfade[1], StockObject);
  GreCleanDC(gfade[1]);
  GreSetDCOwnerEx(gfade[1], 0LL, 0LL, 1LL);
  GreDeleteObject(gfade[2]);
  gfade[2] = 0LL;
  result = gfade[0];
  LODWORD(gfade[6]) = 0;
  return result;
}
