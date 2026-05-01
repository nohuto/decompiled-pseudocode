/*
 * XREFs of ?ShouldHandleActivation@TabletModePositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18034AB80
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x18007FFA8 (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 */

_BOOL8 __fastcall TabletModePositioner::ShouldHandleActivation(
        TabletModePositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  return TabletModePositioner::IsTabletMode((TabletModePositioner *)((char *)this - 128));
}
