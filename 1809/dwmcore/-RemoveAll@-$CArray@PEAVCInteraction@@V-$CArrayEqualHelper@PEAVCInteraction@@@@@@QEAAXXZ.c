/*
 * XREFs of ?RemoveAll@?$CArray@PEAVCInteraction@@V?$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAXXZ @ 0x1800EB57C
 * Callers:
 *     _dynamic_atexit_destructor_for__CInteraction::s_DefaultStateLockedInteractions__ @ 0x1800F16A0 (_dynamic_atexit_destructor_for__CInteraction--s_DefaultStateLockedInteractions__.c)
 *     ?ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ @ 0x18019CE74 (-ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::RemoveAll()
{
  if ( CInteraction::s_DefaultStateLockedInteractions )
  {
    WPF::ProcessHeapImpl::Free(CInteraction::s_DefaultStateLockedInteractions);
    CInteraction::s_DefaultStateLockedInteractions = 0LL;
  }
  dword_1803086A8 = 0;
  dword_1803086AC = 0;
}
