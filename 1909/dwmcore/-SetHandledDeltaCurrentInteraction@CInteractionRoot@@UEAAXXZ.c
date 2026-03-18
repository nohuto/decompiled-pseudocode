/*
 * XREFs of ?SetHandledDeltaCurrentInteraction@CInteractionRoot@@UEAAXXZ @ 0x18023D2B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteractionRoot::SetHandledDeltaCurrentInteraction(CInteractionRoot *this)
{
  *((_BYTE *)this + 840) |= 7u;
  *((_DWORD *)this + 204) = 2;
}
