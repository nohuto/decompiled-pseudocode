/*
 * XREFs of ?FindViewInfoByApplicationViewId@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x18023FC9C
 * Callers:
 *     ?ClosePeopleShare@PeoplePaneViewManager@@UEAAJH@Z @ 0x18023F670 (-ClosePeopleShare@PeoplePaneViewManager@@UEAAJH@Z.c)
 *     ?GetViewContactId@PeoplePaneViewManager@@UEAAJHPEAPEAG@Z @ 0x180240740 (-GetViewContactId@PeoplePaneViewManager@@UEAAJHPEAPEAG@Z.c)
 *     ?GetViewDesiredSize@PeoplePaneViewManager@@UEAAJHPEAUtagSIZE@@@Z @ 0x1802407F0 (-GetViewDesiredSize@PeoplePaneViewManager@@UEAAJHPEAUtagSIZE@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801E4304 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180243374 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 */

__int64 __fastcall PeoplePaneViewManager::FindViewInfoByApplicationViewId(RTL_SRWLOCK *a1, int a2, _QWORD *a3)
{
  std::_Ref_count_base **Ptr; // rbp
  std::_Ref_count_base **v7; // rbx
  unsigned int v8; // ebx
  std::_Ref_count_base *v10[2]; // [rsp+20h] [rbp-28h] BYREF

  std::shared_ptr<PeoplePaneViewInfo>::reset(a3);
  AcquireSRWLockShared(a1 + 16);
  Ptr = (std::_Ref_count_base **)a1[18].Ptr;
  v7 = (std::_Ref_count_base **)a1[17].Ptr;
  *(_OWORD *)v10 = 0LL;
  while ( v7 != Ptr )
  {
    if ( *((_QWORD *)*v7 + 6) )
    {
      if ( ~*((_DWORD *)*v7 + 12) == a2 )
        break;
    }
    else
    {
      std::shared_ptr<PeoplePaneViewInfo>::operator=(v10, v7);
    }
    v7 += 2;
  }
  if ( v7 != a1[18].Ptr )
    goto LABEL_11;
  if ( v10[0] )
  {
    v7 = v10;
LABEL_11:
    std::shared_ptr<PeoplePaneViewInfo>::operator=(a3, v7);
    v8 = 0;
    goto LABEL_13;
  }
  v8 = -2147023728;
LABEL_13:
  if ( v10[1] )
    std::_Ref_count_base::_Decref(v10[1]);
  if ( a1 != (RTL_SRWLOCK *)-128LL )
    ReleaseSRWLockShared(a1 + 16);
  return v8;
}
