/*
 * XREFs of ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0019670
 * Callers:
 *     GreCreateDisplayDC @ 0x1C0017D80 (GreCreateDisplayDC.c)
 *     hbmSelectBitmap @ 0x1C001A230 (hbmSelectBitmap.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C003E140 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C0057140 (vDynamicConvertNewSurfaceDCs.c)
 *     bDynamicModeChange @ 0x1C00572B0 (bDynamicModeChange.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C0124ADC (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C01234D4 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C0123524 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 */

void __fastcall DC::pSurface(DC *this, struct SURFACE *a2)
{
  int v2; // eax

  *((_QWORD *)this + 62) = a2;
  if ( a2 && (*((_DWORD *)a2 + 29) & 0x800) != 0 )
  {
    DC::vSetDpiScaling(
      this,
      _mm_unpacklo_ps((__m128)*((unsigned int *)a2 + 165), (__m128)*((unsigned int *)a2 + 166)).m128_u64[0]);
  }
  else
  {
    v2 = *((_DWORD *)this + 130);
    if ( (v2 & 1) != 0 )
    {
      *((_DWORD *)this + 9) |= 0x10u;
      *(_QWORD *)((char *)this + 524) = 0LL;
      *((_DWORD *)this + 130) = v2 & 0xFFFFFFF8 | 4;
      *(_QWORD *)((char *)this + 532) = 0LL;
      DC::vUpdateCachedDPIScaleValue(this);
    }
  }
}
