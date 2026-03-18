/*
 * XREFs of ?CompleteInteraction@CInteraction@@UEAAJXZ @ 0x18019BF20
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x18019CD84 (-ResetDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 */

__int64 __fastcall CInteraction::CompleteInteraction(CInteraction *this)
{
  CInteraction::ResetDefaultInteractionForCurrentMC(this, 1);
  return CInteractionProcessor::CompleteInteraction(
           (CInteraction *)((char *)this + 344),
           (struct IManipulationResource *)((*((_QWORD *)this + 33) + 64LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 33) >> 64)));
}
