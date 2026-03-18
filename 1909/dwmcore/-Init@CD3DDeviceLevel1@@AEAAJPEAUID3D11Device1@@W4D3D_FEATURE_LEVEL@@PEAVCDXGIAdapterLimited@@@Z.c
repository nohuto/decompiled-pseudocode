/*
 * XREFs of ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x18002DEEC
 * Callers:
 *     ?Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x18002D3CC (-Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJXZ @ 0x18002D48C (-GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?CheckD3D11Caps@CD3DDeviceLevel1@@AEAAJXZ @ 0x18002D65C (-CheckD3D11Caps@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?Initialize@CDirect3DCaps@@QEAAJU_LUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@@Z @ 0x18002D76C (-Initialize@CDirect3DCaps@@QEAAJU_LUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@@Z.c)
 *     ?QueryWarpExtension@CD3DDeviceLevel1@@AEAAXXZ @ 0x18002D8FC (-QueryWarpExtension@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z @ 0x18002D990 (-IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z.c)
 *     ?CreateSharedHandleFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAXW4D3D11_FENCE_FLAG@@@Z @ 0x18002DA30 (-CreateSharedHandleFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAXW.c)
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x18002DAD0 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateRenderingResources@CDrawListBatchManager@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x18002E1D0 (-CreateRenderingResources@CDrawListBatchManager@@IEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x180030490 (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0pqnz @ 0x18015D4BC (McTemplateU0pqnz.c)
 */

__int64 __fastcall CD3DDeviceLevel1::Init(
        CD3DDeviceLevel1 *this,
        struct ID3D11Device1 *a2,
        int a3,
        struct CDXGIAdapterLimited *a4)
{
  CD3DDeviceLevel1 *v7; // rbp
  int v8; // eax
  unsigned int v9; // ecx
  char v10; // al
  HRESULT (__stdcall *QueryInterface)(ID3D11Device1 *, const IID *const, void **); // rbx
  int v12; // eax
  unsigned int v13; // ecx
  HRESULT (__stdcall *v14)(ID3D11Device1 *, const IID *const, void **); // rbx
  int v15; // eax
  unsigned int v16; // ecx
  HRESULT (__stdcall *v17)(ID3D11Device1 *, const IID *const, void **); // rbx
  int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // rdi
  void (__fastcall *v21)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, char *)); // rbx
  __int64 (__fastcall ***v22)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v23)(_QWORD, GUID *, char *); // rsi
  int v24; // eax
  unsigned int v25; // ecx
  char v26; // bl
  const struct CResourceTag *v27; // rdx
  struct ID3D11Fence *v28; // r8
  int SharedHandleFence; // eax
  unsigned int v30; // ecx
  int v31; // eax
  unsigned int v32; // ecx
  int Shaders; // eax
  unsigned int v34; // ecx
  int RenderingResources; // eax
  unsigned int v36; // ecx
  unsigned int v37; // ebx
  __int64 (__fastcall ***v39)(_QWORD, GUID *, char *); // [rsp+70h] [rbp+8h] BYREF
  __int64 v40; // [rsp+88h] [rbp+20h] BYREF

  v40 = 0LL;
  *((_QWORD *)this + 89) = *((_QWORD *)a4 + 42);
  v7 = this;
  if ( *((struct CDXGIAdapterLimited **)this + 87) != a4 )
  {
    (**(void (__fastcall ***)(struct CDXGIAdapterLimited *))a4)(a4);
    this = (CD3DDeviceLevel1 *)*((_QWORD *)v7 + 87);
    *((_QWORD *)v7 + 87) = a4;
    if ( this )
      (*(void (__fastcall **)(CD3DDeviceLevel1 *))(*(_QWORD *)this + 8LL))(this);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0pqnz((_DWORD)this, (_DWORD)a2, (_DWORD)v7, a3);
  v8 = CDirect3DCaps::Initialize((CD3DDeviceLevel1 *)((char *)v7 + 720), *(struct _LUID *)((char *)a4 + 336), a2, a3);
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x1D6u, 0LL);
LABEL_33:
    v37 = -2003304307;
    goto LABEL_21;
  }
  v10 = *((_BYTE *)v7 + 775);
  if ( *((_BYTE *)v7 + 774) && v10 )
    *((_DWORD *)v7 + 205) = 4;
  else
    *((_DWORD *)v7 + 205) = v10 != 0 ? 5 : 2;
  *((_QWORD *)v7 + 122) = v7;
  QueryInterface = a2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v7 + 74);
  v12 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, char *))QueryInterface)(
          a2,
          &GUID_fef19e0a_40c0_472b_ae40_59ef97af3529,
          (char *)v7 + 592);
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1FCu, 0LL);
    goto LABEL_33;
  }
  v14 = a2->lpVtbl->QueryInterface;
  if ( v40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  v15 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, __int64 *))v14)(
          a2,
          &GUID_77db970f_6276_48ba_ba28_070143b4392c,
          &v40);
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1FEu, 0LL);
    goto LABEL_33;
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v40 + 96LL))(v40, 16LL);
  v17 = a2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v7 + 79);
  v18 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, char *))v17)(
          a2,
          &GUID_8ffde202_a0e7_45df_9e01_e837801b5ea0,
          (char *)v7 + 632);
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x206u, 0LL);
    goto LABEL_33;
  }
  v20 = *((_QWORD *)v7 + 79);
  v39 = 0LL;
  v21 = *(void (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(*(_QWORD *)v20 + 320LL);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v39);
  v21(v20, &v39);
  v22 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v39;
  v23 = **v39;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v7 + 80);
  v24 = v23(v22, &GUID_917600da_f58c_4c33_98d8_3e15b390fa24, (char *)v7 + 640);
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x20Bu, 0LL);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v39);
    goto LABEL_33;
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v39);
  CD3DDeviceLevel1::GatherSupportedTextureFormats(v7);
  CD3DDeviceLevel1::CheckD3D11Caps(v7);
  if ( *((int *)v7 + 185) >= 40960 )
    CD3DDeviceLevel1::QueryWarpExtension(v7);
  *((_BYTE *)v7 + 628) = CCommonRegistryData::IsShaderLinkingBlacklistedGpu(
                           *(_DWORD *)(*((_QWORD *)v7 + 87) + 296LL),
                           *(_DWORD *)(*((_QWORD *)v7 + 87) + 300LL));
  v26 = *(_BYTE *)(*((_QWORD *)v7 + 87) + 344LL);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v7 + 76);
  SharedHandleFence = CD3DDeviceLevel1::CreateSharedHandleFence(
                        v7,
                        v27,
                        v28,
                        (struct ID3D11Fence **)v7 + 76,
                        (void **)v7 + 75,
                        v26 == 0 ? D3D11_FENCE_FLAG_NON_MONITORED : D3D11_FENCE_FLAG_NONE);
  if ( SharedHandleFence < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, SharedHandleFence, 0x22Bu, 0LL);
    goto LABEL_33;
  }
  v31 = CD2DContext::InitializeD2D(v7, *((struct IDXGIDeviceDWM **)v7 + 74));
  if ( v31 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x230u, 0LL);
    goto LABEL_33;
  }
  Shaders = CD3DDeviceLevel1::GenerateShaders(v7);
  if ( Shaders < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, Shaders, 0x232u, 0LL);
    goto LABEL_33;
  }
  RenderingResources = CDrawListBatchManager::CreateRenderingResources((CD3DDeviceLevel1 *)((char *)v7 + 8), v7);
  v37 = RenderingResources;
  if ( RenderingResources < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, RenderingResources, 0x234u, 0LL);
    goto LABEL_33;
  }
LABEL_21:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v40);
  return v37;
}
