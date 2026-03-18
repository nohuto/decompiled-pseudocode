/*
 * XREFs of ??$_Insert_at@AEAU?$pair@QEAXUDEVICE_INFO@@@std@@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@1@AEAU?$pair@QEAXUDEVICE_INFO@@@1@1@Z @ 0x180236A04
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@QEAXUDEVICE_INFO@@@std@@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@1@AEAU?$pair@QEAXUDEVICE_INFO@@@1@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@1@@Z @ 0x180236B94 (--$_Insert_hint@AEAU-$pair@QEAXUDEVICE_INFO@@@std@@PEAU-$_Tree_node@U-$pair@QEAXUDEVICE_INFO@@@s.c)
 *     ??$_Insert_nohint@AEAU?$pair@QEAXUDEVICE_INFO@@@std@@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEAXUDEVICE_INFO@@@1@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@1@@Z @ 0x180236D74 (--$_Insert_nohint@AEAU-$pair@QEAXUDEVICE_INFO@@@std@@PEAU-$_Tree_node@U-$pair@QEAXUDEVICE_INFO@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180173898 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootPr.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180175BF8 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootPr.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::_Insert_at<std::pair<void * const,DEVICE_INFO> &,std::_Tree_node<std::pair<void * const,DEVICE_INFO>,void *> *>(
        __int64 a1,
        _QWORD *a2,
        char a3,
        _QWORD *a4,
        int a5,
        _QWORD *a6)
{
  _QWORD *v6; // r11
  const char *v7; // rcx
  _QWORD *v8; // r10
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // r9
  __int64 v12; // rax
  __int64 *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *result; // rax

  v6 = a2;
  if ( *((_QWORD *)&CPointerDeviceCache::s_deviceCache + 1) >= 0x2AAAAAAAAAAAAA9uLL )
  {
    std::_Deallocate<16,0>(a6, 0x60uLL);
    std::_Xlength_error(v7);
  }
  v8 = a6;
  ++*((_QWORD *)&CPointerDeviceCache::s_deviceCache + 1);
  a6[1] = a4;
  if ( a4 == (_QWORD *)CPointerDeviceCache::s_deviceCache )
  {
    *(_QWORD *)(CPointerDeviceCache::s_deviceCache + 8) = a6;
    *(_QWORD *)CPointerDeviceCache::s_deviceCache = a6;
    v9 = CPointerDeviceCache::s_deviceCache;
LABEL_9:
    *(_QWORD *)(v9 + 16) = a6;
    goto LABEL_10;
  }
  if ( a3 )
  {
    *a4 = a6;
    if ( a4 == *(_QWORD **)CPointerDeviceCache::s_deviceCache )
      *(_QWORD *)CPointerDeviceCache::s_deviceCache = a6;
    goto LABEL_10;
  }
  a4[2] = a6;
  v9 = CPointerDeviceCache::s_deviceCache;
  if ( a4 == *(_QWORD **)(CPointerDeviceCache::s_deviceCache + 16) )
    goto LABEL_9;
LABEL_10:
  v10 = a6[1];
  v11 = a6;
  while ( !*(_BYTE *)(v10 + 24) )
  {
    v12 = v11[1];
    v13 = *(__int64 **)(v12 + 8);
    v14 = *v13;
    if ( v12 == *v13 )
    {
      v14 = v13[2];
      if ( !*(_BYTE *)(v14 + 24) )
        goto LABEL_17;
      if ( v11 == *(_QWORD **)(v12 + 16) )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Lrotate(
          (__int64)&CPointerDeviceCache::s_deviceCache,
          v11[1]);
      *(_BYTE *)(v11[1] + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(v11[1] + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
        (__int64)&CPointerDeviceCache::s_deviceCache,
        *(_QWORD **)(v11[1] + 8LL));
    }
    else
    {
      if ( !*(_BYTE *)(v14 + 24) )
      {
LABEL_17:
        *(_BYTE *)(v12 + 24) = 1;
        *(_BYTE *)(v14 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(v11[1] + 8LL) + 24LL) = 0;
        v11 = *(_QWORD **)(v11[1] + 8LL);
        goto LABEL_21;
      }
      if ( v11 == *(_QWORD **)v12 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
          (__int64)&CPointerDeviceCache::s_deviceCache,
          (_QWORD *)v11[1]);
      *(_BYTE *)(v11[1] + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(v11[1] + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Lrotate(
        (__int64)&CPointerDeviceCache::s_deviceCache,
        *(_QWORD *)(v11[1] + 8LL));
    }
LABEL_21:
    v10 = v11[1];
  }
  v15 = CPointerDeviceCache::s_deviceCache;
  *v6 = v8;
  v16 = *(_QWORD *)(v15 + 8);
  result = v6;
  *(_BYTE *)(v16 + 24) = 1;
  return result;
}
