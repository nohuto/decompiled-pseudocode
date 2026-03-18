/*
 * XREFs of ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x18007C95C
 * Callers:
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18007C730 (-Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializa.c)
 *     ?Init@CHDRConversionRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180209280 (-Init@CHDRConversionRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x1800376CC (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x18007D080 (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@W4DXGI_COLOR_SPACE_TYPE@@U_LUID@@I_N4PEAPEAV1@@Z @ 0x18007D1B4 (-Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@W4DXGI_COLOR_SPACE_TY.c)
 *     ?GetDXGIOutput@CDisplay@@QEBAJPEAPEAUIDXGIOutput@@@Z @ 0x18007D510 (-GetDXGIOutput@CDisplay@@QEBAJPEAPEAUIDXGIOutput@@@Z.c)
 *     ?FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z @ 0x180095748 (-FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800A8E54 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800E8258 (-Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COL.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CDWMSwapChainDDA@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@W4DXGI_COLOR_SPACE_TYPE@@U_LUID@@IPEAPEAV1@@Z @ 0x1802049E8 (-Create@CDWMSwapChainDDA@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@W4DXGI_COLOR_SPACE.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateSwapChain(
        CD3DDeviceLevel1 *this,
        struct DXGI_SWAP_CHAIN_DESC *a2,
        enum DXGI_COLOR_SPACE_TYPE a3,
        __int16 a4,
        struct _LUID *a5,
        struct CDWMSwapChainDDA *a6)
{
  int v9; // esi
  int v10; // eax
  struct IDXGIOutput *v11; // rdi
  int v12; // eax
  __int64 v13; // rsi
  int v14; // eax
  unsigned int v15; // ecx
  struct CDWMSwapChain *v16; // rsi
  unsigned int v17; // ecx
  int v18; // eax
  LONG v19; // eax
  bool v20; // al
  unsigned int v21; // edx
  unsigned int v22; // ebx
  int v24; // r9d
  BOOL Windowed; // eax
  int v26; // eax
  unsigned int v27; // ecx
  struct CDWMSwapChain *v28; // rsi
  int v29; // r9d
  int DXGIOutput; // eax
  unsigned int v31; // ecx
  struct IDXGIOutput *v32; // rbx
  int v33; // eax
  unsigned int v34; // ecx
  __int64 v35; // rdi
  int v36; // eax
  unsigned int v37; // ecx
  UINT Width; // eax
  struct IDXGISwapChainDWM1 *v39; // rdi
  int v40; // eax
  unsigned int v41; // ecx
  int v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // [rsp+20h] [rbp-B9h]
  unsigned int v45; // [rsp+20h] [rbp-B9h]
  struct IDXGISwapChainDWM1 *v46; // [rsp+40h] [rbp-99h] BYREF
  struct IDXGISwapChainDWM1 *v47; // [rsp+48h] [rbp-91h] BYREF
  __int64 v48; // [rsp+50h] [rbp-89h] BYREF
  struct CDWMSwapChain *v49; // [rsp+58h] [rbp-81h] BYREF
  struct IDXGIOutput *v50; // [rsp+60h] [rbp-79h] BYREF
  enum DXGI_COLOR_SPACE_TYPE v51; // [rsp+68h] [rbp-71h]
  struct CDWMSwapChainDDA *v52; // [rsp+70h] [rbp-69h] BYREF
  UINT v53; // [rsp+80h] [rbp-59h] BYREF
  UINT Height; // [rsp+84h] [rbp-55h]
  DXGI_FORMAT Format; // [rsp+88h] [rbp-51h]
  int v56; // [rsp+8Ch] [rbp-4Dh]
  DXGI_SAMPLE_DESC SampleDesc; // [rsp+90h] [rbp-49h]
  DXGI_USAGE BufferUsage; // [rsp+98h] [rbp-41h]
  UINT BufferCount; // [rsp+9Ch] [rbp-3Dh]
  int v60; // [rsp+A0h] [rbp-39h]
  DXGI_SWAP_EFFECT SwapEffect; // [rsp+A4h] [rbp-35h]
  int v62; // [rsp+A8h] [rbp-31h]
  UINT Flags; // [rsp+ACh] [rbp-2Dh]
  DXGI_RATIONAL RefreshRate; // [rsp+D0h] [rbp-9h] BYREF
  DXGI_MODE_SCANLINE_ORDER ScanlineOrdering; // [rsp+D8h] [rbp-1h]
  DXGI_MODE_SCALING Scaling; // [rsp+DCh] [rbp+3h]
  BOOL v67; // [rsp+E0h] [rbp+7h]

  v51 = a3;
  v52 = a6;
  *(_QWORD *)a6 = 0LL;
  v9 = *((_DWORD *)this + 212);
  v50 = 0LL;
  if ( v9 < 0 )
  {
    v44 = 1534;
    v24 = v9;
    goto LABEL_61;
  }
  if ( (a4 & 0x4000) != 0 )
  {
    v48 = 0LL;
    v46 = 0LL;
    v47 = 0LL;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v50);
    DXGIOutput = CDisplay::GetDXGIOutput((CDisplay *)a5, &v50);
    v9 = DXGIOutput;
    if ( DXGIOutput < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v31, &dword_18024C878, 1u, DXGIOutput, 0x693u);
    }
    else
    {
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v48);
      v32 = v50;
      v33 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, __int64 *))v50->lpVtbl->GetParent)(
              v50,
              &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
              &v48);
      v9 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v34, &dword_18024C878, 1u, v33, 0x695u);
      }
      else
      {
        v35 = v48;
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v47);
        v36 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IDXGISwapChainDWM1 **))(*(_QWORD *)v35 + 48LL))(
                v35,
                &GUID_1ddd77aa_9a4a_4cc8_9e55_98c196bafc8f,
                &v47);
        v9 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v37, &dword_18024C878, 1u, v36, 0x696u);
        }
        else
        {
          Width = a2->BufferDesc.Width;
          v56 = 0;
          v60 = 0;
          v39 = v47;
          v53 = Width;
          Height = a2->BufferDesc.Height;
          Format = a2->BufferDesc.Format;
          SampleDesc = a2->SampleDesc;
          BufferUsage = a2->BufferUsage;
          BufferCount = a2->BufferCount;
          SwapEffect = a2->SwapEffect;
          Flags = a2->Flags;
          v62 = 3;
          Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v46);
          v40 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM1 *, _QWORD, UINT *, struct IDXGIOutput *, struct IDXGISwapChainDWM1 **))(*(_QWORD *)v39 + 32LL))(
                  v39,
                  *((_QWORD *)this + 79),
                  &v53,
                  v32,
                  &v46);
          v9 = v40;
          if ( v40 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v41, &dword_18024C878, 1u, v40, 0x6A0u);
          }
          else
          {
            v42 = CDWMSwapChainDDA::Create(
                    (CD3DDeviceLevel1 *)((char *)this + 864),
                    v46,
                    v51,
                    a5[30],
                    a5[31].LowPart,
                    &v52);
            v9 = v42;
            if ( v42 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v43, &dword_18024C878, 1u, v42, 0x6AAu);
            else
              *(_QWORD *)a6 = v52;
          }
        }
      }
    }
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v47);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v46);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v48);
    goto LABEL_24;
  }
  if ( a5 && LOBYTE(a5[40].LowPart) )
  {
    v10 = CDWMOffScreenSwapChain::Create(
            (CD3DDeviceLevel1 *)((char *)this + 864),
            a2,
            a3,
            (const struct CDisplay *)a5,
            &v49);
    v9 = v10;
    if ( v10 >= 0 )
    {
      *(_QWORD *)a6 = v49;
      goto LABEL_24;
    }
    v44 = 1667;
    goto LABEL_29;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v50);
  v10 = CDisplay::GetDXGIOutput((CDisplay *)a5, &v50);
  v9 = v10;
  if ( v10 < 0 )
  {
    v44 = 1547;
LABEL_29:
    v24 = v10;
LABEL_61:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, &dword_18024C878, 1u, v24, v44);
    goto LABEL_24;
  }
  v46 = 0LL;
  v47 = 0LL;
  v11 = v50;
  do
  {
    v48 = 0LL;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v48);
    v12 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, __int64 *))v11->lpVtbl->GetParent)(
            v11,
            &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
            &v48);
    v9 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0, &dword_18024C878, 1u, v12, 0x613u);
      goto LABEL_47;
    }
    v13 = v48;
    v49 = 0LL;
    if ( (a4 & 0x2000) != 0 )
    {
      v53 = a2->BufferDesc.Width;
      Height = a2->BufferDesc.Height;
      Format = a2->BufferDesc.Format;
      SampleDesc = a2->SampleDesc;
      BufferUsage = a2->BufferUsage;
      BufferCount = a2->BufferCount;
      SwapEffect = a2->SwapEffect;
      Flags = a2->Flags;
      RefreshRate = a2->BufferDesc.RefreshRate;
      ScanlineOrdering = a2->BufferDesc.ScanlineOrdering;
      Scaling = a2->BufferDesc.Scaling;
      Windowed = a2->Windowed;
      v60 = 0;
      v67 = Windowed;
      v56 = 1;
      v62 = 3;
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v49);
      v26 = (*(__int64 (__fastcall **)(__int64, GUID *, struct CDWMSwapChain **))(*(_QWORD *)v13 + 48LL))(
              v13,
              &GUID_1ddd77aa_9a4a_4cc8_9e55_98c196bafc8f,
              &v49);
      v9 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v27, &dword_18024C878, 1u, v26, 0x625u);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v49);
LABEL_47:
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v48);
        goto LABEL_23;
      }
      v28 = v49;
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v46);
      v9 = (*(__int64 (__fastcall **)(struct CDWMSwapChain *, _QWORD, UINT *, DXGI_RATIONAL *, struct IDXGIOutput *, struct IDXGISwapChainDWM1 **))(*(_QWORD *)v28 + 24LL))(
             v28,
             *((_QWORD *)this + 79),
             &v53,
             &RefreshRate,
             v11,
             &v46);
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v49);
    }
    else
    {
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v49);
      v14 = (*(__int64 (__fastcall **)(__int64, GUID *, struct CDWMSwapChain **))(*(_QWORD *)v13 + 48LL))(
              v13,
              &GUID_713f394e_92ca_47e7_ab81_1159c2791e54,
              &v49);
      v9 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, &dword_18024C878, 1u, v14, 0x630u);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v49);
        goto LABEL_47;
      }
      v16 = v49;
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v46);
      v9 = (*(__int64 (__fastcall **)(struct CDWMSwapChain *, _QWORD, struct DXGI_SWAP_CHAIN_DESC *, struct IDXGIOutput *, struct IDXGISwapChainDWM1 **))(*(_QWORD *)v16 + 24LL))(
             v16,
             *((_QWORD *)this + 79),
             a2,
             v11,
             &v46);
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v49);
    }
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v48);
  }
  while ( CD3DResourceManager::FreeSomeVideoMemory((CD3DDeviceLevel1 *)((char *)this + 864), v9) );
  if ( v9 < 0 )
  {
    v45 = 1596;
    v29 = v9;
  }
  else
  {
    v18 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM1 *, UINT *))(*(_QWORD *)v46 + 80LL))(v46, &v53);
    v9 = v18;
    if ( v18 < 0 )
    {
      v45 = 1601;
    }
    else
    {
      v19 = v56;
      if ( (Format != a2->BufferDesc.RefreshRate.Numerator || v56 != a2->BufferDesc.RefreshRate.Denominator)
        && (Format || v56 != 1) )
      {
        a5[35].LowPart = Format;
        a5[35].HighPart = v19;
      }
      if ( SampleDesc.Quality != a2->BufferDesc.ScanlineOrdering )
        a5[36].HighPart = SampleDesc.Quality;
      if ( (v53 != a2->BufferDesc.Width || Height != a2->BufferDesc.Height) && (v53 || Height) )
      {
        v9 = 142213127;
        goto LABEL_23;
      }
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v47);
      v18 = (**(__int64 (__fastcall ***)(struct IDXGISwapChainDWM1 *, GUID *, struct IDXGISwapChainDWM1 **))v46)(
              v46,
              &GUID_8f0f30db_446a_4282_9fa2_28f75c1f39ad,
              &v47);
      v9 = v18;
      if ( v18 < 0 )
      {
        v45 = 1635;
      }
      else
      {
        v20 = CDisplay::NeedsDesktopMoves((CDisplay *)a5);
        v18 = CDWMSwapChain::Create(
                (CD3DDeviceLevel1 *)((char *)this + 864),
                v47,
                v51,
                a5[30],
                v21,
                v20,
                (a4 & 0x2000) != 0,
                &v49);
        v9 = v18;
        if ( v18 >= 0 )
        {
          *(_QWORD *)v52 = v49;
          goto LABEL_23;
        }
        v45 = 1648;
      }
    }
    v29 = v18;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_18024C878, 1u, v29, v45);
LABEL_23:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v47);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v46);
LABEL_24:
  v22 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v9, 2u);
  CD3DDeviceLevel1::ProcessDeviceLost(this);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v50);
  return v22;
}
