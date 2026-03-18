/*
 * XREFs of BvgaIndicateProgress @ 0x140A39CB0
 * Callers:
 *     <none>
 * Callees:
 *     BvgaUpdateProgressBar @ 0x140292B70 (BvgaUpdateProgressBar.c)
 */

void BvgaIndicateProgress()
{
  unsigned int v0; // eax

  ++BvgaProgressIndicator;
  v0 = 100 * BvgaProgressIndicator / (unsigned int)dword_140A4F194;
  if ( v0 > 0x63 )
    v0 = 99;
  if ( v0 != dword_140A4F198 )
  {
    dword_140A4F198 = v0;
    BvgaUpdateProgressBar(v0);
  }
}
