/*
 * XREFs of ??A?$span@PEAVCOverlayContext@@$0?0@gsl@@QEBAAEAPEAVCOverlayContext@@_J@Z @ 0x180183958
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@PEA_N@Z @ 0x180184BD8 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AEB.c)
 *     ?AnimateSingle@?$LinearKeyframeAnimation@M@Particles@@UEBAXAEAV?$span@M$0?0@gsl@@00@Z @ 0x1801E9380 (-AnimateSingle@-$LinearKeyframeAnimation@M@Particles@@UEBAXAEAV-$span@M$0-0@gsl@@00@Z.c)
 *     ?AnimateSingle@?$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@UEBAXAEAV?$span@M$0?0@gsl@@00@Z @ 0x1801E93E0 (-AnimateSingle@-$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@UEBAXA.c)
 *     ?AnimateSingle@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@UEBAXAEAV?$span@M$0?0@gsl@@00@Z @ 0x1801E9440 (-AnimateSingle@-$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@UEBAXA.c)
 *     ?AnimateSingle@?$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@UEBAXAEAV?$span@M$0?0@gsl@@00@Z @ 0x1801E94A0 (-AnimateSingle@-$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@UEBAXA.c)
 *     ?AnimateSingle@DirectionAnimator@Particles@@UEBAXAEAV?$span@M$0?0@gsl@@000@Z @ 0x1801E9500 (-AnimateSingle@DirectionAnimator@Particles@@UEBAXAEAV-$span@M$0-0@gsl@@000@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall gsl::span<COverlayContext *,-1>::operator[](_QWORD *a1)
{
  if ( !*a1 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  return a1[1];
}
