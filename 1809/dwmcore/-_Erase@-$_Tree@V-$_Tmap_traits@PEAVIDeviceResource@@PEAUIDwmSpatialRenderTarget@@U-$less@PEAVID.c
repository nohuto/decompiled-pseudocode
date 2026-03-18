/*
 * XREFs of ?_Erase@?$_Tree@V?$_Tmap_traits@PEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@U?$less@PEAVIDeviceResource@@@std@@V?$allocator@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@PEAX@2@@Z @ 0x180157194
 * Callers:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@U?$less@PEAVIDeviceResource@@@std@@V?$allocator@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@PEAX@2@@Z @ 0x180157194 (-_Erase@-$_Tree@V-$_Tmap_traits@PEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@U-$less@PEAVID.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@U?$less@PEAVIDeviceResource@@@std@@V?$allocator@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1801574A0 (-clear@-$_Tree@V-$_Tmap_traits@PEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@U-$less@PEAVIDe.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@U?$less@PEAVIDeviceResource@@@std@@V?$allocator@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@PEAX@2@@Z @ 0x180157194 (-_Erase@-$_Tree@V-$_Tmap_traits@PEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@U-$less@PEAVID.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<IDeviceResource *,IDwmSpatialRenderTarget *,std::less<IDeviceResource *>,std::allocator<std::pair<IDeviceResource * const,IDwmSpatialRenderTarget *>>,0>>::_Erase(
        __int64 a1,
        void *a2)
{
  void *v2; // rbx
  _QWORD *v4; // rdi

  v2 = a2;
  v4 = a2;
  if ( !*((_BYTE *)a2 + 25) )
  {
    do
    {
      std::_Tree<std::_Tmap_traits<IDeviceResource *,IDwmSpatialRenderTarget *,std::less<IDeviceResource *>,std::allocator<std::pair<IDeviceResource * const,IDwmSpatialRenderTarget *>>,0>>::_Erase(
        a1,
        v4[2]);
      v4 = (_QWORD *)*v4;
      std::_Deallocate<16,0>(v2, 0x30uLL);
      v2 = v4;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
}
