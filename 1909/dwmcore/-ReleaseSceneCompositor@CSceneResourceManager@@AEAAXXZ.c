/*
 * XREFs of ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ @ 0x18017AC70
 * Callers:
 *     ??1CSceneResourceManager@@QEAA@XZ @ 0x18017A424 (--1CSceneResourceManager@@QEAA@XZ.c)
 *     ?NotifyInvalidResource@CSceneResourceManager@@UEAAXPEBVIDeviceResource@@@Z @ 0x18017AB70 (-NotifyInvalidResource@CSceneResourceManager@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18004F7E0 (-RemoveResourceNotifier@CD3DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18017A4C4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVIDeviceResour.c)
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x18017AB54 (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAVIDeviceResource@@PEAUISpectreRenderTarget@@U?$less@PEAVIDeviceResource@@@std@@V?$allocator@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18017B0F4 (-clear@-$_Tree@V-$_Tmap_traits@PEAVIDeviceResource@@PEAUISpectreRenderTarget@@U-$less@PEAVIDevic.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18017B188 (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CSceneResourceManager::ReleaseSceneCompositor(CSceneResourceManager *this)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 *v4; // rdi
  __int64 v5; // rbx
  struct ISpectreRenderer *SpectreRenderer; // r15
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
      (*(void (__fastcall **)(_QWORD, CSceneResourceManager *))(**(_QWORD **)(v5 + 32) + 32LL))(
        *(_QWORD *)(v5 + 32),
        this);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 40) + 16LL))(*(_QWORD *)(v5 + 40));
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<IDeviceResource * const,ISpectreRenderTarget *>>>,std::_Iterator_base0>::operator++(&v9);
      v5 = v9;
    }
    std::_Tree<std::_Tmap_traits<IDeviceResource *,ISpectreRenderTarget *,std::less<IDeviceResource *>,std::allocator<std::pair<IDeviceResource * const,ISpectreRenderTarget *>>,0>>::clear((char *)this + 56);
    SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(this);
    if ( SpectreRenderer )
    {
      v7 = (_QWORD *)*((_QWORD *)this + 4);
      v8 = (unsigned __int64)(*((_QWORD *)this + 5) - (_QWORD)v7 + 7LL) >> 3;
      if ( (unsigned __int64)v7 > *((_QWORD *)this + 5) )
        v8 = 0LL;
      if ( v8 )
      {
        do
        {
          (*(void (__fastcall **)(_QWORD, struct ISpectreRenderer *))(*(_QWORD *)*v7 + 8LL))(*v7, SpectreRenderer);
          ++v2;
          ++v7;
        }
        while ( v2 != v8 );
      }
    }
    wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset((char *)this + 24);
  }
}
