/*
 * XREFs of DXGDEVICE_IsDisplayingOnVidPnSource @ 0x1C003E270
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDisplayingOnVidPnSource@DXGDEVICE@@QEAA_NI@Z @ 0x1C022EEB0 (-IsDisplayingOnVidPnSource@DXGDEVICE@@QEAA_NI@Z.c)
 */

bool __fastcall DXGDEVICE_IsDisplayingOnVidPnSource(DXGDEVICE *a1, unsigned int a2)
{
  return DXGDEVICE::IsDisplayingOnVidPnSource(a1, a2);
}
