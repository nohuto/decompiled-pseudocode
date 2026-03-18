/*
 * XREFs of ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C025BFC0
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C00489E0 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C004BE70 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     NtGdiTransparentBlt @ 0x1C014E240 (NtGdiTransparentBlt.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall XDCOBJ::bRedirHooked(XDCOBJ *this)
{
  void *v1; // rcx

  v1 = *(void **)(*(_QWORD *)this + 48LL);
  return v1 == gpRedirDev || v1 == gpBmpDev;
}
