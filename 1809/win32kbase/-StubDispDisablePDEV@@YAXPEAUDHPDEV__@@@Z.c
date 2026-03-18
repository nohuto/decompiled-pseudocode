/*
 * XREFs of ?StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C0060C50
 * Callers:
 *     <none>
 * Callees:
 *     EngFreeMem @ 0x1C0060D80 (EngFreeMem.c)
 *     EngDeletePalette @ 0x1C0060E90 (EngDeletePalette.c)
 */

void __fastcall StubDispDisablePDEV(_QWORD *pv)
{
  HPALETTE v2; // rcx

  v2 = (HPALETTE)pv[3];
  if ( v2 )
    EngDeletePalette(v2);
  EngFreeMem(pv);
}
