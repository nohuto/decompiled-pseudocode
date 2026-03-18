/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@@2@@Z @ 0x1801F4FCC
 * Callers:
 *     ?NotifyAtlasEntryInvalidated@CGradientSource@@MEAAXPEBVCD3DDeviceLevel1@@@Z @ 0x1801F4C80 (-NotifyAtlasEntryInvalidated@CGradientSource@@MEAAXPEBVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180022A40 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEBVCD3DDeviceLev.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@@2@@Z @ 0x1801F4D1C (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v4; // r9
  _QWORD *v5; // r10
  __int64 *v6; // rax
  __int64 *v7; // rsi
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = a3;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>>,std::_Iterator_base0>::operator++(&v10);
  v6 = std::_Tree_val<std::_Tree_simple_types<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>>::_Extract(
         v5,
         v4);
  v7 = v6;
  v8 = v6[6];
  if ( v8 )
  {
    v6[6] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v7 + 5);
  std::_Deallocate<16,0>(v7, 0x38uLL);
  *a2 = v10;
  return a2;
}
