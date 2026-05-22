/*
 * XREFs of ??$_Emplace_reallocate@AEAKAEAPEAUIInputProcessor@@@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@QEAAPEAU?$pair@KPEAUIInputProcessor@@@1@QEAU21@AEAKAEAPEAUIInputProcessor@@@Z @ 0x1800924F4
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180012820 (-OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000AD54 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@AEBA_K_K@Z @ 0x180014AAC (-_Calculate_growth@-$vector@U-$pair@KPEAUIInputProcessor@@@std@@V-$allocator@U-$pair@KPEAUIInput.c)
 *     ?_Change_array@?$vector@UCursorDeviceInfo@@V?$allocator@UCursorDeviceInfo@@@std@@@std@@AEAAXQEAUCursorDeviceInfo@@_K1@Z @ 0x1800305E8 (-_Change_array@-$vector@UCursorDeviceInfo@@V-$allocator@UCursorDeviceInfo@@@std@@@std@@AEAAXQEAU.c)
 */

unsigned __int64 __fastcall std::vector<std::pair<unsigned long,IInputProcessor *>>::_Emplace_reallocate<unsigned long &,IInputProcessor * &>(
        _QWORD *a1,
        _OWORD *a2,
        _DWORD *a3,
        _QWORD *a4)
{
  _OWORD *v6; // rbx
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned __int64 v11; // r12
  size_t v12; // rcx
  unsigned __int64 v13; // r9
  _QWORD *v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  _OWORD *v17; // rcx
  _OWORD *v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 result; // rax
  void *v23; // [rsp+68h] [rbp+10h]

  v6 = a2;
  v8 = (unsigned __int64)a2 - *a1;
  v9 = (__int64)(a1[1] - *a1) >> 4;
  if ( v9 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v10 = v9 + 1;
  v11 = std::vector<std::pair<unsigned long,IInputProcessor *>>::_Calculate_growth(a1, v9 + 1);
  v12 = 16 * v11;
  if ( v11 > v13 )
    v12 = -1LL;
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v15 = (__int64)v14;
  v23 = v14;
  try
  {
    v16 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
    *(_DWORD *)((char *)v14 + v16) = *a3;
    *(_QWORD *)((char *)v14 + v16 + 8) = *a4;
    v17 = (_OWORD *)a1[1];
    v18 = (_OWORD *)*a1;
    if ( v6 == v17 )
    {
      if ( v18 != v17 )
      {
        v19 = v15 - (_QWORD)v18;
        do
        {
          *(_OWORD *)((char *)v18 + v19) = *v18;
          ++v18;
        }
        while ( v18 != v17 );
      }
    }
    else
    {
      if ( v18 != v6 )
      {
        v20 = v15 - (_QWORD)v18;
        do
        {
          *(_OWORD *)((char *)v18 + v20) = *v18;
          ++v18;
        }
        while ( v18 != v6 );
        v17 = (_OWORD *)a1[1];
      }
      if ( v6 != v17 )
      {
        v21 = v15 + v16 + 16 - (_QWORD)v6;
        do
        {
          *(_OWORD *)((char *)v6 + v21) = *v6;
          ++v6;
        }
        while ( v6 != v17 );
      }
    }
    std::vector<CursorDeviceInfo>::_Change_array((__int64)a1, v15, v10, v11);
    result = v16 + *a1;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v23, (const struct std::nothrow_t *)(16 * v11));
    throw;
  }
  return result;
}
