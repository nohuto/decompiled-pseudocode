/*
 * XREFs of ??$_Insert_at@AEAU?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@1@AEAU?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@1@1@Z @ 0x1800197F4
 * Callers:
 *     ??$emplace@AEAPEAVCD3DDeviceLevel1@@UCache@CGradientSource@@@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@@std@@_N@1@AEAPEAVCD3DDeviceLevel1@@$$QEAUCache@CGradientSource@@@Z @ 0x180019700 (--$emplace@AEAPEAVCD3DDeviceLevel1@@UCache@CGradientSource@@@-$_Tree@V-$_Tmap_traits@PEBVCD3DDev.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180172148 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootPr.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180174488 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootPr.c)
 *     ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@@Z @ 0x1801F35DC (-_Destroy_if_node@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U-$less@.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Insert_at<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache> &,std::_Tree_node<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>,void *> *>(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 *v7; // r11
  __int64 v9; // r10
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *result; // rax
  const char *v16; // rcx
  __int64 v17; // rax
  __int64 *v18; // rdx
  __int64 v19; // rcx

  v6 = a1[1];
  v7 = a1;
  if ( v6 >= 0x492492492492491LL )
  {
    std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Destroy_if_node(
      0x492492492492491LL,
      a6);
    std::_Xlength_error(v16);
  }
  v9 = a6;
  a1[1] = v6 + 1;
  *(_QWORD *)(a6 + 8) = a4;
  if ( a4 == (_QWORD *)*a1 )
  {
    *(_QWORD *)(*a1 + 8) = a6;
    *(_QWORD *)*a1 = a6;
    v10 = *a1;
LABEL_4:
    *(_QWORD *)(v10 + 16) = a6;
    goto LABEL_5;
  }
  if ( (_BYTE)a3 )
  {
    *a4 = a6;
    if ( a4 == *(_QWORD **)*a1 )
      *(_QWORD *)*a1 = a6;
    goto LABEL_5;
  }
  a4[2] = a6;
  v10 = *a1;
  if ( a4 == *(_QWORD **)(*a1 + 16) )
    goto LABEL_4;
LABEL_5:
  v11 = *(_QWORD *)(a6 + 8);
  v12 = a6;
  while ( !*(_BYTE *)(v11 + 24) )
  {
    v17 = *(_QWORD *)(v12 + 8);
    v18 = *(__int64 **)(v17 + 8);
    v19 = *v18;
    if ( v17 == *v18 )
    {
      v19 = v18[2];
      if ( !*(_BYTE *)(v19 + 24) )
        goto LABEL_24;
      if ( v12 == *(_QWORD *)(v17 + 16) )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Lrotate(
          v7,
          *(_QWORD *)(v12 + 8));
      *(_BYTE *)(*(_QWORD *)(v12 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
        v7,
        *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL),
        a3,
        v12);
    }
    else
    {
      if ( !*(_BYTE *)(v19 + 24) )
      {
LABEL_24:
        *(_BYTE *)(v17 + 24) = 1;
        *(_BYTE *)(v19 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL) + 24LL) = 0;
        v12 = *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL);
        goto LABEL_23;
      }
      if ( v12 == *(_QWORD *)v17 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
          v7,
          *(_QWORD *)(v12 + 8),
          a3,
          *(_QWORD *)(v12 + 8));
      *(_BYTE *)(*(_QWORD *)(v12 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Lrotate(
        v7,
        *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL));
    }
LABEL_23:
    v11 = *(_QWORD *)(v12 + 8);
  }
  v13 = *v7;
  *a2 = v9;
  v14 = *(_QWORD *)(v13 + 8);
  result = a2;
  *(_BYTE *)(v14 + 24) = 1;
  return result;
}
