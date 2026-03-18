/*
 * XREFs of ?IsCddCddRemoteSessionFilteringAllowed@@YAHXZ @ 0x1C004934C
 * Callers:
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0041F80 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ldevLoadDriver @ 0x1C0048C60 (ldevLoadDriver.c)
 *     EngQueryW32kCddInterface @ 0x1C009F1D0 (EngQueryW32kCddInterface.c)
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
