/*
 * XREFs of ?RemoveAll@?$CArray@PEAVCInteraction@@V?$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAXXZ @ 0x1800D9A30
 * Callers:
 *     _dynamic_atexit_destructor_for__CInteraction::s_DefaultStateLockedInteractions__ @ 0x1800F1930 (_dynamic_atexit_destructor_for__CInteraction--s_DefaultStateLockedInteractions__.c)
 *     ?ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ @ 0x1801D65FC (-ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 */

void CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::RemoveAll()
{
  if ( CInteraction::s_DefaultStateLockedInteractions )
  {
    operator delete(CInteraction::s_DefaultStateLockedInteractions);
    CInteraction::s_DefaultStateLockedInteractions = 0LL;
  }
  dword_18033D0D8 = 0;
  dword_18033D0DC = 0;
}
