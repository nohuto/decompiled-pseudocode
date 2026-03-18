/*
 * XREFs of ?SetHandledDeltaCurrentInteraction@CInteraction@@UEAAXXZ @ 0x1801D7E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteraction::SetHandledDeltaCurrentInteraction(CInteraction *this)
{
  *((_BYTE *)this + 1152) |= 7u;
  *((_DWORD *)this + 282) = 2;
}
