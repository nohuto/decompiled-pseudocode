/*
 * XREFs of StopFade @ 0x1C0152D60
 * Callers:
 *     xxxTooltipWndProc @ 0x1C00B84F0 (xxxTooltipWndProc.c)
 *     xxxDwmStopRedirection @ 0x1C00C6C60 (xxxDwmStopRedirection.c)
 *     zzzDwmStartRedirection @ 0x1C00C8200 (zzzDwmStartRedirection.c)
 *     xxxSwitchDesktop @ 0x1C00D513C (xxxSwitchDesktop.c)
 *     EditionHandleSonarKeyEvent @ 0x1C011C3B0 (EditionHandleSonarKeyEvent.c)
 *     zzzAnimateFade @ 0x1C0152BA8 (zzzAnimateFade.c)
 *     EditionStopSonar @ 0x1C01D40B0 (EditionStopSonar.c)
 *     zzzStartSonar @ 0x1C01D479C (zzzStartSonar.c)
 *     MNAnimate @ 0x1C0231404 (MNAnimate.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     GreGetLayout @ 0x1C007BE5C (GreGetLayout.c)
 *     FindTimer @ 0x1C00EB348 (FindTimer.c)
 *     DeleteFadeSprite @ 0x1C0152EF0 (DeleteFadeSprite.c)
 */

__int64 StopFade()
{
  __int64 v0; // rax
  int v1; // ecx
  int v2; // edi
  HDC DCEx; // rbx
  int v4; // esi
  unsigned __int8 Layout; // al
  __int64 StockObject; // rax
  __int64 result; // rax

  FindTimer(*((_QWORD *)&gTermIO + 1), 65526LL, 2u, 1, 0LL);
  v0 = DeleteFadeSprite();
  v1 = gfade[6];
  if ( (v1 & 2) == 0 && (v1 & 1) != 0 )
  {
    if ( v0 )
    {
      v2 = 0;
      DCEx = (HDC)_GetDCEx(v0, 0LL, 3LL);
      v4 = 0;
    }
    else
    {
      v2 = gfade[3];
      v4 = HIDWORD(gfade[3]);
      DCEx = *(HDC *)(gpDispInfo + 56LL);
    }
    Layout = GreGetLayout(DCEx);
    NtGdiBitBltInternal(DCEx, v2, v4, gfade[4], HIDWORD(gfade[4]), (HDC)gfade[1], 0, 0, (Layout << 31) + 13369376, 0, 0);
    _ReleaseDC(DCEx);
  }
  StockObject = GreGetStockObject(21LL);
  GreSelectBitmap(gfade[1], StockObject);
  GreCleanDC(gfade[1]);
  GreSetDCOwnerEx(gfade[1], 0LL, 0LL, 0LL);
  GreDeleteObject(gfade[2]);
  gfade[2] = 0LL;
  result = gfade[0];
  LODWORD(gfade[6]) = 0;
  return result;
}
