/*
 * XREFs of ?Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800DC7D0
 * Callers:
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x1800E31CC (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U-$TM.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18002B3C0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800A6E50 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x1800B3F2C (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ??1WarpExtension_EndCreateSharedResourceHelper@@QEAA@XZ @ 0x1800DC9B8 (--1WarpExtension_EndCreateSharedResourceHelper@@QEAA@XZ.c)
 *     ?InitForGdiBlt@CDWMOffScreenSwapChain@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@PEBVCDisplay@@@Z @ 0x1800DC9E4 (-InitForGdiBlt@CDWMOffScreenSwapChain@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@PEBVCDisplay@@@Z.c)
 *     ??0CDWMOffScreenSwapChain@@AEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@PEAUID3D11Texture2D@@PEAX@Z @ 0x1800DCC10 (--0CDWMOffScreenSwapChain@@AEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPA.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::Create(
        struct CD3DResourceManager *a1,
        const struct DXGI_SWAP_CHAIN_DESC *a2,
        struct D3D11_SUBRESOURCE_DATA *a3,
        const struct CDisplay *a4,
        struct CDWMOffScreenSwapChain **a5)
{
  HANDLE v7; // rsi
  UINT Width; // eax
  CDWMOffScreenSwapChain *v9; // rdi
  char v10; // r15
  UINT Height; // eax
  __int64 v12; // rcx
  DXGI_FORMAT Format; // eax
  __int64 *v14; // r14
  signed int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // ebx
  CDWMOffScreenSwapChain *v18; // rcx
  __int64 v19; // r8
  CDWMOffScreenSwapChain *v20; // rax
  __int64 v21; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25; // [rsp+20h] [rbp-E0h]
  enum DXGI_COLOR_SPACE_TYPE v26; // [rsp+30h] [rbp-D0h]
  struct ID3D11Texture2D *v27; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v28; // [rsp+40h] [rbp-C0h] BYREF
  struct CDisplay *v29; // [rsp+50h] [rbp-B0h]
  struct CDWMOffScreenSwapChain **v30; // [rsp+58h] [rbp-A8h]
  int v31; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+68h] [rbp-98h]
  _DWORD v33[5]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v34; // [rsp+94h] [rbp-6Ch]
  int v35; // [rsp+9Ch] [rbp-64h]
  __int64 v36; // [rsp+A0h] [rbp-60h]
  int v37; // [rsp+A8h] [rbp-58h]
  __int128 v38; // [rsp+B0h] [rbp-50h]
  WCHAR Name[64]; // [rsp+C0h] [rbp-40h] BYREF
  void *retaddr; // [rsp+198h] [rbp+98h]

  v30 = a5;
  DWORD2(v28) = 23;
  v35 = 0;
  *a5 = 0LL;
  v7 = 0LL;
  Width = a2->BufferDesc.Width;
  v9 = 0LL;
  *(_QWORD *)&v28 = "DWM Offscreen SwapChain";
  v10 = 0;
  v33[0] = Width;
  Height = a2->BufferDesc.Height;
  v33[2] = 1;
  v33[3] = 1;
  v34 = 1LL;
  v12 = *((_QWORD *)a1 + 10);
  v33[1] = Height;
  Format = a2->BufferDesc.Format;
  v38 = v28;
  v33[4] = Format;
  v36 = 40LL;
  v14 = *(__int64 **)(v12 + 616);
  v29 = a4;
  v26 = (int)a3;
  v27 = 0LL;
  BYTE8(v28) = 0;
  *(_QWORD *)&v28 = v14;
  if ( v14 )
  {
    (*(void (__fastcall **)(__int64 *))(*v14 + 8))(v14);
    v12 = *((_QWORD *)a1 + 10);
  }
  if ( (*(_BYTE *)(v12 + 624) & 4) != 0 )
  {
    v23 = *v14;
    v32 = 0LL;
    v31 = 2;
    v15 = (*(__int64 (__fastcall **)(__int64 *, int *))(v23 + 24))(v14, &v31);
    v17 = v15;
    if ( v15 < 0 )
    {
      v25 = 126;
      goto LABEL_30;
    }
    v12 = *((_QWORD *)a1 + 10);
    v10 = 1;
    BYTE8(v28) = 1;
    v37 = 2;
  }
  else
  {
    v37 = 0;
  }
  v15 = CD3DDeviceLevel1::CreateTexture((CD3DDeviceLevel1 *)v12, (const struct DWM_TEXTURE2D_DESC *)v33, a3, &v27);
  v17 = v15;
  if ( v15 < 0 )
  {
    v25 = 137;
    goto LABEL_30;
  }
  if ( v10 )
  {
    v24 = *v14;
    v31 = 3;
    v15 = (*(__int64 (__fastcall **)(__int64 *, int *))(v24 + 24))(v14, &v31);
    v17 = v15;
    if ( v15 < 0 )
    {
      v25 = 147;
      goto LABEL_30;
    }
    BYTE8(v28) = 0;
    v15 = StringCbPrintfW(Name, 0x80uLL, L"Local\\WarpResource_0x%I64x", v32);
    v17 = v15;
    if ( v15 < 0 )
    {
      v25 = 153;
      goto LABEL_30;
    }
    v7 = OpenFileMappingW(0xF001Fu, 0, Name);
  }
  v18 = (CDWMOffScreenSwapChain *)DefaultHeap::AllocClear(0x230uLL);
  if ( !v18 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v19);
  v20 = CDWMOffScreenSwapChain::CDWMOffScreenSwapChain(v18, *((struct CD3DDeviceLevel1 **)a1 + 10), a2, v26, v27, v7);
  v9 = v20;
  if ( !v20 )
  {
    v17 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, 0x8007000E, 0xAAu, 0LL);
    goto LABEL_12;
  }
  (**(void (__fastcall ***)(CDWMOffScreenSwapChain *))v20)(v20);
  v7 = 0LL;
  v15 = (*(__int64 (__fastcall **)(CDWMOffScreenSwapChain *, struct CD3DResourceManager *))(*(_QWORD *)v9 + 312LL))(
          v9,
          a1);
  v17 = v15;
  if ( v15 < 0 )
  {
    v25 = 178;
  }
  else
  {
    v15 = CDWMOffScreenSwapChain::InitForGdiBlt(v9, a2, v29);
    v17 = v15;
    if ( v15 >= 0 )
    {
      *v30 = v9;
      v9 = 0LL;
      goto LABEL_12;
    }
    v25 = 179;
  }
LABEL_30:
  MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, v25, 0LL);
LABEL_12:
  ReleaseInterface<IBitmapLock>((__int64 *)&v27);
  if ( v9 )
    (*(void (__fastcall **)(CDWMOffScreenSwapChain *))(*(_QWORD *)v9 + 8LL))(v9);
  if ( v7 )
    CloseHandle(v7);
  WarpExtension_EndCreateSharedResourceHelper::~WarpExtension_EndCreateSharedResourceHelper((WarpExtension_EndCreateSharedResourceHelper *)&v28);
  return v17;
}
