/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$shared_ptr@UViewEventRegistration@@@std@@@?$vector@V?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UViewEventRegistration@@@1@QEAV21@AEBV21@@Z @ 0x180198094
 * Callers:
 *     ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x180199DC8 (-GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV-$vector@V-$shared_ptr@UAppUsa.c)
 *     ?RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x18022AA50 (-RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIView.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180022954 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UKBViewInfo@@@2@_K1@Z @ 0x18019CA8C (-_Change_array@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_ptr@UKBViewInfo@.c)
 */

unsigned __int64 __fastcall std::vector<std::shared_ptr<ViewEventRegistration>>::_Emplace_reallocate<std::shared_ptr<ViewEventRegistration> const &>(
        char **a1,
        char *a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  size_t v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // r10
  unsigned __int64 v15; // r14
  _QWORD *v16; // rcx
  _QWORD *v17; // r8
  __int64 v18; // rax
  char *v19; // r9
  char *v20; // rcx
  _QWORD *v21; // rdx
  signed __int64 v22; // rcx
  _QWORD *v23; // rdx
  signed __int64 v24; // rcx
  signed __int64 v25; // rbx
  __int64 v26; // rcx
  unsigned __int64 result; // rax
  _QWORD *v28; // [rsp+20h] [rbp-38h]
  void *v29; // [rsp+20h] [rbp-38h]
  _QWORD *v30; // [rsp+60h] [rbp+8h]
  _QWORD *v31; // [rsp+78h] [rbp+20h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 4;
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
  v28 = v13;
  v15 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v16 = (_QWORD *)((char *)v13 + v15);
  v17 = (_QWORD *)((char *)v13 + v15 + 16);
  v31 = v17;
  try
  {
    *v16 = 0LL;
    v16[1] = 0LL;
    v18 = a3[1];
    if ( v18 )
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
    *v16 = *a3;
    v16[1] = a3[1];
    v30 = v16;
    v19 = a1[1];
    v20 = *a1;
    if ( a2 == v19 )
    {
      if ( v20 != v19 )
      {
        v21 = v14;
        v22 = v20 - (char *)v14;
        do
        {
          *v21 = 0LL;
          v21[1] = 0LL;
          *v21 = *(_QWORD *)((char *)v21 + v22);
          v21[1] = *(_QWORD *)((char *)v21 + v22 + 8);
          *(_QWORD *)((char *)v21 + v22) = 0LL;
          *(_QWORD *)((char *)v21 + v22 + 8) = 0LL;
          v21 += 2;
        }
        while ( (char *)v21 + v22 != v19 );
      }
    }
    else
    {
      if ( v20 != a2 )
      {
        v23 = v14;
        v24 = v20 - (char *)v14;
        do
        {
          *v23 = 0LL;
          v23[1] = 0LL;
          *v23 = *(_QWORD *)((char *)v23 + v24);
          v23[1] = *(_QWORD *)((char *)v23 + v24 + 8);
          *(_QWORD *)((char *)v23 + v24) = 0LL;
          *(_QWORD *)((char *)v23 + v24 + 8) = 0LL;
          v23 += 2;
        }
        while ( (char *)v23 + v24 != a2 );
        v19 = a1[1];
      }
      v30 = v14;
      if ( a2 != v19 )
      {
        v25 = &a2[-v15] - (char *)v14;
        do
        {
          *v17 = 0LL;
          v17[1] = 0LL;
          *v17 = *(_QWORD *)((char *)v17 + v25 - 16);
          v17[1] = *(_QWORD *)((char *)v17 + v25 - 8);
          *(_QWORD *)((char *)v17 + v25 - 16) = 0LL;
          *(_QWORD *)((char *)v17 + v25 - 8) = 0LL;
          v17 += 2;
        }
        while ( (char *)v17 + v25 - 16 != v19 );
      }
    }
    std::vector<std::shared_ptr<KBViewInfo>>::_Change_array(a1, v14, v8, v11, v28, -2LL);
    result = (unsigned __int64)&(*a1)[v15];
  }
  catch ( ... )
  {
    std::vector<std::shared_ptr<ViewEventRegistration>>::_Destroy(v26, v30, v31);
    std::_Deallocate<16,0>(v29, (const struct std::nothrow_t *)(16 * v11));
    throw;
  }
  return result;
}
