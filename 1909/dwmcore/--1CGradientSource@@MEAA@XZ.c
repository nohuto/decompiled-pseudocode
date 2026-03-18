/*
 * XREFs of ??1CGradientSource@@MEAA@XZ @ 0x18001F18C
 * Callers:
 *     ??1CGradientBrush@@MEAA@XZ @ 0x18001F070 (--1CGradientBrush@@MEAA@XZ.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@@Z @ 0x18001F210 (-_Erase@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U-$less@PEBVCD3DDe.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180020E70 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEBVCD3DDeviceLev.c)
 */

void __fastcall CGradientSource::~CGradientSource(CGradientSource *this)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // r9
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  _QWORD *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)((char *)this + 8);
  v2 = (_QWORD *)*((_QWORD *)this + 1);
  v3 = (_QWORD *)*v2;
  v6 = (_QWORD *)*v2;
  while ( v3 != v2 )
  {
    v4 = v3[5];
    if ( v4 )
      *(_QWORD *)(v4 + 40) = 0LL;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>>,std::_Iterator_base0>::operator++(&v6);
    v3 = v6;
  }
  v5 = *v1;
  std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Erase(
    v1,
    *(_QWORD *)(*v1 + 8LL));
  *(_QWORD *)(*v1 + 8LL) = v5;
  *(_QWORD *)*v1 = v5;
  *(_QWORD *)(*v1 + 16LL) = v5;
  v1[1] = 0LL;
  std::_Deallocate<16,0>(*v1, 56LL);
}
