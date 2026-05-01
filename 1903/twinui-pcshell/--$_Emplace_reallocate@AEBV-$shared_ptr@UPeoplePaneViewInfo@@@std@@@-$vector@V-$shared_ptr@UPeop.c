/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@QEAV21@AEBV21@@Z @ 0x18021E6B0
 * Callers:
 *     ?FindShareViewInfosByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@@Z @ 0x180220480 (-FindShareViewInfosByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$vector@V-$shared_ptr@UPeopl.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039948 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UKBViewInfo@@@2@_K1@Z @ 0x1801E3984 (-_Change_array@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_ptr@UKBViewInfo@.c)
 *     ?_Calculate_growth@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@AEBA_K_K@Z @ 0x180223A74 (-_Calculate_growth@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@.c)
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
  _QWORD *v16; // rdx
  __int64 v17; // rax
  _QWORD *v18; // r9
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // r8
  unsigned __int64 v23; // rbx
  __int64 v24; // rcx
  unsigned __int64 result; // rax
  void *v26; // [rsp+20h] [rbp-38h]
  __int64 v27; // [rsp+60h] [rbp+8h]
  __int64 v28; // [rsp+68h] [rbp+10h]

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
  v26 = v12;
  v14 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v15 = (_QWORD *)((char *)v12 + v14);
  v16 = (_QWORD *)((char *)v12 + v14 + 16);
  v28 = (__int64)v16;
  try
  {
    *v15 = 0LL;
    v15[1] = 0LL;
    v17 = a3[1];
    if ( v17 )
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    *v15 = *a3;
    v15[1] = a3[1];
    v27 = (__int64)v15;
    v18 = (_QWORD *)a1[1];
    if ( a2 == v18 )
    {
      if ( (_QWORD *)*a1 != v18 )
      {
        v19 = (_QWORD *)v13;
        v20 = *a1 - v13;
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
        while ( (_QWORD *)((char *)v19 + v20) != v18 );
      }
    }
    else
    {
      if ( (_QWORD *)*a1 != a2 )
      {
        v21 = (_QWORD *)v13;
        v22 = *a1 - v13;
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
        while ( (_QWORD *)((char *)v21 + v22) != a2 );
        v18 = (_QWORD *)a1[1];
      }
      v27 = v13;
      if ( a2 != v18 )
      {
        v23 = (unsigned __int64)a2 - v14 - v13;
        do
        {
          *v16 = 0LL;
          v16[1] = 0LL;
          *v16 = *(_QWORD *)((char *)v16 + v23 - 16);
          v16[1] = *(_QWORD *)((char *)v16 + v23 - 8);
          *(_QWORD *)((char *)v16 + v23 - 16) = 0LL;
          *(_QWORD *)((char *)v16 + v23 - 8) = 0LL;
          v16 += 2;
        }
        while ( (_QWORD *)((char *)v16 + v23 - 16) != v18 );
      }
    }
    std::vector<std::shared_ptr<KBViewInfo>>::_Change_array((__int64)a1, v13, v8, v9);
    result = v14 + *a1;
  }
  catch ( ... )
  {
    std::vector<std::shared_ptr<ViewEventRegistration>>::_Destroy(v24, v27, v28);
    std::_Deallocate<16,0>(v26, (const struct std::nothrow_t *)(16 * v9));
    throw;
  }
  return result;
}
