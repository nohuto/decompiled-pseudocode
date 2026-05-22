/*
 * XREFs of ??A?$unordered_map@_KPEAUIMPCTarget@@U?$hash@_K@std@@U?$equal_to@_K@3@V?$allocator@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@3@@std@@QEAAAEAPEAUIMPCTarget@@AEB_K@Z @ 0x1800085C0
 * Callers:
 *     ?GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z @ 0x1800072C8 (-GetMPCTarget@MPCInputRouter@@AEAAX_KIPEAPEAUIMPCTarget@@@Z.c)
 * Callees:
 *     ??$_Insert@AEAU?$pair@$$CB_KPEAUIMPCTarget@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_KPEAUIMPCTarget@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CB_KPEAUIMPCTarget@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@std@@@std@@@1@@Z @ 0x180008F40 (--$_Insert@AEAU-$pair@$$CB_KPEAUIMPCTarget@@@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_L.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800091D8 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEB_K@2@V-$tuple@$$V@2@@-$_List_buy@U-$pair@.c)
 */

__int64 *__fastcall std::unordered_map<unsigned __int64,IMPCTarget *>::operator[](_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // r8
  unsigned __int64 i; // r9
  __int64 v6; // rax
  __int64 *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *j; // rax
  __int64 *v12; // rcx
  __int64 *v13; // rcx
  __int64 v14; // rdi
  int v15; // edx
  __int64 *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 *v20; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v21; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
  {
    v6 = *((unsigned __int8 *)a2 + i);
    v4 = 0x100000001B3LL * (v6 ^ v4);
  }
  v7 = (__int64 *)a1[1];
  v8 = v4 & a1[6];
  v9 = a1[3];
  v10 = 2 * v8;
  for ( j = *(__int64 **)(v9 + 16 * v8); ; j = (__int64 *)*j )
  {
    v12 = *(__int64 **)(v9 + 8 * v10) == v7 ? (__int64 *)a1[1] : **(__int64 ***)(v9 + 8 * v10 + 8);
    if ( j == v12 )
      break;
    if ( j[2] == *a2 )
    {
      v13 = j;
      goto LABEL_12;
    }
  }
  j = (__int64 *)a1[1];
  v13 = j;
LABEL_12:
  if ( v13 == v7 )
  {
    v14 = *v7;
    v15 = *v7;
    v21 = a2;
    v16 = *(__int64 **)(v14 + 8);
    v17 = std::_List_buy<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<>>(
            (_DWORD)v13,
            v15,
            (_DWORD)v16,
            v10,
            (__int64)&v21);
    v18 = a1[2];
    if ( v18 == 0x7FFFFFFFFFFFFFELL )
      std::_Xlength_error("list<T> too long");
    a1[2] = v18 + 1;
    *(_QWORD *)(v14 + 8) = v17;
    *v16 = v17;
    std::_Hash<std::_Umap_traits<unsigned __int64,IMPCTarget *,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,IMPCTarget *>>,0>>::_Insert<std::pair<unsigned __int64 const,IMPCTarget *> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,IMPCTarget *>>>>>(
      a1,
      &v20,
      *(_QWORD *)a1[1] + 16LL);
    j = v20;
  }
  return j + 3;
}
