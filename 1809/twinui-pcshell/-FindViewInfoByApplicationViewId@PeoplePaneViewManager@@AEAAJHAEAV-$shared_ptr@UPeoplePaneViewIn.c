/*
 * XREFs of ?FindViewInfoByApplicationViewId@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1801C8E5C
 * Callers:
 *     ?ClosePeopleShare@PeoplePaneViewManager@@UEAAJH@Z @ 0x1801C8830 (-ClosePeopleShare@PeoplePaneViewManager@@UEAAJH@Z.c)
 *     ?GetViewContactId@PeoplePaneViewManager@@UEAAJHPEAPEAG@Z @ 0x1801C9900 (-GetViewContactId@PeoplePaneViewManager@@UEAAJHPEAPEAG@Z.c)
 *     ?GetViewDesiredSize@PeoplePaneViewManager@@UEAAJHPEAUtagSIZE@@@Z @ 0x1801C99B0 (-GetViewDesiredSize@PeoplePaneViewManager@@UEAAJHPEAUtagSIZE@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180199084 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x1801CC888 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 */

__int64 __fastcall PeoplePaneViewManager::FindViewInfoByApplicationViewId(RTL_SRWLOCK *a1, int a2, _QWORD *a3)
{
  std::_Ref_count_base **Ptr; // rbp
  std::_Ref_count_base **v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  std::_Ref_count_base *v11[2]; // [rsp+20h] [rbp-28h] BYREF

  std::shared_ptr<PeoplePaneViewInfo>::reset(a3);
  AcquireSRWLockShared(a1 + 16);
  Ptr = (std::_Ref_count_base **)a1[18].Ptr;
  v7 = (std::_Ref_count_base **)a1[17].Ptr;
  *(_OWORD *)v11 = 0LL;
  while ( v7 != Ptr )
  {
    v8 = *((_QWORD *)*v7 + 6);
    if ( v8 )
    {
      if ( ~(_DWORD)v8 == a2 )
        break;
    }
    else
    {
      std::shared_ptr<PeoplePaneViewInfo>::operator=(v11, v7);
    }
    v7 += 2;
  }
  if ( v7 != a1[18].Ptr )
    goto LABEL_11;
  if ( v11[0] )
  {
    v7 = v11;
LABEL_11:
    std::shared_ptr<PeoplePaneViewInfo>::operator=(a3, v7);
    v9 = 0;
    goto LABEL_13;
  }
  v9 = -2147023728;
LABEL_13:
  if ( v11[1] )
    std::_Ref_count_base::_Decref(v11[1]);
  if ( a1 != (RTL_SRWLOCK *)-128LL )
    ReleaseSRWLockShared(a1 + 16);
  return v9;
}
