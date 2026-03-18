/*
 * XREFs of ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180156BE8
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@PEAU?$_Tree_node@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@U?$less@PEAVIDeviceResource@@@std@@V?$allocator@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@@std@@@std@@@1@AEAU?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@1@PEAU?$_Tree_node@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@PEAX@1@@Z @ 0x180156814 (--$_Insert_hint@AEAU-$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@PEAU-$_Tree_n.c)
 *     ?ReleaseSpatialCompositor@CSpatialResourceManager@@AEAAXXZ @ 0x180156FC4 (-ReleaseSpatialCompositor@CSpatialResourceManager@@AEAAXXZ.c)
 *     ?_Extract@?$_Tree@V?$_Tmap_traits@PEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@U?$less@PEAVIDeviceResource@@@std@@V?$allocator@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@@std@@@std@@@2@@Z @ 0x1801571F0 (-_Extract@-$_Tree@V-$_Tmap_traits@PEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@U-$less@PEAV.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@U?$less@PEAVIDeviceResource@@@std@@V?$allocator@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@@std@@@std@@@2@@Z @ 0x1801574DC (-erase@-$_Tree@V-$_Tmap_traits@PEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@U-$less@PEAVIDe.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180148F2C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 */

_QWORD *__fastcall std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<IDeviceResource * const,IDwmSpatialRenderTarget *>>>,std::_Iterator_base0>::operator++(
        _QWORD *a1)
{
  _QWORD *v1; // rdx
  _QWORD *v2; // r8
  __int64 v3; // rcx
  _QWORD *i; // rax

  v1 = (_QWORD *)*a1;
  v2 = a1;
  if ( !*(_BYTE *)(*a1 + 25LL) )
  {
    v3 = v1[2];
    if ( *(_BYTE *)(v3 + 25) )
    {
      for ( i = (_QWORD *)v1[1]; !*((_BYTE *)i + 25) && v1 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
      {
        *v2 = i;
        v1 = i;
      }
    }
    else
    {
      i = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min((_QWORD *)v3);
    }
    *v2 = i;
  }
  return v2;
}
