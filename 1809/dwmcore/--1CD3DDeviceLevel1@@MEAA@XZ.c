/*
 * XREFs of ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x1800E92D4
 * Callers:
 *     ??_ECD3DDeviceLevel1@@MEAAPEAXI@Z @ 0x1800E8F90 (--_ECD3DDeviceLevel1@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ @ 0x18005F350 (-ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800C2AD8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x1800E8FD0 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x1800E9210 (-ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ.c)
 *     ??_GCSurfaceShaderComposer@@QEAAPEAXI@Z @ 0x1800E9264 (--_GCSurfaceShaderComposer@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??_G?$CAsyncTask@UD3D12Resources@CD3DDeviceLevel1@@@@QEAAPEAXI@Z @ 0x1801FB1C0 (--_G-$CAsyncTask@UD3D12Resources@CD3DDeviceLevel1@@@@QEAAPEAXI@Z.c)
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x180205CF0 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 */

void __fastcall CD3DDeviceLevel1::~CD3DDeviceLevel1(CD3DDeviceLevel1 *this)
{
  char *v2; // rcx
  __int64 v3; // rcx
  CSurfaceShaderComposer *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  int v8; // edi
  void *v9; // rcx
  void *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  CAtlasTexture **v16; // rdi
  int v17; // edi
  CAtlasTexture **v18; // rbp
  CAtlasTexture *v19; // rsi
  CAtlasTexture *v20; // rcx
  void *v21; // rcx

  *(_QWORD *)this = &CD3DDeviceLevel1::`vftable'{for `CD2DContext'};
  *((_QWORD *)this + 62) = &CD3DDeviceLevel1::`vftable'{for `CMILPoolResource'};
  CD3DDeviceLevel1::ProcessUnpinResources(this);
  CD3DResourceManager::DestroyAllResources((union _SLIST_HEADER *)this + 54);
  CRenderTargetBitmapCache::ReleaseRenderTargetBitmaps((CD3DDeviceLevel1 *)((char *)this + 520));
  v2 = (char *)*((_QWORD *)this + 75);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 75) = 0LL;
  }
  v3 = *((_QWORD *)this + 80);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 888LL))(v3);
  `vector destructor iterator'(
    (char *)this + 1768,
    8LL,
    4LL,
    (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
  `vector destructor iterator'(
    (char *)this + 1760,
    8LL,
    1LL,
    (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
  `vector destructor iterator'(
    (char *)this + 1376,
    8LL,
    48LL,
    (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
  `vector destructor iterator'(
    (char *)this + 1184,
    8LL,
    24LL,
    (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
  `vector destructor iterator'(
    (char *)this + 1152,
    8LL,
    4LL,
    (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
  v4 = (CSurfaceShaderComposer *)*((_QWORD *)this + 143);
  if ( v4 )
    CSurfaceShaderComposer::`scalar deleting destructor'(v4);
  v5 = (void *)*((_QWORD *)this + 140);
  if ( v5 )
  {
    v17 = 0;
    if ( *((int *)this + 284) > 0 )
    {
      do
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)(*((_QWORD *)this + 141) + 8LL * v17++));
      while ( v17 < *((_DWORD *)this + 284) );
      v5 = (void *)*((_QWORD *)this + 140);
    }
    WPF::ProcessHeapImpl::Free(v5);
    *((_QWORD *)this + 140) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 141);
  if ( v6 )
  {
    WPF::ProcessHeapImpl::Free(v6);
    *((_QWORD *)this + 141) = 0LL;
  }
  *((_DWORD *)this + 284) = 0;
  v7 = (void *)*((_QWORD *)this + 137);
  if ( v7 )
  {
    v8 = 0;
    if ( *((int *)this + 278) > 0 )
    {
      do
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)(*((_QWORD *)this + 138) + 16LL * v8++));
      while ( v8 < *((_DWORD *)this + 278) );
      v7 = (void *)*((_QWORD *)this + 137);
    }
    WPF::ProcessHeapImpl::Free(v7);
    *((_QWORD *)this + 137) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 138);
  if ( v9 )
  {
    WPF::ProcessHeapImpl::Free(v9);
    *((_QWORD *)this + 138) = 0LL;
  }
  *((_DWORD *)this + 278) = 0;
  `vector destructor iterator'(
    (char *)this + 1032,
    8LL,
    8LL,
    (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 120);
  *((_QWORD *)this + 108) = &CD3DResourceManager::`vftable';
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 105);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 104);
  v10 = (void *)*((_QWORD *)this + 88);
  if ( v10 )
    CAsyncTask<CD3DDeviceLevel1::D3D12Resources>::`scalar deleting destructor'(v10);
  v11 = *((_QWORD *)this + 87);
  if ( v11 )
  {
    *((_QWORD *)this + 87) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  }
  v12 = *((_QWORD *)this + 84);
  if ( v12 )
  {
    *((_QWORD *)this + 84) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = *((_QWORD *)this + 83);
  if ( v13 )
  {
    *((_QWORD *)this + 83) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = *((_QWORD *)this + 82);
  if ( v14 )
  {
    *((_QWORD *)this + 82) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *((_QWORD *)this + 81);
  if ( v15 )
  {
    *((_QWORD *)this + 81) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 80);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 79);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 77);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 76);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 74);
  v16 = (CAtlasTexture **)*((_QWORD *)this + 71);
  if ( v16 )
  {
    v18 = (CAtlasTexture **)*((_QWORD *)this + 72);
    if ( v16 != v18 )
    {
      do
      {
        v19 = *v16;
        if ( *v16 )
        {
          v20 = *v16;
          *(_QWORD *)v19 = &CAtlasTexture::`vftable';
          CAtlasTexture::DestroyResources(v20);
          v21 = (void *)*((_QWORD *)v19 + 2);
          if ( v21 )
            WPF::ProcessHeapImpl::Free(v21);
          Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)v19 + 1);
          WPF::ProcessHeapImpl::Free(v19);
        }
        ++v16;
      }
      while ( v16 != v18 );
      v16 = (CAtlasTexture **)*((_QWORD *)this + 71);
    }
    std::_Deallocate<16,0>(v16, (*((_QWORD *)this + 73) - (_QWORD)v16) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 71) = 0LL;
    *((_QWORD *)this + 72) = 0LL;
    *((_QWORD *)this + 73) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 65);
  *((_QWORD *)this + 62) = &CMILPoolResource::`vftable';
  CD2DContext::~CD2DContext(this);
}
