/*
 * XREFs of ?_Erase@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@2@@Z @ 0x1800D7278
 * Callers:
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1800D722C (-clear@-$_Tree@V-$_Tmap_traits@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pair@QEAXUDEV.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@2@@Z @ 0x1800D7278 (-_Erase@-$_Tree@V-$_Tmap_traits@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pair@QEAXUDE.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@2@@Z @ 0x1800D7278 (-_Erase@-$_Tree@V-$_Tmap_traits@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pair@QEAXUDE.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::_Erase(
        __int64 a1,
        void *a2)
{
  void *v2; // rbx
  _QWORD *v3; // rdi

  v2 = a2;
  v3 = a2;
  if ( !*((_BYTE *)a2 + 25) )
  {
    do
    {
      std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::_Erase(
        &CPointerDeviceCache::s_deviceCache,
        v3[2]);
      v3 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v2, 0x60uLL);
      v2 = v3;
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
}
