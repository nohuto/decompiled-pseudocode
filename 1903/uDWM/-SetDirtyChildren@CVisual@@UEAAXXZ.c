/*
 * XREFs of ?SetDirtyChildren@CVisual@@UEAAXXZ @ 0x18003E3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVisual::SetDirtyChildren(CVisual *this)
{
  *((_DWORD *)this + 20) |= 1u;
}
