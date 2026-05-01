/*
 * XREFs of ?UpdateActivateOptions@CDelayedTileActivation@@UEAAXKK@Z @ 0x180085BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDelayedTileActivation::UpdateActivateOptions(CDelayedTileActivation *this, int a2, int a3)
{
  *((_DWORD *)this + 12) = a3 & a2 | *((_DWORD *)this + 12) & ~a2;
}
