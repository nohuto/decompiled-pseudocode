/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@QEAV21@AEBV21@@Z @ 0x1801C6A48
 * Callers:
 *     ?FindShareViewInfosByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@@Z @ 0x1801C8CC0 (-FindShareViewInfosByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$vector@V-$shared_ptr@UPeopl.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180022954 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UKBViewInfo@@@2@_K1@Z @ 0x18019CA8C (-_Change_array@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_ptr@UKBViewInfo@.c)
 *     ?_Calculate_growth@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@AEBA_K_K@Z @ 0x1801CC244 (-_Calculate_growth@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@.c)
 */

unsigned __int64 __fastcall std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Emplace_reallocate<std::shared_ptr<PeoplePaneViewInfo> const &>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // r15
  size_t v10; // rcx
  unsigned __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // r10
  unsigned __int64 v14; // rsi
  _QWORD *v15; // rcx
  _QWORD *v16; // r8
  __int64 v17; // rax
  _QWORD *v18; // r9
  _QWORD *v19; // rcx
  _QWORD *v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rbx
  __int64 v25; // rcx
  unsigned __int64 result; // rax
  void *v27; // [rsp+20h] [rbp-38h]
  __int64 v28; // [rsp+60h] [rbp+8h]
  __int64 v29; // [rsp+68h] [rbp+10h]

  v6 = (unsigned __int64)a2 - *a1;
  v7 = (__int64)(a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Calculate_growth(a1, v7 + 1);
  v10 = 16 * v9;
  if ( v9 > v11 )
    v10 = -1LL;
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
  v13 = (__int64)v12;
  v27 = v12;
  v14 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v15 = (_QWORD *)((char *)v12 + v14);
  v16 = (_QWORD *)((char *)v12 + v14 + 16);
  v29 = (__int64)v16;
  try
  {
    *v15 = 0LL;
    v15[1] = 0LL;
    v17 = a3[1];
    if ( v17 )
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    *v15 = *a3;
    v15[1] = a3[1];
    v28 = (__int64)v15;
    v18 = (_QWORD *)a1[1];
    v19 = (_QWORD *)*a1;
    if ( a2 == v18 )
    {
      if ( v19 != v18 )
      {
        v20 = (_QWORD *)v13;
        v21 = (__int64)v19 - v13;
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
        while ( (_QWORD *)((char *)v20 + v21) != v18 );
      }
    }
    else
    {
      if ( v19 != a2 )
      {
        v22 = (_QWORD *)v13;
        v23 = (__int64)v19 - v13;
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
        v18 = (_QWORD *)a1[1];
      }
      v28 = v13;
      if ( a2 != v18 )
      {
        v24 = (unsigned __int64)a2 - v14 - v13;
        do
        {
          *v16 = 0LL;
          v16[1] = 0LL;
          *v16 = *(_QWORD *)((char *)v16 + v24 - 16);
          v16[1] = *(_QWORD *)((char *)v16 + v24 - 8);
          *(_QWORD *)((char *)v16 + v24 - 16) = 0LL;
          *(_QWORD *)((char *)v16 + v24 - 8) = 0LL;
          v16 += 2;
        }
        while ( (_QWORD *)((char *)v16 + v24 - 16) != v18 );
      }
    }
    std::vector<std::shared_ptr<KBViewInfo>>::_Change_array((__int64)a1, v13, v8, v9);
    result = v14 + *a1;
  }
  catch ( ... )
  {
    std::vector<std::shared_ptr<ViewEventRegistration>>::_Destroy(v25, v28, v29);
    std::_Deallocate<16,0>(v27, (const struct std::nothrow_t *)(16 * v9));
    throw;
  }
  return result;
}
