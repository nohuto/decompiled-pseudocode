/*
 * XREFs of ?equal_range@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@std@@V12@@2@AEBG@Z @ 0x1800790FC
 * Callers:
 *     ?erase@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBG@Z @ 0x1800792B8 (-erase@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_ea_1800792B8.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@KUUsageList@ConsumerControlDeviceCollection@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@std@@@std@@@2@_K@Z @ 0x180034244 (-_End@-$_Hash@V-$_Umap_traits@KUUsageList@ConsumerControlDeviceCollection@@V-$_Uhash_compare@KU-.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::equal_range(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int8 *a3)
{
  unsigned __int8 *v4; // r11
  __int64 v6; // rax
  unsigned __int8 *v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 i; // r10
  __int64 v11; // r14
  __int64 **v12; // rax
  __int64 *v13; // r10
  __int16 *v14; // r11
  __int16 v15; // bp
  _QWORD *v16; // rax
  __int64 v17; // r10
  __int64 v18; // r11
  __int64 v19; // rax
  __int64 v21; // [rsp+40h] [rbp+8h] BYREF

  v4 = a3;
  v6 = 0xCBF29CE484222325uLL;
  v7 = a3 + 2 >= a3 ? (unsigned __int8 *)2 : 0LL;
  if ( a3 < a3 + 2 )
  {
    do
    {
      v8 = *a3++ ^ (unsigned __int64)v6;
      v6 = 0x100000001B3LL * v8;
    }
    while ( (unsigned __int8 *)(a3 - v4) != v7 );
  }
  v9 = v6 & a1[6];
  for ( i = *(_QWORD *)(a1[3] + 16 * v9); ; i = *v13 )
  {
    v11 = i;
    v12 = (__int64 **)std::_Hash<std::_Umap_traits<unsigned long,ConsumerControlDeviceCollection::UsageList,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>>,0>>::_End(
                        (__int64)a1,
                        &v21,
                        v9);
    if ( v13 == *v12 )
      break;
    v15 = *v14;
    if ( *((_WORD *)v13 + 8) == *v14 )
    {
      do
        v16 = std::_Hash<std::_Umap_traits<unsigned long,ConsumerControlDeviceCollection::UsageList,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>>,0>>::_End(
                (__int64)a1,
                &v21,
                v9);
      while ( v17 != *v16 && v15 == *(_WORD *)(v17 + 16) );
      if ( v11 != v17 )
      {
        *a2 = v18;
        a2[1] = v17;
        return a2;
      }
      break;
    }
  }
  v19 = a1[1];
  *a2 = v19;
  a2[1] = v19;
  return a2;
}
