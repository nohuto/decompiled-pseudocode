/*
 * XREFs of BvgaIndicateProgress @ 0x1409F59A0
 * Callers:
 *     <none>
 * Callees:
 *     BvgaUpdateProgressBar @ 0x14027E570 (BvgaUpdateProgressBar.c)
 */

void BvgaIndicateProgress()
{
  unsigned int v0; // eax

  ++BvgaProgressIndicator;
  v0 = 100 * BvgaProgressIndicator / (unsigned int)dword_140A0B194;
  if ( v0 > 0x63 )
    v0 = 99;
  if ( v0 != dword_140A0B198 )
  {
    dword_140A0B198 = v0;
    BvgaUpdateProgressBar(v0);
  }
}
