/*
 * XREFs of MagpRevokeInputTransfrom @ 0x1C00C97E0
 * Callers:
 *     MagpDecomposeDesktop @ 0x1C00C9764 (MagpDecomposeDesktop.c)
 *     MagSetLensContextInformation @ 0x1C01BCC24 (MagSetLensContextInformation.c)
 * Callees:
 *     _SetMagnificationInputTransform @ 0x1C00C981C (_SetMagnificationInputTransform.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 MagpRevokeInputTransfrom()
{
  _DWORD v1[14]; // [rsp+20h] [rbp-38h] BYREF

  memset(v1, 0, 0x24uLL);
  v1[8] = 3;
  return (unsigned int)SetMagnificationInputTransform(v1) == 0 ? 0xC0000001 : 0;
}
