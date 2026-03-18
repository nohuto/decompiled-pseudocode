/*
 * XREFs of ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C0015FC8
 * Callers:
 *     GreGetBounds @ 0x1C001BE60 (GreGetBounds.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002A730 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ERECTL::bWrapped(ERECTL *this)
{
  return *(_DWORD *)this >= *((_DWORD *)this + 2) || *((_DWORD *)this + 1) >= *((_DWORD *)this + 3);
}
