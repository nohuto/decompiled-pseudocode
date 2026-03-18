/*
 * XREFs of BvgaIndicateProgress @ 0x140A39EE0
 * Callers:
 *     <none>
 * Callees:
 *     BvgaUpdateProgressBar @ 0x140292E10 (BvgaUpdateProgressBar.c)
 */

void BvgaIndicateProgress()
{
  unsigned int v0; // eax

  ++BvgaProgressIndicator;
  v0 = 100 * BvgaProgressIndicator / (unsigned int)dword_140A50194;
  if ( v0 > 0x63 )
    v0 = 99;
  if ( v0 != dword_140A50198 )
  {
    dword_140A50198 = v0;
    BvgaUpdateProgressBar(v0);
  }
}
