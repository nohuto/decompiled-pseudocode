/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@2@0@Z @ 0x1800D771C
 * Callers:
 *     ??1?$map@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@@std@@QEAA@XZ @ 0x1800D76E0 (--1-$map@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pair@QEAXUDEVICE_INFO@@@std@@@3@@st.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBQEAX@Z @ 0x180235A40 (-erase@-$_Tree@V-$_Tmap_traits@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$_ea_180235A40.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1800D7778 (-clear@-$_Tree@V-$_Tmap_traits@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pair@QEAXUDEV.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180172124 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@QEAAPEAU?$_Tree_node@IPEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@2@@Z @ 0x18018A300 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@I@std@@@std@@QEAAPEAU-$_Tree_node@IPEAX@2@V-$_Tree_c.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::erase(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rbx
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 i; // rax
  __int64 v11; // rax
  __int64 j; // rcx
  void *v13; // rax

  v5 = a3;
  if ( a3 == *(_QWORD *)CPointerDeviceCache::s_deviceCache && a4 == (_QWORD)CPointerDeviceCache::s_deviceCache )
  {
    std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::clear();
    *a2 = *(_QWORD *)CPointerDeviceCache::s_deviceCache;
  }
  else
  {
    while ( v5 != a4 )
    {
      v8 = *(_QWORD *)(v5 + 16);
      v9 = v5;
      if ( *(_BYTE *)(v8 + 25) )
      {
        for ( i = *(_QWORD *)(v5 + 8); !*(_BYTE *)(i + 25) && v5 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
          v5 = i;
      }
      else
      {
        i = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min(
              *(_QWORD *)(v5 + 16),
              a2,
              v5);
      }
      v5 = i;
      v11 = v9;
      if ( *(_BYTE *)(v8 + 25) )
      {
        for ( j = *(_QWORD *)(v9 + 8); !*(_BYTE *)(j + 25) && v11 == *(_QWORD *)(j + 16); j = *(_QWORD *)(j + 8) )
          v11 = j;
      }
      v13 = (void *)std::_Tree_val<std::_Tree_simple_types<unsigned int>>::_Extract(
                      &CPointerDeviceCache::s_deviceCache,
                      v9);
      std::_Deallocate<16,0>(v13, 0x60uLL);
    }
    *a2 = v5;
  }
  return a2;
}
