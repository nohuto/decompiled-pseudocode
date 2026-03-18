/*
 * XREFs of ?RemoveAll@?$CArray@PEAVCInteraction@@V?$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAXXZ @ 0x1800D9240
 * Callers:
 *     _dynamic_atexit_destructor_for__CInteraction::s_DefaultStateLockedInteractions__ @ 0x1800EDC80 (_dynamic_atexit_destructor_for__CInteraction--s_DefaultStateLockedInteractions__.c)
 *     ?ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ @ 0x1801D7D0C (-ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 */

void CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::RemoveAll()
{
  if ( CInteraction::s_DefaultStateLockedInteractions )
  {
    operator delete(CInteraction::s_DefaultStateLockedInteractions);
    CInteraction::s_DefaultStateLockedInteractions = 0LL;
  }
  dword_18033FFF8 = 0;
  dword_18033FFFC = 0;
}
