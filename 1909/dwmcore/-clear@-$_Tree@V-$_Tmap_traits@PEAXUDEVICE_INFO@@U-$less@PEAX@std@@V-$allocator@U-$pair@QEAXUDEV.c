/*
 * XREFs of ?clear@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1800D7778
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@2@0@Z @ 0x1800D771C (-erase@-$_Tree@V-$_Tmap_traits@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pair@QEAXUDEV.c)
 *     ?OnUp@CGlobalManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x180237B70 (-OnUp@CGlobalManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@2@@Z @ 0x1800D77C4 (-_Erase@-$_Tree@V-$_Tmap_traits@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pair@QEAXUDE.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::clear(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = CPointerDeviceCache::s_deviceCache;
  std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::_Erase(
    a1,
    *(_QWORD *)(CPointerDeviceCache::s_deviceCache + 8));
  *(_QWORD *)(CPointerDeviceCache::s_deviceCache + 8) = v1;
  *(_QWORD *)CPointerDeviceCache::s_deviceCache = v1;
  result = CPointerDeviceCache::s_deviceCache;
  *(_QWORD *)(CPointerDeviceCache::s_deviceCache + 16) = v1;
  *((_QWORD *)&CPointerDeviceCache::s_deviceCache + 1) = 0LL;
  return result;
}
