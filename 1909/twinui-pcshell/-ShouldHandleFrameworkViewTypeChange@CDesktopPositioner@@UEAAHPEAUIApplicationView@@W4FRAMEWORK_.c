/*
 * XREFs of ?ShouldHandleFrameworkViewTypeChange@CDesktopPositioner@@UEAAHPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1800851F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CDesktopPositioner::ShouldHandleFrameworkViewTypeChange(__int64 a1, __int64 a2, int a3)
{
  return !a3 || a3 == 6;
}
