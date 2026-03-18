/*
 * XREFs of ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x1800E3AFC
 * Callers:
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1800E3960 (-Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializa.c)
 *     ?Init@CHDRConversionRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180167980 (-Init@CHDRConversionRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z @ 0x18004F410 (-FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x1800626C0 (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180063830 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x18007903C (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800DD440 (-Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COL.c)
 *     ?Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@W4DXGI_COLOR_SPACE_TYPE@@U_LUID@@I_N4PEAPEAV1@@Z @ 0x1800E3E58 (-Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@W4DXGI_COLOR_SPACE_TY.c)
 *     ?GetDXGIOutput@CDisplay@@QEBAJPEAPEAUIDXGIOutput@@@Z @ 0x1800E41BC (-GetDXGIOutput@CDisplay@@QEBAJPEAPEAUIDXGIOutput@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Create@CDWMSwapChainDDA@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@W4DXGI_COLOR_SPACE_TYPE@@U_LUID@@IPEAPEAV1@@Z @ 0x1801635E8 (-Create@CDWMSwapChainDDA@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@W4DXGI_COLOR_SPACE.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateSwapChain(
        CD3DDeviceLevel1 *this,
        int *a2,
        struct D3D11_SUBRESOURCE_DATA *a3,
        __int16 a4,
        struct _LUID *a5,
        struct CDWMSwapChainDDA *a6)
{
  enum DXGI_COLOR_SPACE_TYPE v7; // r14d
  int v10; // ebx
  int v11; // eax
  struct IDXGIOutput *v12; // rbx
  HRESULT (__stdcall *v13)(IDXGIOutput *, const IID *const, void **); // rsi
  signed int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, GUID *, struct CDWMSwapChain **); // rsi
  signed int v17; // eax
  __int64 v18; // rcx
  struct CDWMSwapChain *v19; // rbx
  __int64 (__fastcall *v20)(struct CDWMSwapChain *, _QWORD, int *, struct IDXGIOutput *, struct IDXGISwapChainDWM1 **); // rsi
  __int64 v21; // rcx
  int v22; // eax
  LONG v23; // eax
  struct IDXGISwapChainDWM1 *v24; // rbx
  __int64 (__fastcall *v25)(struct IDXGISwapChainDWM1 *, GUID *, struct IDXGISwapChainDWM1 **); // rsi
  char v26; // al
  unsigned int v27; // edx
  unsigned int v28; // ebx
  unsigned int v30; // r9d
  int v31; // eax
  __int64 (__fastcall *v32)(__int64, GUID *, struct CDWMSwapChain **); // rsi
  signed int v33; // eax
  __int64 v34; // rcx
  struct CDWMSwapChain *v35; // rbx
  __int64 (__fastcall *v36)(struct CDWMSwapChain *, _QWORD, int *, __int64 *, struct IDXGIOutput *, struct IDXGISwapChainDWM1 **); // rsi
  unsigned int v37; // r9d
  signed int DXGIOutput; // eax
  __int64 v39; // rcx
  struct IDXGIOutput *v40; // rbx
  HRESULT (__stdcall *GetParent)(IDXGIOutput *, const IID *const, void **); // rdi
  signed int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rbx
  __int64 (__fastcall *v45)(__int64, GUID *, struct IDXGISwapChainDWM1 **); // rdi
  signed int v46; // eax
  struct IDXGISwapChainDWM1 *v47; // rbx
  int v48; // eax
  __int64 (__fastcall *v49)(struct IDXGISwapChainDWM1 *, _QWORD, int *, struct IDXGIOutput *, struct IDXGISwapChainDWM1 **); // rdi
  signed int v50; // eax
  __int64 v51; // rcx
  signed int v52; // eax
  __int64 v53; // rcx
  unsigned int v54; // [rsp+20h] [rbp-B9h]
  unsigned int v55; // [rsp+20h] [rbp-B9h]
  struct IDXGISwapChainDWM1 *v56; // [rsp+40h] [rbp-99h] BYREF
  struct IDXGISwapChainDWM1 *v57; // [rsp+48h] [rbp-91h] BYREF
  struct CDWMSwapChain *v58; // [rsp+50h] [rbp-89h] BYREF
  enum DXGI_COLOR_SPACE_TYPE v59[2]; // [rsp+58h] [rbp-81h] BYREF
  struct IDXGIOutput *v60; // [rsp+60h] [rbp-79h] BYREF
  __int64 v61; // [rsp+68h] [rbp-71h] BYREF
  struct CDWMSwapChainDDA *v62; // [rsp+70h] [rbp-69h] BYREF
  int v63; // [rsp+80h] [rbp-59h] BYREF
  int v64; // [rsp+84h] [rbp-55h]
  DWORD v65; // [rsp+88h] [rbp-51h]
  int v66; // [rsp+8Ch] [rbp-4Dh]
  __int64 v67; // [rsp+90h] [rbp-49h]
  int v68; // [rsp+98h] [rbp-41h]
  int v69; // [rsp+9Ch] [rbp-3Dh]
  int v70; // [rsp+A0h] [rbp-39h]
  int v71; // [rsp+A4h] [rbp-35h]
  int v72; // [rsp+A8h] [rbp-31h]
  int v73; // [rsp+ACh] [rbp-2Dh]
  __int64 v74; // [rsp+D0h] [rbp-9h] BYREF
  int v75; // [rsp+D8h] [rbp-1h]
  int v76; // [rsp+DCh] [rbp+3h]
  int v77; // [rsp+E0h] [rbp+7h]

  v7 = (int)a3;
  v59[0] = (int)a3;
  v62 = a6;
  *(_QWORD *)a6 = 0LL;
  v10 = *((_DWORD *)this + 220);
  v60 = 0LL;
  if ( v10 < 0 )
  {
    v30 = v10;
    v54 = 1550;
    goto LABEL_61;
  }
  if ( (a4 & 0x4000) != 0 )
  {
    *(_QWORD *)v59 = 0LL;
    v56 = 0LL;
    v57 = 0LL;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v60);
    DXGIOutput = CDisplay::GetDXGIOutput((CDisplay *)a5, &v60);
    v10 = DXGIOutput;
    if ( DXGIOutput < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v39, &dword_180280CA0, 1u, DXGIOutput, 0x698u, 0LL);
    }
    else
    {
      v40 = v60;
      GetParent = v60->lpVtbl->GetParent;
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)v59);
      v42 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, enum DXGI_COLOR_SPACE_TYPE *))GetParent)(
              v40,
              &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
              v59);
      v10 = v42;
      if ( v42 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v43, &dword_180280CA0, 1u, v42, 0x69Au, 0LL);
      }
      else
      {
        v44 = *(_QWORD *)v59;
        v45 = *(__int64 (__fastcall **)(__int64, GUID *, struct IDXGISwapChainDWM1 **))(**(_QWORD **)v59 + 48LL);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v57);
        v46 = v45(v44, &GUID_1ddd77aa_9a4a_4cc8_9e55_98c196bafc8f, &v57);
        v10 = v46;
        if ( v46 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0LL, &dword_180280CA0, 1u, v46, 0x69Bu, 0LL);
        }
        else
        {
          v47 = v57;
          v63 = *a2;
          v64 = a2[1];
          v65 = a2[4];
          v67 = *(_QWORD *)(a2 + 7);
          v68 = a2[9];
          v69 = a2[10];
          v71 = a2[15];
          v48 = a2[16];
          v66 = 0;
          v70 = 0;
          v73 = v48;
          v72 = 3;
          v49 = *(__int64 (__fastcall **)(struct IDXGISwapChainDWM1 *, _QWORD, int *, struct IDXGIOutput *, struct IDXGISwapChainDWM1 **))(*(_QWORD *)v57 + 32LL);
          Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v56);
          v50 = v49(v47, *((_QWORD *)this + 79), &v63, v60, &v56);
          v10 = v50;
          if ( v50 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v51, &dword_180280CA0, 1u, v50, 0x6A5u, 0LL);
          }
          else
          {
            v52 = CDWMSwapChainDDA::Create(
                    (CD3DDeviceLevel1 *)((char *)this + 896),
                    v56,
                    v7,
                    a5[29],
                    a5[30].LowPart,
                    &v62);
            v10 = v52;
            if ( v52 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v53, &dword_180280CA0, 1u, v52, 0x6AFu, 0LL);
            else
              *(_QWORD *)a6 = v62;
          }
        }
      }
    }
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v57);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v56);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)v59);
    goto LABEL_24;
  }
  if ( a5 && LOBYTE(a5[39].LowPart) )
  {
    v11 = CDWMOffScreenSwapChain::Create(
            (CD3DDeviceLevel1 *)((char *)this + 896),
            (const struct DXGI_SWAP_CHAIN_DESC *)a2,
            a3,
            (const struct CDisplay *)a5,
            &v58);
    v10 = v11;
    if ( v11 >= 0 )
    {
      *(_QWORD *)a6 = v58;
      goto LABEL_24;
    }
    v54 = 1672;
    goto LABEL_29;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v60);
  v11 = CDisplay::GetDXGIOutput((CDisplay *)a5, &v60);
  v10 = v11;
  if ( v11 < 0 )
  {
    v54 = 1561;
LABEL_29:
    v30 = v11;
LABEL_61:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_180280CA0, 1u, v30, v54, 0LL);
    goto LABEL_24;
  }
  v56 = 0LL;
  v57 = 0LL;
  do
  {
    v12 = v60;
    v61 = 0LL;
    v13 = v60->lpVtbl->GetParent;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v61);
    v14 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, __int64 *))v13)(
            v12,
            &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
            &v61);
    v10 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0LL, &dword_180280CA0, 1u, v14, 0x621u, 0LL);
      goto LABEL_47;
    }
    v15 = v61;
    v58 = 0LL;
    if ( (a4 & 0x2000) != 0 )
    {
      v63 = *a2;
      v64 = a2[1];
      v65 = a2[4];
      v67 = *(_QWORD *)(a2 + 7);
      v68 = a2[9];
      v69 = a2[10];
      v71 = a2[15];
      v73 = a2[16];
      v74 = *((_QWORD *)a2 + 1);
      v75 = a2[5];
      v76 = a2[6];
      v31 = a2[14];
      v70 = 0;
      v77 = v31;
      v66 = 1;
      v72 = 3;
      v32 = *(__int64 (__fastcall **)(__int64, GUID *, struct CDWMSwapChain **))(*(_QWORD *)v61 + 48LL);
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v58);
      v33 = v32(v15, &GUID_1ddd77aa_9a4a_4cc8_9e55_98c196bafc8f, &v58);
      v10 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v34, &dword_180280CA0, 1u, v33, 0x633u, 0LL);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v58);
LABEL_47:
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v61);
        goto LABEL_23;
      }
      v35 = v58;
      v36 = *(__int64 (__fastcall **)(struct CDWMSwapChain *, _QWORD, int *, __int64 *, struct IDXGIOutput *, struct IDXGISwapChainDWM1 **))(*(_QWORD *)v58 + 24LL);
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v56);
      v10 = v36(v35, *((_QWORD *)this + 79), &v63, &v74, v60, &v56);
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v58);
    }
    else
    {
      v16 = *(__int64 (__fastcall **)(__int64, GUID *, struct CDWMSwapChain **))(*(_QWORD *)v61 + 48LL);
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v58);
      v17 = v16(v15, &GUID_713f394e_92ca_47e7_ab81_1159c2791e54, &v58);
      v10 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, &dword_180280CA0, 1u, v17, 0x63Eu, 0LL);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v58);
        goto LABEL_47;
      }
      v19 = v58;
      v20 = *(__int64 (__fastcall **)(struct CDWMSwapChain *, _QWORD, int *, struct IDXGIOutput *, struct IDXGISwapChainDWM1 **))(*(_QWORD *)v58 + 24LL);
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v56);
      v10 = v20(v19, *((_QWORD *)this + 79), a2, v60, &v56);
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v58);
    }
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v61);
  }
  while ( CD3DResourceManager::FreeSomeVideoMemory((CD3DDeviceLevel1 *)((char *)this + 896), v10) );
  if ( v10 < 0 )
  {
    v37 = v10;
    v55 = 1610;
  }
  else
  {
    v22 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM1 *, int *))(*(_QWORD *)v56 + 80LL))(v56, &v63);
    v10 = v22;
    if ( v22 < 0 )
    {
      v55 = 1615;
    }
    else
    {
      v23 = v66;
      if ( (v65 != a2[2] || v66 != a2[3]) && (v65 || v66 != 1) )
      {
        a5[34].LowPart = v65;
        a5[34].HighPart = v23;
      }
      if ( HIDWORD(v67) != a2[5] )
        a5[35].HighPart = HIDWORD(v67);
      if ( (v63 != *a2 || v64 != a2[1]) && (v63 || v64) )
      {
        v10 = 142213127;
        goto LABEL_23;
      }
      v24 = v56;
      v25 = **(__int64 (__fastcall ***)(struct IDXGISwapChainDWM1 *, GUID *, struct IDXGISwapChainDWM1 **))v56;
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v57);
      v22 = v25(v24, &GUID_fc4f7700_8c88_43fb_aa4f_44c4a584dc19, &v57);
      v10 = v22;
      if ( v22 < 0 )
      {
        v55 = 1640;
      }
      else
      {
        v26 = CDisplay::NeedsDesktopMoves((CDisplay *)a5);
        v22 = CDWMSwapChain::Create(
                (CD3DDeviceLevel1 *)((char *)this + 896),
                v57,
                v59[0],
                a5[29],
                v27,
                v26,
                (a4 & 0x2000) != 0,
                &v58);
        v10 = v22;
        if ( v22 >= 0 )
        {
          *(_QWORD *)v62 = v58;
          goto LABEL_23;
        }
        v55 = 1653;
      }
    }
    v37 = v22;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v21, &dword_180280CA0, 1u, v37, v55, 0LL);
LABEL_23:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v57);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v56);
LABEL_24:
  v28 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v10, 2u);
  CD3DDeviceLevel1::ProcessDeviceLost(this);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v60);
  return v28;
}
