/*
 * XREFs of ?bValid@SURFREF@@QEBAHXZ @ 0x1C0251534
 * Callers:
 *     GreReferenceObject @ 0x1C000E4C4 (GreReferenceObject.c)
 *     GreDereferenceObject @ 0x1C000E55C (GreDereferenceObject.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0011920 (NtGdiDdDDICreateDCFromMemory.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1C011D9A0 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     DxgkEngBltViaGDI @ 0x1C025A990 (DxgkEngBltViaGDI.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SURFREF::bValid(SURFREF *this)
{
  return *((_QWORD *)this + 4) != 0LL;
}
