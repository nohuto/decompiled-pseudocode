/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$shared_ptr@ULegacyDeviceInfo@@@std@@@?$vector@V?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@ULegacyDeviceInfo@@@1@QEAV21@AEBV21@@Z @ 0x180093758
 * Callers:
 *     ?AttachDevice@MPCRawInputProvider@@QEAAJW4InputType@@PEAK@Z @ 0x180093EFC (-AttachDevice@MPCRawInputProvider@@QEAAJW4InputType@@PEAK@Z.c)
 *     ?AttachDeviceImpl@MPCRawInputProvider@@AEAAXAEBV?$shared_ptr@ULegacyDeviceInfo@@@std@@@Z @ 0x180094020 (-AttachDeviceImpl@MPCRawInputProvider@@AEAAXAEBV-$shared_ptr@ULegacyDeviceInfo@@@std@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@AEBA_K_K@Z @ 0x180014A1C (-_Calculate_growth@-$vector@U-$pair@KPEAUIInputProcessor@@@std@@V-$allocator@U-$pair@KPEAUIInput.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@ULegacyDeviceInfo@@@2@_K1@Z @ 0x180094C4C (-_Change_array@-$vector@V-$shared_ptr@ULegacyDeviceInfo@@@std@@V-$allocator@V-$shared_ptr@ULegac.c)
 */

unsigned __int64 __fastcall std::vector<std::shared_ptr<LegacyDeviceInfo>>::_Emplace_reallocate<std::shared_ptr<LegacyDeviceInfo> const &>(
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
  _QWORD *v13; // r10
  unsigned __int64 v14; // rsi
  _QWORD *v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // rax
  _QWORD *v18; // r9
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // r8
  signed __int64 v23; // rbx
  __int64 v24; // rcx
  unsigned __int64 result; // rax
  _QWORD *v26; // [rsp+20h] [rbp-38h]
  void *v27; // [rsp+20h] [rbp-38h]
  _QWORD *v28; // [rsp+60h] [rbp+8h]
  _QWORD *v29; // [rsp+68h] [rbp+10h]

  v6 = (unsigned __int64)a2 - *a1;
  v7 = (__int64)(a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = std::vector<std::pair<unsigned long,IInputProcessor *>>::_Calculate_growth(a1, v7 + 1);
  v10 = 16 * v9;
  if ( v9 > v11 )
    v10 = -1LL;
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
  v13 = v12;
  v26 = v12;
  v14 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v15 = (_QWORD *)((char *)v12 + v14);
  v16 = (_QWORD *)((char *)v12 + v14 + 16);
  v29 = v16;
  try
  {
    *v15 = 0LL;
    v15[1] = 0LL;
    v17 = a3[1];
    if ( v17 )
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    *v15 = *a3;
    v15[1] = a3[1];
    v28 = v15;
    v18 = (_QWORD *)a1[1];
    if ( a2 == v18 )
    {
      if ( (_QWORD *)*a1 != v18 )
      {
        v19 = v13;
        v20 = *a1 - (_QWORD)v13;
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
        v21 = v13;
        v22 = *a1 - (_QWORD)v13;
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
      v28 = v13;
      if ( a2 != v18 )
      {
        v23 = (char *)a2 - v14 - (char *)v13;
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
    std::vector<std::shared_ptr<LegacyDeviceInfo>>::_Change_array(a1, v13, v8, v9, v26, -2LL);
    result = v14 + *a1;
  }
  catch ( ... )
  {
    std::vector<std::shared_ptr<LegacyDeviceInfo>>::_Destroy(v24, v28, v29);
    std::_Deallocate<16,0>(v27, (const struct std::nothrow_t *)(16 * v9));
    throw;
  }
  return result;
}
