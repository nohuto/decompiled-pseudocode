/*
 * XREFs of ?ShouldHandleActivation@CDesktopPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1803C3630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CDesktopPositioner::ShouldHandleActivation(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  return *((_DWORD *)this + 24) == 0;
}
