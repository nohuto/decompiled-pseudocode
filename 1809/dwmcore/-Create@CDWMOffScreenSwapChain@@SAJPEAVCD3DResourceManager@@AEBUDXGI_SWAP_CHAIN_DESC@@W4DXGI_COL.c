/*
 * XREFs of ?Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800E8258
 * Callers:
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x18007C95C (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U-$TM.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180016D4C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x180083E14 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x180095660 (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1WarpExtension_EndCreateSharedResourceHelper@@QEAA@XZ @ 0x1800E8444 (--1WarpExtension_EndCreateSharedResourceHelper@@QEAA@XZ.c)
 *     ?InitForGdiBlt@CDWMOffScreenSwapChain@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@PEBVCDisplay@@@Z @ 0x1800E8470 (-InitForGdiBlt@CDWMOffScreenSwapChain@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@PEBVCDisplay@@@Z.c)
 *     ??0CDWMOffScreenSwapChain@@AEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@PEAUID3D11Texture2D@@PEAX@Z @ 0x1800E8698 (--0CDWMOffScreenSwapChain@@AEAA@PEAVCD3DDeviceLevel1@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPA.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::Create(
        struct CD3DResourceManager *a1,
        const struct DXGI_SWAP_CHAIN_DESC *a2,
        struct D3D11_SUBRESOURCE_DATA *a3,
        const struct CDisplay *a4,
        struct CDWMOffScreenSwapChain **a5)
{
  HANDLE v7; // r14
  UINT Width; // eax
  char v9; // r15
  CDWMOffScreenSwapChain *v10; // rdi
  __int64 v11; // rcx
  __int64 *v12; // rsi
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  CDWMOffScreenSwapChain *v16; // rcx
  CDWMOffScreenSwapChain *v17; // rax
  __int64 v18; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // [rsp+20h] [rbp-E0h]
  enum DXGI_COLOR_SPACE_TYPE v23; // [rsp+30h] [rbp-D0h]
  struct ID3D11Texture2D *v24; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v25; // [rsp+40h] [rbp-C0h] BYREF
  struct CDisplay *v26; // [rsp+50h] [rbp-B0h]
  struct CDWMOffScreenSwapChain **v27; // [rsp+58h] [rbp-A8h]
  int v28; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+68h] [rbp-98h]
  _DWORD v30[5]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v31; // [rsp+94h] [rbp-6Ch]
  int v32; // [rsp+9Ch] [rbp-64h]
  __int64 v33; // [rsp+A0h] [rbp-60h]
  int v34; // [rsp+A8h] [rbp-58h]
  __int128 v35; // [rsp+B0h] [rbp-50h]
  WCHAR Name[64]; // [rsp+C0h] [rbp-40h] BYREF
  void *retaddr; // [rsp+198h] [rbp+98h]

  v27 = a5;
  DWORD2(v25) = 23;
  v32 = 0;
  *a5 = 0LL;
  v7 = 0LL;
  Width = a2->BufferDesc.Width;
  v9 = 1;
  *(_QWORD *)&v25 = "DWM Offscreen SwapChain";
  v10 = 0LL;
  v11 = *((_QWORD *)a1 + 10);
  v30[0] = Width;
  v30[1] = a2->BufferDesc.Height;
  v30[4] = a2->BufferDesc.Format;
  v35 = v25;
  v30[2] = 1;
  v30[3] = 1;
  v31 = 1LL;
  v33 = 40LL;
  v12 = *(__int64 **)(v11 + 616);
  v26 = a4;
  v23 = (int)a3;
  v24 = 0LL;
  BYTE8(v25) = 0;
  *(_QWORD *)&v25 = v12;
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64 *))(*v12 + 8))(v12);
    v11 = *((_QWORD *)a1 + 10);
  }
  if ( (*(_BYTE *)(v11 + 624) & 4) != 0 )
  {
    v20 = *v12;
    v29 = 0LL;
    v28 = 2;
    v13 = (*(__int64 (__fastcall **)(__int64 *, int *))(v20 + 24))(v12, &v28);
    v15 = v13;
    if ( v13 < 0 )
    {
      v22 = 169;
      goto LABEL_30;
    }
    v11 = *((_QWORD *)a1 + 10);
    BYTE8(v25) = 1;
    v34 = 2;
  }
  else
  {
    v34 = 0;
    v9 = 0;
  }
  v13 = CD3DDeviceLevel1::CreateTexture((CD3DDeviceLevel1 *)v11, (const struct DWM_TEXTURE2D_DESC *)v30, a3, &v24);
  v15 = v13;
  if ( v13 < 0 )
  {
    v22 = 180;
    goto LABEL_30;
  }
  if ( v9 )
  {
    v21 = *v12;
    v28 = 3;
    v13 = (*(__int64 (__fastcall **)(__int64 *, int *))(v21 + 24))(v12, &v28);
    v15 = v13;
    if ( v13 < 0 )
    {
      v22 = 190;
      goto LABEL_30;
    }
    BYTE8(v25) = 0;
    v13 = StringCbPrintfW(Name, 0x80uLL, L"Local\\WarpResource_0x%I64x", v29);
    v15 = v13;
    if ( v13 < 0 )
    {
      v22 = 196;
      goto LABEL_30;
    }
    v7 = OpenFileMappingW(0xF001Fu, 0, Name);
  }
  v16 = (CDWMOffScreenSwapChain *)WPF::ProcessHeapImpl::AllocClear(0x230uLL);
  if ( !v16 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v17 = CDWMOffScreenSwapChain::CDWMOffScreenSwapChain(v16, *((struct CD3DDeviceLevel1 **)a1 + 10), a2, v23, v24, v7);
  v10 = v17;
  if ( !v17 )
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024882, 0xD5u);
    goto LABEL_12;
  }
  (**(void (__fastcall ***)(CDWMOffScreenSwapChain *))v17)(v17);
  v7 = 0LL;
  v13 = (*(__int64 (__fastcall **)(CDWMOffScreenSwapChain *, struct CD3DResourceManager *))(*(_QWORD *)v10 + 288LL))(
          v10,
          a1);
  v15 = v13;
  if ( v13 < 0 )
  {
    v22 = 221;
  }
  else
  {
    v13 = CDWMOffScreenSwapChain::InitForGdiBlt(v10, a2, v26);
    v15 = v13;
    if ( v13 >= 0 )
    {
      *v27 = v10;
      v10 = 0LL;
      goto LABEL_12;
    }
    v22 = 222;
  }
LABEL_30:
  MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, v22);
LABEL_12:
  ReleaseInterface<IBitmapLock>((__int64 *)&v24);
  if ( v10 )
    (*(void (__fastcall **)(CDWMOffScreenSwapChain *))(*(_QWORD *)v10 + 8LL))(v10);
  if ( v7 )
    CloseHandle(v7);
  WarpExtension_EndCreateSharedResourceHelper::~WarpExtension_EndCreateSharedResourceHelper((WarpExtension_EndCreateSharedResourceHelper *)&v25);
  return v15;
}
