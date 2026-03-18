/*
 * XREFs of ?ReleaseSpatialCompositor@CSpatialResourceManager@@AEAAXXZ @ 0x180156FC4
 * Callers:
 *     ??1CSpatialResourceManager@@QEAA@XZ @ 0x180156B48 (--1CSpatialResourceManager@@QEAA@XZ.c)
 *     ?NotifyInvalidResource@CSpatialResourceManager@@UEAAXPEBVIDeviceResource@@@Z @ 0x180156EC0 (-NotifyInvalidResource@CSpatialResourceManager@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18009B710 (-RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180156BE8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVIDeviceResour.c)
 *     ?GetSpatialCompositor@CSpatialResourceManager@@QEBAPEAUIDwmSpatialCompositor@@XZ @ 0x180156D40 (-GetSpatialCompositor@CSpatialResourceManager@@QEBAPEAUIDwmSpatialCompositor@@XZ.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@U?$less@PEAVIDeviceResource@@@std@@V?$allocator@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1801574A0 (-clear@-$_Tree@V-$_Tmap_traits@PEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@U-$less@PEAVIDe.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015757C (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CSpatialResourceManager::ReleaseSpatialCompositor(CSpatialResourceManager *this)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 *v4; // rdi
  __int64 v5; // rbx
  struct IDwmSpatialCompositor *SpatialCompositor; // r15
  _QWORD *v7; // rdi
  unsigned __int64 v8; // rbx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    CD3DResource::RemoveResourceNotifier((CD3DResource *)(v3 + 24), this);
    v4 = (__int64 *)*((_QWORD *)this + 7);
    v5 = *v4;
    v9 = *v4;
    while ( (__int64 *)v5 != v4 )
    {
      (*(void (__fastcall **)(_QWORD, CSpatialResourceManager *))(**(_QWORD **)(v5 + 32) + 32LL))(
        *(_QWORD *)(v5 + 32),
        this);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 40) + 16LL))(*(_QWORD *)(v5 + 40));
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<IDeviceResource * const,IDwmSpatialRenderTarget *>>>,std::_Iterator_base0>::operator++(&v9);
      v5 = v9;
    }
    std::_Tree<std::_Tmap_traits<IDeviceResource *,IDwmSpatialRenderTarget *,std::less<IDeviceResource *>,std::allocator<std::pair<IDeviceResource * const,IDwmSpatialRenderTarget *>>,0>>::clear((char *)this + 56);
    SpatialCompositor = CSpatialResourceManager::GetSpatialCompositor(this);
    if ( SpatialCompositor )
    {
      v7 = (_QWORD *)*((_QWORD *)this + 4);
      v8 = (unsigned __int64)(*((_QWORD *)this + 5) - (_QWORD)v7 + 7LL) >> 3;
      if ( (unsigned __int64)v7 > *((_QWORD *)this + 5) )
        v8 = 0LL;
      if ( v8 )
      {
        do
        {
          (*(void (__fastcall **)(_QWORD, struct IDwmSpatialCompositor *))(*(_QWORD *)*v7 + 8LL))(
            *v7,
            SpatialCompositor);
          ++v2;
          ++v7;
        }
        while ( v2 != v8 );
      }
    }
    wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset((char *)this + 24);
  }
}
