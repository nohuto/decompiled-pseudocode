/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBQEAX@Z @ 0x180235A40
 * Callers:
 *     ?Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z @ 0x1802359B8 (-Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@2@0@Z @ 0x1800D771C (-erase@-$_Tree@V-$_Tmap_traits@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pair@QEAXUDEV.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180172124 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::erase(
        __int64 a1,
        unsigned __int64 *a2)
{
  unsigned __int64 i; // rcx
  char v3; // r11
  __int64 v4; // r10
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned __int64 v7; // r8
  __int64 *v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = a1;
  i = CPointerDeviceCache::s_deviceCache;
  v3 = 0;
  v4 = CPointerDeviceCache::s_deviceCache;
  v5 = CPointerDeviceCache::s_deviceCache;
  v6 = *(_QWORD *)(CPointerDeviceCache::s_deviceCache + 8);
  if ( !*(_BYTE *)(v6 + 25) )
  {
    v7 = *a2;
    do
    {
      if ( *(_QWORD *)(v6 + 32) >= v7 )
      {
        if ( *(_BYTE *)(v5 + 25) && v7 < *(_QWORD *)(v6 + 32) )
          v5 = v6;
        v4 = v6;
        v6 = *(_QWORD *)v6;
      }
      else
      {
        v6 = *(_QWORD *)(v6 + 16);
      }
    }
    while ( !*(_BYTE *)(v6 + 25) );
  }
  v8 = (__int64 *)(CPointerDeviceCache::s_deviceCache + 8);
  if ( !*(_BYTE *)(v5 + 25) )
    v8 = (__int64 *)v5;
  v9 = *v8;
  if ( !*(_BYTE *)(v9 + 25) )
  {
    i = *a2;
    do
    {
      if ( i >= *(_QWORD *)(v9 + 32) )
      {
        v9 = *(_QWORD *)(v9 + 16);
      }
      else
      {
        v5 = v9;
        v9 = *(_QWORD *)v9;
      }
    }
    while ( !*(_BYTE *)(v9 + 25) );
  }
  v10 = (_QWORD *)v4;
  v11 = 0LL;
  while ( v10 != (_QWORD *)v5 )
  {
    v12 = v10[2];
    ++v11;
    if ( *(_BYTE *)(v12 + 25) == v3 )
    {
      v10 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min((_QWORD *)v12);
    }
    else
    {
      for ( i = v10[1]; *(_BYTE *)(i + 25) == v3 && v10 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        v10 = (_QWORD *)i;
      v10 = (_QWORD *)i;
    }
  }
  std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::erase(
    i,
    &v14,
    v4,
    v5);
  return v11;
}
