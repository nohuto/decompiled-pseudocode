/*
 * XREFs of ?SetMultiplaneOverlayPresentInfo@CDWMSwapChain@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PEBXIPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x18005FE50
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::SetMultiplaneOverlayPresentInfo(
        CDWMSwapChain *this,
        char a2,
        unsigned int a3,
        const void *a4,
        unsigned int a5,
        struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a6)
{
  unsigned int v10; // ebx
  unsigned int i; // esi
  void *v12; // rcx
  __int64 v14; // rcx
  LPVOID v15; // rax
  unsigned int v16; // ecx
  unsigned int j; // esi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx

  v10 = 0;
  (*(void (__fastcall **)(CDWMSwapChain *, _QWORD, _QWORD))(*(_QWORD *)this + 120LL))(this, 0LL, 0LL);
  for ( i = 0; i < *((_DWORD *)this + 135); ++i )
  {
    v14 = *(_QWORD *)(136LL * i + *((_QWORD *)this + 68) + 8);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v12 = (void *)*((_QWORD *)this + 68);
  if ( v12 )
  {
    WPF::ProcessHeapImpl::Free(v12);
    *((_QWORD *)this + 68) = 0LL;
  }
  *((_QWORD *)this + 68) = 0LL;
  *((_DWORD *)this + 135) = 0;
  *((_BYTE *)this + 576) = 0;
  if ( a2 )
  {
    (*(void (__fastcall **)(CDWMSwapChain *, _QWORD, const void *))(*(_QWORD *)this + 120LL))(this, a3, a4);
    v15 = operator new(saturated_mul(a5, 0x88uLL));
    *((_QWORD *)this + 68) = v15;
    if ( v15 )
    {
      *((_DWORD *)this + 135) = a5;
      for ( j = 0; j < *((_DWORD *)this + 135); ++j )
      {
        v18 = 136LL * j;
        v19 = v18 + *((_QWORD *)this + 68);
        *(_OWORD *)v19 = *(_OWORD *)((char *)a6 + v18);
        *(_OWORD *)(v19 + 16) = *(_OWORD *)((char *)a6 + v18 + 16);
        *(_OWORD *)(v19 + 32) = *(_OWORD *)((char *)a6 + v18 + 32);
        *(_OWORD *)(v19 + 48) = *(_OWORD *)((char *)a6 + v18 + 48);
        *(_OWORD *)(v19 + 64) = *(_OWORD *)((char *)a6 + v18 + 64);
        *(_OWORD *)(v19 + 80) = *(_OWORD *)((char *)a6 + v18 + 80);
        *(_OWORD *)(v19 + 96) = *(_OWORD *)((char *)a6 + v18 + 96);
        *(_OWORD *)(v19 + 112) = *(_OWORD *)((char *)a6 + v18 + 112);
        *(_QWORD *)(v19 + 128) = *(_QWORD *)((char *)a6 + v18 + 128);
        v20 = *(_QWORD *)(*((_QWORD *)this + 68) + v18 + 8);
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
      }
      if ( *((_DWORD *)this + 145) )
        *((_BYTE *)this + 576) = 1;
    }
    else
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024882, 0x43Bu);
    }
  }
  return v10;
}
