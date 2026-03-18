/*
 * XREFs of ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x1800D6B04
 * Callers:
 *     ?Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x1800D60A8 (-Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJXZ @ 0x1800D6178 (-GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?CheckD3D11Caps@CD3DDeviceLevel1@@AEAAJXZ @ 0x1800D6348 (-CheckD3D11Caps@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?QueryWarpExtension@CD3DDeviceLevel1@@AEAAXXZ @ 0x1800D644C (-QueryWarpExtension@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?Initialize@CDirect3DCaps@@QEAAJU_LUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@@Z @ 0x1800D64C4 (-Initialize@CDirect3DCaps@@QEAAJU_LUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@@Z.c)
 *     ?IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z @ 0x1800D6608 (-IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z.c)
 *     ?CreateSharedHandleFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAXW4D3D11_FENCE_FLAG@@@Z @ 0x1800D66A8 (-CreateSharedHandleFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAXW.c)
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x1800D6748 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 *     ?CreateRenderingResources@CDrawListBatchManager@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x1800D6D60 (-CreateRenderingResources@CDrawListBatchManager@@IEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x1800D960C (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::Init(
        CD3DDeviceLevel1 *this,
        struct ID3D11Device1 *a2,
        int a3,
        struct CDXGIAdapterLimited *a4)
{
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  char v11; // al
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rcx
  char v19; // bl
  const struct CResourceTag *v20; // rdx
  struct ID3D11Fence *v21; // r8
  int SharedHandleFence; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  int Shaders; // eax
  __int64 v27; // rcx
  __int64 result; // rax
  __int64 v29; // rcx
  __int64 (__fastcall ***v30)(_QWORD, GUID *, char *); // [rsp+50h] [rbp+8h] BYREF

  *((_QWORD *)this + 89) = *((_QWORD *)a4 + 42);
  if ( *((struct CDXGIAdapterLimited **)this + 87) != a4 )
  {
    (**(void (__fastcall ***)(struct CDXGIAdapterLimited *))a4)(a4);
    v8 = *((_QWORD *)this + 87);
    *((_QWORD *)this + 87) = a4;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  v9 = CDirect3DCaps::Initialize((CD3DDeviceLevel1 *)((char *)this + 720), *(struct _LUID *)((char *)a4 + 336), a2, a3);
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1EDu);
    return 2291662989LL;
  }
  v11 = *((_BYTE *)this + 775);
  if ( *((_BYTE *)this + 774) && v11 )
    *((_DWORD *)this + 196) = 4;
  else
    *((_DWORD *)this + 196) = v11 != 0 ? 5 : 2;
  *((_QWORD *)this + 118) = this;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 74);
  v12 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, char *))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_fef19e0a_40c0_472b_ae40_59ef97af3529,
          (char *)this + 592);
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x213u);
    return 2291662989LL;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 79);
  v14 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, char *))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_8ffde202_a0e7_45df_9e01_e837801b5ea0,
          (char *)this + 632);
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x21Au);
    return 2291662989LL;
  }
  v30 = 0LL;
  v16 = *((_QWORD *)this + 79);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v30);
  (*(void (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(*(_QWORD *)v16 + 320LL))(
    v16,
    &v30);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 80);
  v17 = (**v30)(v30, &GUID_917600da_f58c_4c33_98d8_3e15b390fa24, (char *)this + 640);
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x21Fu);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v30);
    return 2291662989LL;
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v30);
  CD3DDeviceLevel1::GatherSupportedTextureFormats(this);
  CD3DDeviceLevel1::CheckD3D11Caps(this);
  if ( *((int *)this + 185) >= 40960 )
    CD3DDeviceLevel1::QueryWarpExtension(this);
  *((_BYTE *)this + 628) = CCommonRegistryData::IsShaderLinkingBlacklistedGpu(
                             *(_DWORD *)(*((_QWORD *)this + 87) + 296LL),
                             *(_DWORD *)(*((_QWORD *)this + 87) + 300LL));
  v19 = *(_BYTE *)(*((_QWORD *)this + 87) + 344LL);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 76);
  SharedHandleFence = CD3DDeviceLevel1::CreateSharedHandleFence(
                        this,
                        v20,
                        v21,
                        (struct ID3D11Fence **)this + 76,
                        (void **)this + 75,
                        v19 == 0 ? D3D11_FENCE_FLAG_NON_MONITORED : D3D11_FENCE_FLAG_NONE);
  if ( SharedHandleFence < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, SharedHandleFence, 0x23Fu);
    return 2291662989LL;
  }
  v24 = CD2DContext::InitializeD2D(this, *((struct IDXGIDeviceDWM **)this + 74));
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x244u);
    return 2291662989LL;
  }
  Shaders = CD3DDeviceLevel1::GenerateShaders(this);
  if ( Shaders < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, Shaders, 0x246u);
    return 2291662989LL;
  }
  result = CDrawListBatchManager::CreateRenderingResources((CD3DDeviceLevel1 *)((char *)this + 8), this);
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, result, 0x248u);
    return 2291662989LL;
  }
  return result;
}
