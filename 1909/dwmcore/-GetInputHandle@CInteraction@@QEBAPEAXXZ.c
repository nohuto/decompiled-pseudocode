/*
 * XREFs of ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x1801D5830
 * Callers:
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x18023A674 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 * Callees:
 *     <none>
 */

void *__fastcall CInteraction::GetInputHandle(CInteraction *this)
{
  __int64 v1; // rdx
  void *result; // rax

  v1 = *((_QWORD *)this + 12);
  result = 0LL;
  if ( v1 )
    return *(void **)(v1 + 64);
  return result;
}
