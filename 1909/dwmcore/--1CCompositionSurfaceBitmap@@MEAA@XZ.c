/*
 * XREFs of ??1CCompositionSurfaceBitmap@@MEAA@XZ @ 0x1800AAF80
 * Callers:
 *     ??_GCCompositionSurfaceBitmap@@MEAAPEAXI@Z @ 0x1800AAF40 (--_GCCompositionSurfaceBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800207E8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ?clear_region@?$vector_facade@PEAVICompositionSurfaceInfoListener@@V?$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800AB0FC (-clear_region@-$vector_facade@PEAVICompositionSurfaceInfoListener@@V-$buffer_impl@PEAVICompositi.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?RemoveSource@CWetInkManager@@QEAAXPEAVISuperWetSource@@@Z @ 0x180250514 (-RemoveSource@CWetInkManager@@QEAAXPEAVISuperWetSource@@@Z.c)
 */

void __fastcall CCompositionSurfaceBitmap::~CCompositionSurfaceBitmap(CCompositionSurfaceBitmap *this)
{
  char *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rax
  _QWORD *v5; // r9
  _QWORD *v6; // rcx
  _QWORD *i; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // r8
  __int64 *v10; // rdi
  struct ISuperWetSource *v11; // rdx

  *(_QWORD *)this = &CCompositionSurfaceBitmap::`vftable'{for `CContent'};
  v2 = (char *)this + 72;
  *((_QWORD *)this + 7) = &CCompositionSurfaceBitmap::`vftable'{for `ISwapChainContent'};
  *((_QWORD *)this + 8) = &CCompositionSurfaceBitmap::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 9) = &CCompositionSurfaceBitmap::`vftable'{for `ICompositionSurfaceInfoListener'};
  *((_QWORD *)this + 10) = &CCompositionSurfaceBitmap::`vftable'{for `IDirtyRectSource'};
  if ( *((_BYTE *)this + 156) )
    --*(_DWORD *)(*((_QWORD *)this + 2) + 284LL);
  if ( *((_BYTE *)this + 157) )
    --*(_DWORD *)(*((_QWORD *)this + 2) + 280LL);
  v3 = *((_QWORD *)this + 12);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 11);
  if ( v4 )
  {
    v5 = (_QWORD *)(v4 + 48);
    v6 = *(_QWORD **)(v4 + 56);
    for ( i = *(_QWORD **)(v4 + 48); i != v6 && (char *)*i != v2; ++i )
      ;
    v8 = i;
    if ( i != v6 )
    {
      while ( ++i != v6 )
      {
        if ( (char *)*i != v2 )
          *v8++ = *i;
      }
    }
    v9 = (_QWORD *)v5[1];
    if ( v8 != v9 )
      detail::vector_facade<ICompositionSurfaceInfoListener *,detail::buffer_impl<ICompositionSurfaceInfoListener *,1,1,detail::liberal_expansion_policy>>::clear_region(
        v5,
        ((__int64)v8 - *v5) >> 3,
        v9 - v8);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 16LL))(*((_QWORD *)this + 11));
  }
  v10 = (__int64 *)*((_QWORD *)this + 18);
  if ( v10 )
  {
    v11 = (struct ISuperWetSource *)*((_QWORD *)this + 18);
    *v10 = (__int64)&CRemoteSuperWetSource::`vftable';
    CWetInkManager::RemoveSource(*(CWetInkManager **)(*(_QWORD *)(v10[2] + 16) + 104LL), v11);
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v10 + 1);
    operator delete(v10);
  }
  CResource::~CResource(this);
}
