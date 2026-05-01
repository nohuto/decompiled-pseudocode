/*
 * XREFs of ?FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1801C8F44
 * Callers:
 *     ?OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180028680 (-OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1801C8DA0 (-FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV-$shared_pt.c)
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x1801CAF44 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PeoplePaneViewManager::FocusApplicationView(
        PeoplePaneViewManager *this,
        struct IApplicationView *a2,
        unsigned __int8 a3)
{
  __int64 v5; // r8
  __int128 v7; // [rsp+28h] [rbp-20h] BYREF

  v7 = 0LL;
  if ( (int)PeoplePaneViewManager::FindViewInfoByApplicationView((__int64)this, (__int64)a2, &v7) >= 0
    && *(_BYTE *)(v7 + 56) == 1 )
  {
    v5 = v7;
    if ( *(_QWORD *)(v7 + 24) >= 8uLL )
      v5 = *(_QWORD *)v7;
    PeoplePaneViewManager::NotifyListeners(this, (a3 ^ 1u) + 2, v5, *(unsigned int *)(v7 + 40));
  }
  if ( *((_QWORD *)&v7 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v7 + 1));
  return 0LL;
}
