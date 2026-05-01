/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$shared_ptr@UViewEventRegistration@@@std@@@?$vector@V?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UViewEventRegistration@@@1@QEAV21@AEBV21@@Z @ 0x1801DF04C
 * Callers:
 *     ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x1801E0C08 (-GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV-$vector@V-$shared_ptr@UAppUsa.c)
 *     ?RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x18027F8B0 (-RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIView.c)
 *     ??$emplace_back@AEAV?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAAXAEAV?$shared_ptr@UKBViewInfo@@@1@@Z @ 0x18030C798 (--$emplace_back@AEAV-$shared_ptr@UKBViewInfo@@@std@@@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039948 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UKBViewInfo@@@2@_K1@Z @ 0x1801E3984 (-_Change_array@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_ptr@UKBViewInfo@.c)
 */

unsigned __int64 __fastcall std::vector<std::shared_ptr<ViewEventRegistration>>::_Emplace_reallocate<std::shared_ptr<ViewEventRegistration> const &>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  size_t v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // r10
  unsigned __int64 v15; // r14
  _QWORD *v16; // rcx
  _QWORD *v17; // rdx
  __int64 v18; // rax
  _QWORD *v19; // r9
  _QWORD *v20; // rcx
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  __int64 v23; // r8
  signed __int64 v24; // rbx
  __int64 v25; // rcx
  unsigned __int64 result; // rax
  _QWORD *v27; // [rsp+20h] [rbp-38h]
  void *v28; // [rsp+20h] [rbp-38h]
  _QWORD *v29; // [rsp+60h] [rbp+8h]
  _QWORD *v30; // [rsp+78h] [rbp+20h]

  v6 = (unsigned __int64)a2 - *a1;
  v7 = (__int64)(a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v7 + 1;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 16 * v11;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = v13;
  v27 = v13;
  v15 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v16 = (_QWORD *)((char *)v13 + v15);
  v17 = (_QWORD *)((char *)v13 + v15 + 16);
  v30 = v17;
  try
  {
    *v16 = 0LL;
    v16[1] = 0LL;
    v18 = a3[1];
    if ( v18 )
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
    *v16 = *a3;
    v16[1] = a3[1];
    v29 = v16;
    v19 = (_QWORD *)a1[1];
    if ( a2 == v19 )
    {
      if ( (_QWORD *)*a1 != v19 )
      {
        v20 = v14;
        v21 = *a1 - (_QWORD)v14;
        do
        {
          *v20 = 0LL;
          v20[1] = 0LL;
          *v20 = *(_QWORD *)((char *)v20 + v21);
          v20[1] = *(_QWORD *)((char *)v20 + v21 + 8);
          *(_QWORD *)((char *)v20 + v21) = 0LL;
          *(_QWORD *)((char *)v20 + v21 + 8) = 0LL;
          v20 += 2;
        }
        while ( (_QWORD *)((char *)v20 + v21) != v19 );
      }
    }
    else
    {
      if ( (_QWORD *)*a1 != a2 )
      {
        v22 = v14;
        v23 = *a1 - (_QWORD)v14;
        do
        {
          *v22 = 0LL;
          v22[1] = 0LL;
          *v22 = *(_QWORD *)((char *)v22 + v23);
          v22[1] = *(_QWORD *)((char *)v22 + v23 + 8);
          *(_QWORD *)((char *)v22 + v23) = 0LL;
          *(_QWORD *)((char *)v22 + v23 + 8) = 0LL;
          v22 += 2;
        }
        while ( (_QWORD *)((char *)v22 + v23) != a2 );
        v19 = (_QWORD *)a1[1];
      }
      v29 = v14;
      if ( a2 != v19 )
      {
        v24 = (char *)a2 - v15 - (char *)v14;
        do
        {
          *v17 = 0LL;
          v17[1] = 0LL;
          *v17 = *(_QWORD *)((char *)v17 + v24 - 16);
          v17[1] = *(_QWORD *)((char *)v17 + v24 - 8);
          *(_QWORD *)((char *)v17 + v24 - 16) = 0LL;
          *(_QWORD *)((char *)v17 + v24 - 8) = 0LL;
          v17 += 2;
        }
        while ( (_QWORD *)((char *)v17 + v24 - 16) != v19 );
      }
    }
    std::vector<std::shared_ptr<KBViewInfo>>::_Change_array(a1, v14, v8, v11, v27, -2LL);
    result = v15 + *a1;
  }
  catch ( ... )
  {
    std::vector<std::shared_ptr<ViewEventRegistration>>::_Destroy(v25, v29, v30);
    std::_Deallocate<16,0>(v28, (const struct std::nothrow_t *)(16 * v11));
    throw;
  }
  return result;
}
