/*
 * XREFs of ?ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ @ 0x1801D65FC
 * Callers:
 *     ?OnUp@CGlobalManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x180237B70 (-OnUp@CGlobalManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@.c)
 * Callees:
 *     ?ResetDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x1801D650C (-ResetDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 */

void CInteraction::ResetDefaultStateForAllInteractions(void)
{
  int v0; // ebx
  __int64 v1; // rdi

  v0 = 0;
  if ( dword_18033D0D8 > 0 )
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
    while ( v0 < dword_18033D0D8 );
  }
  CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::RemoveAll();
}
