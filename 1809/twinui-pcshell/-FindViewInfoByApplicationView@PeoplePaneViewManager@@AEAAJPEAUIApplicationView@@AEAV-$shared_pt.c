/*
 * XREFs of ?FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1801C8DA0
 * Callers:
 *     ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801C824C (-AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1801C8F44 (-FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z.c)
 * Callees:
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180199084 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_PeoplePaneViewInfo_________lambda_8b7f561eeecd700a6a36bc0a9fbde639___ @ 0x1801C6FF0 (std--find_if_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_std--shared_ptr_Peo.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x1801CC888 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PeoplePaneViewManager::FindViewInfoByApplicationView(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // ebx
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h]

  std::shared_ptr<PeoplePaneViewInfo>::reset(a3);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 128));
  v10 = a1 + 128;
  v8[0] = a2;
  v8[1] = a1;
  std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_PeoplePaneViewInfo_________lambda_8b7f561eeecd700a6a36bc0a9fbde639___(
    &v9,
    *(_QWORD *)(a1 + 136),
    *(_QWORD *)(a1 + 144),
    v8);
  if ( v9 == *(_QWORD **)(a1 + 144) )
  {
    v6 = -2147023728;
  }
  else
  {
    std::shared_ptr<PeoplePaneViewInfo>::operator=(a3, v9);
    v6 = 0;
  }
  if ( a1 != -128 )
    ReleaseSRWLockShared((PSRWLOCK)(a1 + 128));
  return v6;
}
