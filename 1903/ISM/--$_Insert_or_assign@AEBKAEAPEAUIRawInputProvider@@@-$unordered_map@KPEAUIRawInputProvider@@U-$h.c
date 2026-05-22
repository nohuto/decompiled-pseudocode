/*
 * XREFs of ??$_Insert_or_assign@AEBKAEAPEAUIRawInputProvider@@@?$unordered_map@KPEAUIRawInputProvider@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAPEAUIRawInputProvider@@@Z @ 0x180013180
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180012820 (-OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 *     ?ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x180012968 (-ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 * Callees:
 *     ??$_Buynode@AEBKAEAPEAUIRawInputProvider@@@?$_List_buy@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@PEAX@1@PEAU21@0AEBKAEAPEAUIRawInputProvider@@@Z @ 0x1800132A4 (--$_Buynode@AEBKAEAPEAUIRawInputProvider@@@-$_List_buy@U-$pair@$$CBKPEAUIRawInputProvider@@@std@.c)
 *     ??$_Insert@AEAU?$pair@$$CBKPEAUDeviceInfo@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKPEAUDeviceInfo@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@std@@@std@@@1@@Z @ 0x180013338 (--$_Insert@AEAU-$pair@$$CBKPEAUDeviceInfo@@@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_Li.c)
 */

__int64 __fastcall std::unordered_map<unsigned long,IRawInputProvider *>::_Insert_or_assign<unsigned long const &,IRawInputProvider * &>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 *a3,
        __int64 *a4)
{
  __int64 v7; // rax
  unsigned __int8 *v8; // r11
  unsigned __int64 v9; // rax
  __int64 v10; // r10
  __int64 *v11; // rdx
  __int64 v12; // r9
  __int64 *i; // rax
  __int64 *v14; // rcx
  __int64 *v15; // rcx
  __int64 v16; // rsi
  __int64 *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rax

  v7 = 0xCBF29CE484222325uLL;
  v8 = a3;
  if ( a3 < a3 + 4 )
  {
    do
    {
      v9 = *v8++ ^ (unsigned __int64)v7;
      v7 = 0x100000001B3LL * v9;
    }
    while ( v8 - a3 != (a3 + 4 >= a3 ? 4 : 0) );
  }
  v10 = a1[3];
  v11 = (__int64 *)a1[1];
  v12 = 2 * (v7 & a1[6]);
  for ( i = *(__int64 **)(v10 + 16 * (v7 & a1[6])); ; i = (__int64 *)*i )
  {
    if ( *(__int64 **)(v10 + 8 * v12) == v11 )
      v14 = (__int64 *)a1[1];
    else
      v14 = **(__int64 ***)(v10 + 8 * v12 + 8);
    if ( i == v14 )
    {
      i = (__int64 *)a1[1];
      v15 = i;
      goto LABEL_8;
    }
    if ( *((_DWORD *)i + 4) == *(_DWORD *)a3 )
      break;
  }
  v15 = i;
LABEL_8:
  if ( v15 == v11 )
  {
    v16 = *v11;
    v17 = *(__int64 **)(*v11 + 8);
    v18 = std::_List_buy<std::pair<unsigned long const,IRawInputProvider *>>::_Buynode<unsigned long const &,IRawInputProvider * &>(
            (_DWORD)v15,
            *v11,
            (_DWORD)v17,
            (_DWORD)a3,
            (__int64)a4);
    v19 = a1[2];
    if ( v19 == 0x7FFFFFFFFFFFFFELL )
      std::_Xlength_error("list<T> too long");
    a1[2] = v19 + 1;
    *(_QWORD *)(v16 + 8) = v18;
    *v17 = v18;
    std::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>::_Insert<std::pair<unsigned long const,DeviceInfo *> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,DeviceInfo *>>>>>(
      a1,
      a2,
      *(_QWORD *)a1[1] + 16LL);
  }
  else
  {
    i[3] = *a4;
    *(_QWORD *)a2 = i;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
