/*
 * XREFs of ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x18002436C
 * Callers:
 *     ??_ECD3DDeviceLevel1@@MEAAPEAXI@Z @ 0x180024240 (--_ECD3DDeviceLevel1@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x180024280 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x180024318 (-ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ.c)
 *     ??_GCSurfaceShaderComposer@@QEAAPEAXI@Z @ 0x180024774 (--_GCSurfaceShaderComposer@@QEAAPEAXI@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18008877C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800D9548 (-_Tidy@-$vector@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@std@@V-$a.c)
 *     ?ProcessPendingUnpin@CD3DDeviceLevel1@@QEAAJ_N@Z @ 0x1800EA180 (-ProcessPendingUnpin@CD3DDeviceLevel1@@QEAAJ_N@Z.c)
 *     ?clear_region@?$vector_facade@VCUnpinResource@CD3DDeviceLevel1@@V?$buffer_impl@VCUnpinResource@CD3DDeviceLevel1@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EA42C (-clear_region@-$vector_facade@VCUnpinResource@CD3DDeviceLevel1@@V-$buffer_impl@VCUnpinResource@C.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??_G?$CAsyncTask@UD3D12Resources@CD3DDeviceLevel1@@@@QEAAPEAXI@Z @ 0x18015BBE8 (--_G-$CAsyncTask@UD3D12Resources@CD3DDeviceLevel1@@@@QEAAPEAXI@Z.c)
 *     McTemplateU0p @ 0x18015EB38 (McTemplateU0p.c)
 */

void __fastcall CD3DDeviceLevel1::~CD3DDeviceLevel1(union _SLIST_HEADER *this)
{
  char *Region; // rcx
  ULONGLONG Alignment; // rcx
  unsigned __int64 v4; // rdx
  CSurfaceShaderComposer *v5; // rcx
  void *v6; // rcx
  int v7; // edi
  void *v8; // rcx
  void *v9; // rcx
  int v10; // edi
  void *v11; // rcx
  void *v12; // rcx
  int v13; // edi
  void *v14; // rcx
  CD3DDeviceLevel1 **v15; // rdi
  CD3DDeviceLevel1 *v16; // rcx
  void *v17; // rcx
  ULONGLONG v18; // rcx
  ULONGLONG v19; // rcx
  ULONGLONG v20; // rcx
  ULONGLONG v21; // rcx
  ULONGLONG v22; // rcx

  this->Alignment = (ULONGLONG)&CD3DDeviceLevel1::`vftable'{for `CD2DContext'};
  this[31].Alignment = (ULONGLONG)&CD3DDeviceLevel1::`vftable'{for `CMILPoolResource'};
  CD3DDeviceLevel1::ProcessPendingUnpin((CD3DDeviceLevel1 *)this, 1);
  CD3DResourceManager::DestroyAllResources(this + 56);
  CRenderTargetBitmapCache::ReleaseRenderTargetBitmaps((CRenderTargetBitmapCache *)((char *)&this[32].HeaderX64 + 8));
  Region = (char *)this[37].Region;
  if ( (unsigned __int64)(Region - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(Region);
    this[37].Region = 0LL;
  }
  Alignment = this[40].Alignment;
  if ( Alignment )
    (*(void (__fastcall **)(ULONGLONG))(*(_QWORD *)Alignment + 888LL))(Alignment);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0p(Alignment, &EVTDESC_HWDEVICE_DESTROY, this);
  `vector destructor iterator'(
    (char *)&this[120].HeaderX64 + 8,
    8uLL,
    4uLL,
    Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
  `vector destructor iterator'(
    &this[120],
    8uLL,
    1uLL,
    Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
  `vector destructor iterator'(
    &this[96],
    8uLL,
    0x30uLL,
    Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
  `vector destructor iterator'(
    &this[84],
    8uLL,
    0x18uLL,
    Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
  `vector destructor iterator'(
    &this[78],
    8uLL,
    0xCuLL,
    Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
  v5 = (CSurfaceShaderComposer *)this[77].Region;
  if ( v5 )
    CSurfaceShaderComposer::`scalar deleting destructor'(v5, v4);
  v6 = (void *)this[76].Alignment;
  if ( v6 )
  {
    v7 = 0;
    if ( SLODWORD(this[77].Alignment) > 0 )
    {
      do
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)(this[76].Region + 8LL * v7++));
      while ( v7 < SLODWORD(this[77].Alignment) );
      v6 = (void *)this[76].Alignment;
    }
    operator delete(v6);
    this[76].Alignment = 0LL;
  }
  v8 = (void *)this[76].Region;
  if ( v8 )
  {
    operator delete(v8);
    this[76].Region = 0LL;
  }
  LODWORD(this[77].Alignment) = 0;
  v9 = (void *)this[74].Region;
  if ( v9 )
  {
    v10 = 0;
    if ( *((int *)&this[75].HeaderX64 + 2) > 0 )
    {
      do
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)(this[75].Alignment + 16LL * v10++));
      while ( v10 < *((_DWORD *)&this[75].HeaderX64 + 2) );
      v9 = (void *)this[74].Region;
    }
    operator delete(v9);
    this[74].Region = 0LL;
  }
  v11 = (void *)this[75].Alignment;
  if ( v11 )
  {
    operator delete(v11);
    this[75].Alignment = 0LL;
  }
  *((_DWORD *)&this[75].HeaderX64 + 2) = 0;
  v12 = (void *)this[73].Alignment;
  if ( v12 )
  {
    v13 = 0;
    if ( SLODWORD(this[74].Alignment) > 0 )
    {
      do
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)(this[73].Region + 8LL * v13++));
      while ( v13 < SLODWORD(this[74].Alignment) );
      v12 = (void *)this[73].Alignment;
    }
    operator delete(v12);
    this[73].Alignment = 0LL;
  }
  v14 = (void *)this[73].Region;
  if ( v14 )
  {
    operator delete(v14);
    this[73].Region = 0LL;
  }
  v15 = (CD3DDeviceLevel1 **)&this[62];
  LODWORD(this[74].Alignment) = 0;
  v16 = (CD3DDeviceLevel1 *)this[62].Alignment;
  if ( (__int64)(this[62].Region - (_QWORD)v16) >> 4 )
  {
    detail::vector_facade<CD3DDeviceLevel1::CUnpinResource,detail::buffer_impl<CD3DDeviceLevel1::CUnpinResource,7,1,detail::liberal_expansion_policy>>::clear_region(
      &this[62],
      0LL);
    v16 = *v15;
  }
  *v15 = 0LL;
  if ( v16 == (CD3DDeviceLevel1 *)((char *)&this[63].HeaderX64 + 8) )
    v16 = 0LL;
  operator delete(v16, v4);
  this[56].Alignment = (ULONGLONG)&CD3DResourceManager::`vftable';
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&this[54].Region);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&this[54]);
  v17 = (void *)this[44].Alignment;
  if ( v17 )
    CAsyncTask<CD3DDeviceLevel1::D3D12Resources>::`scalar deleting destructor'(v17);
  v18 = this[43].Region;
  if ( v18 )
  {
    this[43].Region = 0LL;
    (*(void (__fastcall **)(ULONGLONG))(*(_QWORD *)v18 + 8LL))(v18);
  }
  v19 = this[42].Alignment;
  if ( v19 )
  {
    this[42].Alignment = 0LL;
    (*(void (__fastcall **)(ULONGLONG))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = this[41].Region;
  if ( v20 )
  {
    this[41].Region = 0LL;
    (*(void (__fastcall **)(ULONGLONG))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = this[41].Alignment;
  if ( v21 )
  {
    this[41].Alignment = 0LL;
    (*(void (__fastcall **)(ULONGLONG))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = this[40].Region;
  if ( v22 )
  {
    this[40].Region = 0LL;
    (*(void (__fastcall **)(ULONGLONG))(*(_QWORD *)v22 + 16LL))(v22);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&this[40]);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&this[39].Region);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&this[38].Region);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&this[38]);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&this[37]);
  std::vector<std::unique_ptr<CAtlasTexture>>::_Tidy((char *)&this[35].HeaderX64 + 8);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)&this[32].HeaderX64 + 8);
  this[31].Alignment = (ULONGLONG)&CMILPoolResource::`vftable';
  CD2DContext::~CD2DContext((CD2DContext *)this);
}
