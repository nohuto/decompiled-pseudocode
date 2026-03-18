/*
 * XREFs of ?bValid@SURFREF@@QEBAHXZ @ 0x1C026A744
 * Callers:
 *     GreDereferenceObject @ 0x1C0089FA4 (GreDereferenceObject.c)
 *     GreReferenceObject @ 0x1C008A04C (GreReferenceObject.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C00CCC00 (NtGdiDdDDICreateDCFromMemory.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1C0102A70 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C0102DE8 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     DxgkEngBltViaGDI @ 0x1C0273B20 (DxgkEngBltViaGDI.c)
 *     vUnlinkEudcRFONTs @ 0x1C0292640 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1C0292738 (vUnlinkEudcRFONTsAndPFEs.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SURFREF::bValid(SURFREF *this)
{
  return *(_QWORD *)this != 0LL;
}
