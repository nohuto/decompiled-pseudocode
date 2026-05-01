/*
 * XREFs of ?GetChromeConfigurationForView@FullScreenPositioner@@W7EAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18009DB20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall FullScreenPositioner::GetChromeConfigurationForView(
        __int64 a1,
        struct IApplicationView *a2,
        int *a3,
        struct IApplicationViewTitlebarConfiguration **a4)
{
  return FullScreenPositioner::GetChromeConfigurationForView((FullScreenPositioner *)(a1 - 8), a2, a3, a4);
}
