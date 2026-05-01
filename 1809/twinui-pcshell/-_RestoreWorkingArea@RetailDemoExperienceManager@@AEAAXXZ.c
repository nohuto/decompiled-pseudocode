/*
 * XREFs of ?_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801867C4
 * Callers:
 *     ?Hide@RetailDemoExperienceManager@@UEAAJXZ @ 0x1801849D0 (-Hide@RetailDemoExperienceManager@@UEAAJXZ.c)
 *     ?OnViewEvent@RetailDemoExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180185150 (-OnViewEvent@RetailDemoExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?_Dock@RetailDemoExperienceManager@@AEAAXXZ @ 0x18018608C (-_Dock@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_Float@RetailDemoExperienceManager@@AEAAXXZ @ 0x18018629C (-_Float@RetailDemoExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?_AdjustWorkingArea@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z @ 0x180185E6C (-_AdjustWorkingArea@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z.c)
 */

void __fastcall RetailDemoExperienceManager::_RestoreWorkingArea(struct tagRECT *this)
{
  struct tagRECT v1; // [rsp+20h] [rbp-18h] BYREF

  if ( this[26].right > this[26].left && this[26].bottom > this[26].top )
  {
    *(_QWORD *)&v1.left = 0LL;
    *(_QWORD *)&v1.right = 0LL;
    RetailDemoExperienceManager::_AdjustWorkingArea(this, &v1);
  }
}
