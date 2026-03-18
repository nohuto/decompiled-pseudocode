/*
 * XREFs of ??$_Insert_at@AEAU?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@1@AEAU?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@1@1@Z @ 0x180005B0C
 * Callers:
 *     ??$emplace@AEAPEAVCD3DDeviceLevel1@@UCache@CGradientSource@@@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@@std@@_N@1@AEAPEAVCD3DDeviceLevel1@@$$QEAUCache@CGradientSource@@@Z @ 0x180005A18 (--$emplace@AEAPEAVCD3DDeviceLevel1@@UCache@CGradientSource@@@-$_Tree@V-$_Tmap_traits@PEBVCD3DDev.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@@Z @ 0x180148F50 (-_Rrotate@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U-$less@PEBVCD3D.c)
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@IUStereoscopicViewData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicViewData@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@@Z @ 0x180155F24 (-_Lrotate@-$_Tree@V-$_Tmap_traits@IUStereoscopicViewData@@U-$less@I@std@@V-$allocator@U-$pair@$$.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
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
  char v8; // r10
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *result; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 *v18; // rdx
  __int64 v19; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v6 = a1[1];
  v7 = a1;
  v8 = 0;
  if ( v6 >= 0x492492492492491LL )
  {
    v16 = *(_QWORD *)(a6 + 48);
    if ( v16 )
    {
      *(_QWORD *)(a6 + 48) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(a6 + 40);
    std::_Deallocate<16,0>(a6, 56LL);
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  }
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
  while ( *(_BYTE *)(v11 + 24) == v8 )
  {
    v17 = *(_QWORD *)(v12 + 8);
    v18 = *(__int64 **)(v17 + 8);
    v19 = *v18;
    if ( v17 == *v18 )
    {
      v19 = v18[2];
      if ( *(_BYTE *)(v19 + 24) == v8 )
        goto LABEL_26;
      if ( v12 == *(_QWORD *)(v17 + 16) )
        std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicViewData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicViewData>>,0>>::_Lrotate(
          v7,
          *(_QWORD *)(v12 + 8));
      *(_BYTE *)(*(_QWORD *)(v12 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL) + 24LL) = v8;
      std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Rrotate(
        v7,
        *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL),
        a3,
        v12);
    }
    else
    {
      if ( *(_BYTE *)(v19 + 24) == v8 )
      {
LABEL_26:
        *(_BYTE *)(v17 + 24) = 1;
        *(_BYTE *)(v19 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL) + 24LL) = v8;
        v12 = *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL);
        goto LABEL_25;
      }
      if ( v12 == *(_QWORD *)v17 )
        std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Rrotate(
          v7,
          *(_QWORD *)(v12 + 8),
          a3,
          *(_QWORD *)(v12 + 8));
      *(_BYTE *)(*(_QWORD *)(v12 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL) + 24LL) = v8;
      std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicViewData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicViewData>>,0>>::_Lrotate(
        v7,
        *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL));
    }
LABEL_25:
    v11 = *(_QWORD *)(v12 + 8);
  }
  v13 = *v7;
  *a2 = a6;
  v14 = *(_QWORD *)(v13 + 8);
  result = a2;
  *(_BYTE *)(v14 + 24) = 1;
  return result;
}
