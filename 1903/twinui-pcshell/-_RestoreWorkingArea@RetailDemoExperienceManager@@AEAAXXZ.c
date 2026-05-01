/*
 * XREFs of ?_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801B6F64
 * Callers:
 *     ?Hide@RetailDemoExperienceManager@@UEAAJXZ @ 0x1801B50C0 (-Hide@RetailDemoExperienceManager@@UEAAJXZ.c)
 *     ?OnViewEvent@RetailDemoExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1801B5840 (-OnViewEvent@RetailDemoExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?_Dock@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801B6830 (-_Dock@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_Float@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801B6A3C (-_Float@RetailDemoExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?_AdjustWorkingArea@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z @ 0x1801B65D8 (-_AdjustWorkingArea@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z.c)
 */

void __fastcall RetailDemoExperienceManager::_RestoreWorkingArea(RetailDemoExperienceManager *this)
{
  struct tagRECT v1; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_DWORD *)this + 106) > *((_DWORD *)this + 104) && *((_DWORD *)this + 107) > *((_DWORD *)this + 105) )
  {
    *(_QWORD *)&v1.left = 0LL;
    *(_QWORD *)&v1.right = 0LL;
    RetailDemoExperienceManager::_AdjustWorkingArea(this, &v1);
  }
}
