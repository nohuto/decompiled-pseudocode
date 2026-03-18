/*
 * XREFs of ?clear@?$_Tree@V?$_Tmap_traits@PEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@U?$less@PEAVIDeviceResource@@@std@@V?$allocator@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1801574A0
 * Callers:
 *     ??1CSpatialResourceManager@@QEAA@XZ @ 0x180156B48 (--1CSpatialResourceManager@@QEAA@XZ.c)
 *     ?ReleaseSpatialCompositor@CSpatialResourceManager@@AEAAXXZ @ 0x180156FC4 (-ReleaseSpatialCompositor@CSpatialResourceManager@@AEAAXXZ.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@U?$less@PEAVIDeviceResource@@@std@@V?$allocator@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@PEAX@2@@Z @ 0x180157194 (-_Erase@-$_Tree@V-$_Tmap_traits@PEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@U-$less@PEAVID.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<IDeviceResource *,IDwmSpatialRenderTarget *,std::less<IDeviceResource *>,std::allocator<std::pair<IDeviceResource * const,IDwmSpatialRenderTarget *>>,0>>::clear(
        _QWORD *a1)
{
  __int64 result; // rax

  std::_Tree<std::_Tmap_traits<IDeviceResource *,IDwmSpatialRenderTarget *,std::less<IDeviceResource *>,std::allocator<std::pair<IDeviceResource * const,IDwmSpatialRenderTarget *>>,0>>::_Erase(
    (__int64)a1,
    *(void **)(*a1 + 8LL));
  *(_QWORD *)(*a1 + 8LL) = *a1;
  *(_QWORD *)*a1 = *a1;
  result = *a1;
  *(_QWORD *)(*a1 + 16LL) = *a1;
  a1[1] = 0LL;
  return result;
}
