/*
 * XREFs of ??1?$map@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@@std@@QEAA@XZ @ 0x1800D7194
 * Callers:
 *     _dynamic_atexit_destructor_for__CPointerDeviceCache::s_deviceCache__ @ 0x1800EDD80 (_dynamic_atexit_destructor_for__CPointerDeviceCache--s_deviceCache__.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@2@0@Z @ 0x1800D71D0 (-erase@-$_Tree@V-$_Tmap_traits@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pair@QEAXUDEV.c)
 */

void __fastcall std::map<void *,DEVICE_INFO>::~map<void *,DEVICE_INFO>(__int64 a1)
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1;
  std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::erase(
    a1,
    &v1,
    *(_QWORD *)CPointerDeviceCache::s_deviceCache,
    CPointerDeviceCache::s_deviceCache);
  std::_Deallocate<16,0>((void *)CPointerDeviceCache::s_deviceCache, 0x60uLL);
}
