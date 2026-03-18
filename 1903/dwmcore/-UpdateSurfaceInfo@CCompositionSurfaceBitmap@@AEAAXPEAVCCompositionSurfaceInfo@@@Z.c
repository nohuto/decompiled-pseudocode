/*
 * XREFs of ?UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x18002A43C
 * Callers:
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x18002A360 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURF.c)
 *     ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x1801C7FD0 (-Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@PEAVICompositionSurfaceInfoListener@@V?$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18002A2AC (-clear_region@-$vector_facade@PEAVICompositionSurfaceInfoListener@@V-$buffer_impl@PEAVICompositi.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A8A0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x18002AA90 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVICompositionSurfaceInfoListener@@V?$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVICompositionSurfaceInfoListener@@_K0@Z @ 0x18002AB90 (-reserve_region@-$vector_facade@PEAVICompositionSurfaceInfoListener@@V-$buffer_impl@PEAVIComposi.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18002B3C0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurfaceBitmap::UpdateSurfaceInfo(
        CCompositionSurfaceBitmap *this,
        struct CCompositionSurfaceInfo *a2)
{
  _QWORD *v3; // rsi
  struct CCompositionSurfaceInfo *v4; // rdx
  char v5; // al
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 *v9; // r9
  _QWORD *v10; // rax
  char *v11; // r10
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx
  _QWORD *v14; // r8

  v3 = (_QWORD *)((char *)this + 88);
  v4 = (struct CCompositionSurfaceInfo *)*((_QWORD *)this + 11);
  v5 = 0;
  if ( v4 != a2 )
  {
    if ( v4 )
    {
      v9 = (__int64 *)((char *)v4 + 48);
      v10 = (_QWORD *)*((_QWORD *)v4 + 6);
      v11 = (char *)this + 72;
      v12 = (_QWORD *)*((_QWORD *)v4 + 7);
      while ( v10 != v12 && (char *)*v10 != v11 )
        ++v10;
      v13 = v10;
      if ( v10 != v12 )
      {
        while ( ++v10 != v12 )
        {
          if ( (char *)*v10 != v11 )
            *v13++ = *v10;
        }
      }
      v14 = (_QWORD *)v9[1];
      if ( v13 != v14 )
        detail::vector_facade<ICompositionSurfaceInfoListener *,detail::buffer_impl<ICompositionSurfaceInfoListener *,1,1,detail::liberal_expansion_policy>>::clear_region(
          v9,
          ((__int64)v13 - *v9) >> 3,
          v14 - v13);
      ReleaseInterface<IBitmapLock>(v3);
      v5 = 1;
    }
    if ( a2 )
    {
      *(_QWORD *)detail::vector_facade<ICompositionSurfaceInfoListener *,detail::buffer_impl<ICompositionSurfaceInfoListener *,1,1,detail::liberal_expansion_policy>>::reserve_region(
                   (char *)a2 + 48,
                   (__int64)(*((_QWORD *)a2 + 7) - *((_QWORD *)a2 + 6)) >> 3) = (char *)this + 72;
      v7 = *((_QWORD *)this + 6);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 40);
        if ( v8 )
          (*(void (__fastcall **)(struct CCompositionSurfaceInfo *, _QWORD))(*(_QWORD *)a2 + 304LL))(
            a2,
            *(unsigned int *)(v8 + 128));
      }
      *v3 = a2;
      (*(void (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)a2 + 8LL))(a2);
      v5 = 1;
    }
    if ( v5 )
    {
      CCompositionSurfaceBitmap::EnsureBitmapRealization(this, 1);
      CResource::NotifyOnChanged(this, 0LL, 0LL);
    }
  }
}
