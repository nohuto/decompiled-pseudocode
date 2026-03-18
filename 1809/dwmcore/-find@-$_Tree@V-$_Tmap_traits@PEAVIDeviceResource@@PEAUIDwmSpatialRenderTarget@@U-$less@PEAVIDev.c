/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@PEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@U?$less@PEAVIDeviceResource@@@std@@V?$allocator@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@@std@@@std@@@2@AEBQEAVIDeviceResource@@@Z @ 0x18015752C
 * Callers:
 *     ?GetSpatialRenderTargetNoRef@CSpatialResourceManager@@QEAAJPEAVCD3DSurface@@PEAPEAUIDwmSpatialRenderTarget@@@Z @ 0x180156D58 (-GetSpatialRenderTargetNoRef@CSpatialResourceManager@@QEAAJPEAVCD3DSurface@@PEAPEAUIDwmSpatialRe.c)
 *     ?NotifyInvalidResource@CSpatialResourceManager@@UEAAXPEBVIDeviceResource@@@Z @ 0x180156EC0 (-NotifyInvalidResource@CSpatialResourceManager@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Tree<std::_Tmap_traits<IDeviceResource *,IDwmSpatialRenderTarget *,std::less<IDeviceResource *>,std::allocator<std::pair<IDeviceResource * const,IDwmSpatialRenderTarget *>>,0>>::find(
        __int64 **a1,
        __int64 **a2,
        _QWORD *a3)
{
  __int64 *v3; // r9
  __int64 *v4; // rcx
  __int64 *v5; // r10
  __int64 *v6; // rax

  v3 = *a1;
  v4 = v3;
  v5 = v3;
  v6 = (__int64 *)v3[1];
  if ( !*((_BYTE *)v6 + 25) )
  {
    do
    {
      if ( (unsigned __int64)v6[4] >= *a3 )
      {
        v4 = v6;
        v6 = (__int64 *)*v6;
      }
      else
      {
        v6 = (__int64 *)v6[2];
      }
    }
    while ( !*((_BYTE *)v6 + 25) );
    v5 = v3;
  }
  if ( v4 == v5 || *a3 < (unsigned __int64)v4[4] )
    v4 = v3;
  *a2 = v4;
  return a2;
}
