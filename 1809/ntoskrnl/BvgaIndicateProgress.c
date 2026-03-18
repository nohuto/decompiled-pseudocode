/*
 * XREFs of BvgaIndicateProgress @ 0x1409F4990
 * Callers:
 *     <none>
 * Callees:
 *     BvgaUpdateProgressBar @ 0x14027E280 (BvgaUpdateProgressBar.c)
 */

void BvgaIndicateProgress()
{
  unsigned int v0; // eax

  ++BvgaProgressIndicator;
  v0 = 100 * BvgaProgressIndicator / (unsigned int)dword_140A0A194;
  if ( v0 > 0x63 )
    v0 = 99;
  if ( v0 != dword_140A0A198 )
  {
    dword_140A0A198 = v0;
    BvgaUpdateProgressBar(v0);
  }
}
