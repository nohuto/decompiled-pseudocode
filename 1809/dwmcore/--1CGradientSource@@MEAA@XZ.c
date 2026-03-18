/*
 * XREFs of ??1CGradientSource@@MEAA@XZ @ 0x18001F030
 * Callers:
 *     ??1CGradientBrush@@MEAA@XZ @ 0x18001EF10 (--1CGradientBrush@@MEAA@XZ.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D62C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCWindowBackgroundTrea.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@@Z @ 0x18001F0AC (-_Erase@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U-$less@PEBVCD3DDe.c)
 */

void __fastcall CGradientSource::~CGradientSource(CGradientSource *this)
{
  _QWORD *v1; // rbx
  __int64 *v2; // r10
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)((char *)this + 8);
  v2 = (__int64 *)*((_QWORD *)this + 1);
  v3 = *v2;
  v5 = *v2;
  while ( (__int64 *)v3 != v2 )
  {
    v4 = *(_QWORD *)(v3 + 40);
    if ( v4 )
      *(_QWORD *)(v4 + 40) = 0LL;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CWindowBackgroundTreatment *>>,std::_Iterator_base0>::operator++(&v5);
    v3 = v5;
  }
  std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Erase(
    v1,
    *(_QWORD *)(*v1 + 8LL));
  *(_QWORD *)(*v1 + 8LL) = *v1;
  *(_QWORD *)*v1 = *v1;
  *(_QWORD *)(*v1 + 16LL) = *v1;
  v1[1] = 0LL;
  std::_Deallocate<16,0>(*v1, 56LL);
}
