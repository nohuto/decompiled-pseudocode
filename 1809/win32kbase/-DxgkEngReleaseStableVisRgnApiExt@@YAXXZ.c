/*
 * XREFs of ?DxgkEngReleaseStableVisRgnApiExt@@YAXXZ @ 0x1C00FD100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void DxgkEngReleaseStableVisRgnApiExt(void)
{
  if ( (int)IsDxgkEngReleaseStableVisRgnSupported() >= 0 )
    DxgkEngReleaseStableVisRgn();
}
