/*
 * XREFs of ?DxgkEngReleaseStableVisRgnApiExt@@YAXXZ @ 0x1C011FE80
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
