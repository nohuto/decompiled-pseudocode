/*
 * XREFs of ?GetSpectreRenderTargetNoRef@CSceneResourceManager@@QEAAJPEAVCD3DSurface@@PEAPEAUISpectreRenderTarget@@@Z @ 0x18017A9E0
 * Callers:
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18016CB64 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?find@?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@@2@AEBQEAVCInteractionTracker@@@Z @ 0x1800ED87C (-find@-$_Tree@V-$_Tset_traits@PEAVCInteractionTracker@@U-$less@PEAVCInteractionTracker@@@std@@V-.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVIDeviceResource@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@PEAVIDeviceResource@@PEAUISpectreRenderTarget@@U?$less@PEAVIDeviceResource@@@std@@V?$allocator@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVIDeviceResource@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18017A3A4 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAVIDeviceResource@@@2@V-$tuple@$$V@.c)
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x18017AB54 (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 */

__int64 __fastcall CSceneResourceManager::GetSpectreRenderTargetNoRef(
        CSceneResourceManager *this,
        struct CD3DSurface *a2,
        struct ISpectreRenderTarget **a3)
{
  __int64 **v3; // rdi
  struct ISpectreRenderTarget *v7; // rax
  struct ISpectreRenderer *SpectreRenderer; // rax
  signed int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 *v12; // rsi
  signed int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 *v16; // rax
  struct ISpectreRenderTarget *v17; // rbx
  __int64 *v18; // rdx
  __int64 v19; // rcx
  __int64 v21; // [rsp+30h] [rbp-10h] BYREF
  struct ISpectreRenderTarget *v22; // [rsp+70h] [rbp+30h] BYREF
  __int64 *v23; // [rsp+78h] [rbp+38h] BYREF
  __int64 **v24; // [rsp+88h] [rbp+48h] BYREF

  v3 = (__int64 **)((char *)this + 56);
  if ( a2 )
    v7 = (struct CD3DSurface *)((char *)a2 + 24);
  else
    v7 = 0LL;
  v22 = v7;
  std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::find(
    v3,
    &v23,
    &v22);
  if ( v23 == *v3 )
  {
    SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(this);
    v22 = 0LL;
    v9 = (*(__int64 (__fastcall **)(struct ISpectreRenderer *, _QWORD, struct ISpectreRenderTarget **))(*(_QWORD *)SpectreRenderer + 96LL))(
           SpectreRenderer,
           *((_QWORD *)a2 + 16),
           &v22);
    v11 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x107u, 0LL);
    }
    else
    {
      v12 = (__int64 *)((char *)a2 + 24);
      v13 = (*(__int64 (__fastcall **)(__int64 *, CSceneResourceManager *))(*v12 + 24))(v12, this);
      v11 = v13;
      if ( v13 >= 0 )
      {
        v16 = *v3;
        v17 = v22;
        v18 = v16;
        v22 = 0LL;
        v23 = v12;
        v19 = v16[1];
        *a3 = v17;
        if ( !*(_BYTE *)(v19 + 25) )
        {
          do
          {
            if ( *(_QWORD *)(v19 + 32) >= (unsigned __int64)v12 )
            {
              v16 = (__int64 *)v19;
              v19 = *(_QWORD *)v19;
            }
            else
            {
              v19 = *(_QWORD *)(v19 + 16);
            }
          }
          while ( !*(_BYTE *)(v19 + 25) );
          v18 = *v3;
        }
        if ( v16 == v18 || (unsigned __int64)v12 < v16[4] )
        {
          v24 = &v23;
          v16 = (__int64 *)*std::_Tree<std::_Tmap_traits<IDeviceResource *,ISpectreRenderTarget *,std::less<IDeviceResource *>,std::allocator<std::pair<IDeviceResource * const,ISpectreRenderTarget *>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<IDeviceResource * const &>,std::tuple<>>(
                              (__int64 *)v3,
                              &v21,
                              v16,
                              v15,
                              &v24);
        }
        v16[5] = (__int64)v17;
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v22);
        return 0;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x109u, 0LL);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v22);
    return v11;
  }
  *a3 = (struct ISpectreRenderTarget *)v23[5];
  return 0;
}
