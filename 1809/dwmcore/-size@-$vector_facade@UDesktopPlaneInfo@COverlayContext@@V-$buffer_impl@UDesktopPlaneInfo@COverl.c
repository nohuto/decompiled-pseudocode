/*
 * XREFs of ?size@?$vector_facade@UDesktopPlaneInfo@COverlayContext@@V?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEBA_KXZ @ 0x1800D5370
 * Callers:
 *     ?clear@?$vector_facade@UDesktopPlaneInfo@COverlayContext@@V?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180079DF8 (-clear@-$vector_facade@UDesktopPlaneInfo@COverlayContext@@V-$buffer_impl@UDesktopPlaneInfo@COver.c)
 *     ?reserve_region@?$vector_facade@UDesktopPlaneInfo@COverlayContext@@V?$buffer_impl@UDesktopPlaneInfo@COverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUDesktopPlaneInfo@COverlayContext@@_K0@Z @ 0x18016CC24 (-reserve_region@-$vector_facade@UDesktopPlaneInfo@COverlayContext@@V-$buffer_impl@UDesktopPlaneI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::vector_facade<COverlayContext::DesktopPlaneInfo,detail::buffer_impl<COverlayContext::DesktopPlaneInfo,2,1,detail::liberal_expansion_policy>>::size(
        _QWORD *a1)
{
  return (a1[1] - *a1) / 120LL;
}
