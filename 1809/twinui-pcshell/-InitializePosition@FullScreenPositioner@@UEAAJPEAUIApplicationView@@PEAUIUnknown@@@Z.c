/*
 * XREFs of ?InitializePosition@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180141B70
 * Callers:
 *     <none>
 * Callees:
 *     ?ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x180140C94 (-ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@.c)
 */

__int64 __fastcall FullScreenPositioner::InitializePosition(
        FullScreenPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  FullScreenPositioner::ControlGainedHelper((__int64)this - 128, a2, 9);
  return 0LL;
}
