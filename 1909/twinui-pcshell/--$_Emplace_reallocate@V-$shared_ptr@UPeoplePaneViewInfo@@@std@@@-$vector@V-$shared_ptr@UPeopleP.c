/*
 * XREFs of ??$_Emplace_reallocate@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@QEAV21@$$QEAV21@@Z @ 0x18023E0F8
 * Callers:
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x180241310 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 *     ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x180241AA0 (-LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180022278 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UKBViewInfo@@@2@_K1@Z @ 0x180202BC4 (-_Change_array@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_ptr@UKBViewInfo@.c)
 *     ?_Calculate_growth@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@AEBA_K_K@Z @ 0x1802430F4 (-_Calculate_growth@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@.c)
 */

unsigned __int64 __fastcall std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Emplace_reallocate<std::shared_ptr<PeoplePaneViewInfo>>(
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
  unsigned __int64 v13; // rsi
  _QWORD *v14; // rcx
  _QWORD *v15; // rdx
  _QWORD *v16; // r9
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // r8
  unsigned __int64 v21; // rbx
  __int64 v22; // rcx
  unsigned __int64 result; // rax
  void *v24; // [rsp+20h] [rbp-38h]
  __int64 v25; // [rsp+60h] [rbp+8h]
  __int64 v26; // [rsp+68h] [rbp+10h]

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
  v24 = v12;
  v13 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = (_QWORD *)((char *)v12 + v13);
  v15 = (_QWORD *)((char *)v12 + v13 + 16);
  v26 = (__int64)v15;
  try
  {
    *v14 = 0LL;
    v14[1] = 0LL;
    *v14 = *a3;
    v14[1] = a3[1];
    *a3 = 0LL;
    a3[1] = 0LL;
    v25 = (__int64)v12 + v13;
    v16 = (_QWORD *)a1[1];
    if ( a2 == v16 )
    {
      if ( (_QWORD *)*a1 != v16 )
      {
        v17 = v12;
        v18 = *a1 - (_QWORD)v12;
        do
        {
          *v17 = 0LL;
          v17[1] = 0LL;
          *v17 = *(_QWORD *)((char *)v17 + v18);
          v17[1] = *(_QWORD *)((char *)v17 + v18 + 8);
          *(_QWORD *)((char *)v17 + v18) = 0LL;
          *(_QWORD *)((char *)v17 + v18 + 8) = 0LL;
          v17 += 2;
        }
        while ( (_QWORD *)((char *)v17 + v18) != v16 );
      }
    }
    else
    {
      if ( (_QWORD *)*a1 != a2 )
      {
        v19 = v12;
        v20 = *a1 - (_QWORD)v12;
        do
        {
          *v19 = 0LL;
          v19[1] = 0LL;
          *v19 = *(_QWORD *)((char *)v19 + v20);
          v19[1] = *(_QWORD *)((char *)v19 + v20 + 8);
          *(_QWORD *)((char *)v19 + v20) = 0LL;
          *(_QWORD *)((char *)v19 + v20 + 8) = 0LL;
          v19 += 2;
        }
        while ( (_QWORD *)((char *)v19 + v20) != a2 );
        v16 = (_QWORD *)a1[1];
      }
      v25 = (__int64)v12;
      if ( a2 != v16 )
      {
        v21 = (char *)a2 - v13 - (char *)v12;
        do
        {
          *v15 = 0LL;
          v15[1] = 0LL;
          *v15 = *(_QWORD *)((char *)v15 + v21 - 16);
          v15[1] = *(_QWORD *)((char *)v15 + v21 - 8);
          *(_QWORD *)((char *)v15 + v21 - 16) = 0LL;
          *(_QWORD *)((char *)v15 + v21 - 8) = 0LL;
          v15 += 2;
        }
        while ( (_QWORD *)((char *)v15 + v21 - 16) != v16 );
      }
    }
    std::vector<std::shared_ptr<KBViewInfo>>::_Change_array((__int64)a1, (__int64)v12, v8, v9);
    result = v13 + *a1;
  }
  catch ( ... )
  {
    std::vector<std::shared_ptr<ViewEventRegistration>>::_Destroy(v22, v25, v26);
    std::_Deallocate<16,0>(v24, (const struct std::nothrow_t *)(16 * v9));
    throw;
  }
  return result;
}
