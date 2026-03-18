/*
 * XREFs of ?PairedUnBind@CCompositionSurface@@UEAAJ_N@Z @ 0x1C005C310
 * Callers:
 *     <none>
 * Callees:
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C0012FB4 (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CCompositionSurface::PairedUnBind(CCompositionSurface *this, __int64 a2)
{
  return CCompositionSurface::UnBind(this, a2);
}
