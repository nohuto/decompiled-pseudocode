/*
 * XREFs of ?GetSpatialRenderTargetNoRef@CSpatialResourceManager@@QEAAJPEAVCD3DSurface@@PEAPEAUIDwmSpatialRenderTarget@@@Z @ 0x180156D58
 * Callers:
 *     ?DrawSpatial@CDrawingContext@@QEAAJPEAUIDwmSpatialWorld@@AEBVCMILMatrix@@@Z @ 0x1801640EC (-DrawSpatial@CDrawingContext@@QEAAJPEAUIDwmSpatialWorld@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVIDeviceResource@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@PEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@U?$less@PEAVIDeviceResource@@@std@@V?$allocator@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVIDeviceResource@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180156AC8 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAVIDeviceResource@@@2@V-$tuple@$$V@.c)
 *     ?GetSpatialCompositor@CSpatialResourceManager@@QEBAPEAUIDwmSpatialCompositor@@XZ @ 0x180156D40 (-GetSpatialCompositor@CSpatialResourceManager@@QEBAPEAUIDwmSpatialCompositor@@XZ.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@PEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@U?$less@PEAVIDeviceResource@@@std@@V?$allocator@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@@std@@@std@@@std@@@2@AEBQEAVIDeviceResource@@@Z @ 0x18015752C (-find@-$_Tree@V-$_Tmap_traits@PEAVIDeviceResource@@PEAUIDwmSpatialRenderTarget@@U-$less@PEAVIDev.c)
 */

__int64 __fastcall CSpatialResourceManager::GetSpatialRenderTargetNoRef(
        CSpatialResourceManager *this,
        struct CD3DSurface *a2,
        struct IDwmSpatialRenderTarget **a3)
{
  struct IDwmSpatialRenderTarget *v6; // rax
  __int64 *v7; // rsi
  struct IDwmSpatialCompositor *SpatialCompositor; // rax
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  char *v12; // rdi
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r9
  _QWORD *v16; // rax
  struct IDwmSpatialRenderTarget *v17; // rbx
  _QWORD *v18; // rdx
  __int64 *v19; // rcx
  __int64 v21; // [rsp+30h] [rbp-10h] BYREF
  struct IDwmSpatialRenderTarget *v22; // [rsp+70h] [rbp+30h] BYREF
  char *v23; // [rsp+78h] [rbp+38h] BYREF
  char **v24; // [rsp+88h] [rbp+48h] BYREF

  if ( a2 )
    v6 = (struct CD3DSurface *)((char *)a2 + 24);
  else
    v6 = 0LL;
  v7 = (__int64 *)((char *)this + 56);
  v22 = v6;
  std::_Tree<std::_Tmap_traits<IDeviceResource *,IDwmSpatialRenderTarget *,std::less<IDeviceResource *>,std::allocator<std::pair<IDeviceResource * const,IDwmSpatialRenderTarget *>>,0>>::find(
    (char *)this + 56,
    &v23,
    &v22);
  if ( v23 == (char *)*v7 )
  {
    SpatialCompositor = CSpatialResourceManager::GetSpatialCompositor(this);
    v22 = 0LL;
    v9 = (*(__int64 (__fastcall **)(struct IDwmSpatialCompositor *, _QWORD, struct IDwmSpatialRenderTarget **))(*(_QWORD *)SpatialCompositor + 72LL))(
           SpatialCompositor,
           *((_QWORD *)a2 + 16),
           &v22);
    v11 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xEAu);
    }
    else
    {
      v12 = (char *)a2 + 24;
      v13 = (*(__int64 (__fastcall **)(char *, CSpatialResourceManager *))(*(_QWORD *)v12 + 24LL))(v12, this);
      v11 = v13;
      if ( v13 >= 0 )
      {
        v16 = (_QWORD *)*v7;
        v17 = v22;
        v18 = v16;
        v22 = 0LL;
        v23 = v12;
        v19 = (__int64 *)v16[1];
        *a3 = v17;
        while ( !*((_BYTE *)v19 + 25) )
        {
          if ( v19[4] >= (unsigned __int64)v12 )
          {
            v16 = v19;
            v19 = (__int64 *)*v19;
          }
          else
          {
            v19 = (__int64 *)v19[2];
          }
        }
        if ( v16 == v18 || (unsigned __int64)v12 < v16[4] )
        {
          v24 = &v23;
          v16 = (_QWORD *)*std::_Tree<std::_Tmap_traits<IDeviceResource *,IDwmSpatialRenderTarget *,std::less<IDeviceResource *>,std::allocator<std::pair<IDeviceResource * const,IDwmSpatialRenderTarget *>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<IDeviceResource * const &>,std::tuple<>>(
                             v7,
                             &v21,
                             v16,
                             v15,
                             &v24);
        }
        v16[5] = v17;
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v22);
        return 0;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xECu);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v22);
    return v11;
  }
  *a3 = (struct IDwmSpatialRenderTarget *)*((_QWORD *)v23 + 5);
  return 0;
}
