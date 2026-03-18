/*
 * XREFs of ?NotifyInvalidResource@CSpatialResourceManager@@UEAAXPEBVIDeviceResource@@@Z @ 0x180156EC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseSpatialCompositor@CSpatialResourceManager@@AEAAXXZ @ 0x180156FC4 (-ReleaseSpatialCompositor@CSpatialResourceManager@@AEAAXXZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@U?$less@PEAVIDeviceResource@@@std@@V?$allocator@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@@std@@@std@@@2@@Z @ 0x1801574DC (-erase@-$_Tree@V-$_Tmap_traits@PEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@U-$less@PEAVIDe.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@PEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@U?$less@PEAVIDeviceResource@@@std@@V?$allocator@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@@std@@@std@@@2@AEBQEAVIDeviceResource@@@Z @ 0x18015752C (-find@-$_Tree@V-$_Tmap_traits@PEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@U-$less@PEAVIDev.c)
 */

void __fastcall CSpatialResourceManager::NotifyInvalidResource(
        CSpatialResourceManager *this,
        const struct IDeviceResource *a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // r11
  __int64 v4; // rbx
  const struct IDeviceResource *v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 == (const struct IDeviceResource *)((*((_QWORD *)this + 3) + 24LL) & -(__int64)(*((_QWORD *)this + 3) != 0LL)) )
  {
    CSpatialResourceManager::ReleaseSpatialCompositor(this);
  }
  else
  {
    v2 = (_QWORD *)((char *)this + 56);
    v5 = a2;
    std::_Tree<std::_Tmap_traits<IDeviceResource *,IDwmSpatialRenderTarget *,std::less<IDeviceResource *>,std::allocator<std::pair<IDeviceResource * const,IDwmSpatialRenderTarget *>>,0>>::find(
      (char *)this + 56,
      &v6,
      &v5);
    v4 = v6;
    if ( v6 != *v2 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v6 + 32) + 32LL))(*(_QWORD *)(v6 + 32), v3);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 40) + 16LL))(*(_QWORD *)(v4 + 40));
      std::_Tree<std::_Tmap_traits<IDeviceResource *,IDwmSpatialRenderTarget *,std::less<IDeviceResource *>,std::allocator<std::pair<IDeviceResource * const,IDwmSpatialRenderTarget *>>,0>>::erase(
        v2,
        &v5,
        v4);
    }
  }
}
