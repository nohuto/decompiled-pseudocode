/*
 * XREFs of StopFade @ 0x1C01E9690
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0081EE8 (xxxSwitchDesktop.c)
 *     zzzDwmStartRedirection @ 0x1C00D92C4 (zzzDwmStartRedirection.c)
 *     EditionHandleSonarKeyEvent @ 0x1C01240B0 (EditionHandleSonarKeyEvent.c)
 *     xxxTooltipWndProc @ 0x1C012F5F0 (xxxTooltipWndProc.c)
 *     xxxDwmStopRedirection @ 0x1C015E1B0 (xxxDwmStopRedirection.c)
 *     EditionStopSonar @ 0x1C01E9420 (EditionStopSonar.c)
 *     zzzAnimateFade @ 0x1C01E9D48 (zzzAnimateFade.c)
 *     zzzStartSonar @ 0x1C01E9FA8 (zzzStartSonar.c)
 *     MNAnimate @ 0x1C024A048 (MNAnimate.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C006C930 (NtGdiBitBltInternal.c)
 *     GreGetLayout @ 0x1C00C7E90 (GreGetLayout.c)
 *     FindTimer @ 0x1C00DA984 (FindTimer.c)
 *     DeleteFadeSprite @ 0x1C01E93A0 (DeleteFadeSprite.c)
 */

__int64 StopFade()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rax
  int v5; // ecx
  int v6; // edi
  HDC DCEx; // rbx
  int v8; // esi
  unsigned __int8 Layout; // al
  __int64 result; // rax

  FindTimer(gTermIO[1], 65526LL, 2u, 1, 0LL);
  v4 = DeleteFadeSprite(v1, v0, v2, v3);
  v5 = gfade[6];
  if ( (v5 & 2) == 0 && (v5 & 1) != 0 )
  {
    if ( v4 )
    {
      v6 = 0;
      DCEx = (HDC)_GetDCEx(v4, 0LL, 3LL);
      v8 = 0;
    }
    else
    {
      v6 = gfade[3];
      v8 = HIDWORD(gfade[3]);
      DCEx = *(HDC *)(gpDispInfo + 56LL);
    }
    Layout = GreGetLayout(DCEx);
    NtGdiBitBltInternal(DCEx, v6, v8, gfade[4], HIDWORD(gfade[4]), (HDC)gfade[1], 0, 0, (Layout << 31) + 13369376, 0, 0);
    _ReleaseDC(DCEx);
  }
  GreGetStockObject(21LL);
  GreSelectBitmap(gfade[1]);
  GreCleanDC(gfade[1]);
  GreSetDCOwnerEx(gfade[1], 0LL, 0LL, 1LL);
  GreDeleteObject(gfade[2]);
  gfade[2] = 0LL;
  result = gfade[0];
  LODWORD(gfade[6]) = 0;
  return result;
}
