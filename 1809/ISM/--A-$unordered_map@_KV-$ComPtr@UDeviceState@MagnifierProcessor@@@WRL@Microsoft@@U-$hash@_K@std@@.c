/*
 * XREFs of ??A?$unordered_map@_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@U?$hash@_K@std@@U?$equal_to@_K@5@V?$allocator@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@@5@@std@@QEAAAEAV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@AEB_K@Z @ 0x1800CF370
 * Callers:
 *     ?GetDeviceState@MagnifierProcessor@@AEAA?AV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@PEBULegacyInputInfo@@@Z @ 0x1800CF164 (-GetDeviceState@MagnifierProcessor@@AEAA-AV-$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Micros.c)
 * Callees:
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800091D8 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEB_K@2@V-$tuple@$$V@2@@-$_List_buy@U-$pair@.c)
 *     ??$_Insert@AEAU?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@@std@@@std@@@1@@Z @ 0x1800CFAD8 (--$_Insert@AEAU-$pair@$$CB_KV-$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@V-$.c)
 */

_QWORD *__fastcall std::unordered_map<unsigned __int64,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>>::operator[](
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // r8
  unsigned __int64 i; // r9
  __int64 v6; // rax
  _QWORD **v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *j; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rdi
  _QWORD *v15; // rsi
  _QWORD *v16; // rdx
  __int64 v17; // rax
  _QWORD *v19; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v20; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
  {
    v6 = *((unsigned __int8 *)a2 + i);
    v4 = 0x100000001B3LL * (v6 ^ v4);
  }
  v7 = (_QWORD **)a1[1];
  v8 = v4 & a1[6];
  v9 = a1[3];
  v10 = 2 * v8;
  for ( j = *(_QWORD **)(v9 + 16 * v8); ; j = (_QWORD *)*j )
  {
    v12 = *(_QWORD ***)(v9 + 8 * v10) == v7 ? (_QWORD *)a1[1] : **(_QWORD ***)(v9 + 8 * v10 + 8);
    if ( j == v12 )
      break;
    if ( j[2] == *a2 )
    {
      v13 = (__int64)j;
      goto LABEL_12;
    }
  }
  j = (_QWORD *)a1[1];
  v13 = (__int64)j;
LABEL_12:
  if ( (_QWORD **)v13 == v7 )
  {
    v14 = *v7;
    v20 = a2;
    v15 = (_QWORD *)v14[1];
    v16 = std::_List_buy<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<>>(
            v13,
            v14,
            v15,
            v10,
            &v20);
    v17 = a1[2];
    if ( v17 == 0x7FFFFFFFFFFFFFELL )
      std::_Xlength_error("list<T> too long");
    a1[2] = v17 + 1;
    v14[1] = v16;
    *v15 = v16;
    std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>>>,0>>::_Insert<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>>>>>>(
      a1,
      &v19,
      *(_QWORD *)a1[1] + 16LL);
    j = v19;
  }
  return j + 3;
}
