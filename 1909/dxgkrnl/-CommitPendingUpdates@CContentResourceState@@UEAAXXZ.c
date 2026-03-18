/*
 * XREFs of ?CommitPendingUpdates@CContentResourceState@@UEAAXXZ @ 0x1C00623E0
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitPendingUpdates@CFlipResourceState@@UEAAXXZ @ 0x1C0062480 (-CommitPendingUpdates@CFlipResourceState@@UEAAXXZ.c)
 */

void __fastcall CContentResourceState::CommitPendingUpdates(CContentResourceState *this)
{
  char v1; // al

  v1 = *((_BYTE *)this + 56);
  if ( (v1 & 2) != 0 )
    *((_BYTE *)this + 56) = v1 & 0xFC;
  CFlipResourceState::CommitPendingUpdates(this);
}
