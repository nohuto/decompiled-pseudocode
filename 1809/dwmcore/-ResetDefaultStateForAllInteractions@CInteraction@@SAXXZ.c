/*
 * XREFs of ?ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ @ 0x18019CE74
 * Callers:
 *     ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x1801EB414 (-OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 * Callees:
 *     ?ResetDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x18019CD84 (-ResetDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 */

void CInteraction::ResetDefaultStateForAllInteractions(void)
{
  int v0; // ebx
  __int64 v1; // rdi

  v0 = 0;
  if ( dword_1803086A8 > 0 )
  {
    v1 = 0LL;
    do
    {
      CInteraction::ResetDefaultInteractionForCurrentMC(
        *(CInteraction **)((char *)CInteraction::s_DefaultStateLockedInteractions + v1),
        0);
      ++v0;
      v1 += 8LL;
    }
    while ( v0 < dword_1803086A8 );
  }
  CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::RemoveAll();
}
