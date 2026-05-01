/*
 * XREFs of ??1unique_animation_clock@@QEAA@XZ @ 0x180266B78
 * Callers:
 *     _CDesktopPositioner::_OnViewGainedForeground_::_1_::dtor$3 @ 0x1800E6288 (_CDesktopPositioner--_OnViewGainedForeground_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall unique_animation_clock::~unique_animation_clock(unique_animation_clock *this)
{
  __int128 v1; // xmm0
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_BYTE *)this + 16) )
  {
    v1 = *(_OWORD *)this;
    *((_BYTE *)this + 16) = 0;
    v2 = v1;
    DwmpEndAnimationClock(&v2);
  }
}
