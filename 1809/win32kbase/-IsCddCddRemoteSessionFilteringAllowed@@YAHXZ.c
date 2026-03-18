/*
 * XREFs of ?IsCddCddRemoteSessionFilteringAllowed@@YAHXZ @ 0x1C005465C
 * Callers:
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C003F494 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ldevLoadDriver @ 0x1C0054000 (ldevLoadDriver.c)
 *     EngQueryW32kCddInterface @ 0x1C008C130 (EngQueryW32kCddInterface.c)
 * Callees:
 *     <none>
 */

_BOOL8 IsCddCddRemoteSessionFilteringAllowed(void)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( !gbDisableCddRemoteSessionFiltering )
    return gRemoteSessionUseWddm == 0;
  return result;
}
