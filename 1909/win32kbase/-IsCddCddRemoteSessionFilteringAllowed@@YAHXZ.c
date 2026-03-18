/*
 * XREFs of ?IsCddCddRemoteSessionFilteringAllowed@@YAHXZ @ 0x1C006BA2C
 * Callers:
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C00401F0 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ldevLoadDriver @ 0x1C006B340 (ldevLoadDriver.c)
 *     EngQueryW32kCddInterface @ 0x1C009E700 (EngQueryW32kCddInterface.c)
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
