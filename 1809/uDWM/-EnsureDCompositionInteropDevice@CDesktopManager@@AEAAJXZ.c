/*
 * XREFs of ?EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ @ 0x18001D3A0
 * Callers:
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x18001BF90 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18001CE40 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ @ 0x180022478 (-GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ.c)
 *     ?EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180044C94 (-EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?HandleInteropDeviceLost@CDesktopManager@@SAXXZ @ 0x180079328 (-HandleInteropDeviceLost@CDesktopManager@@SAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003852C (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180039A24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003FB88 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800702C8 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180073834 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 */

__int64 __fastcall CDesktopManager::EnsureDCompositionInteropDevice(CDesktopManager *this)
{
  CDesktopManager *v1; // rdi
  unsigned int LastErrorFailHr; // ebx
  HRESULT v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  void *v8; // rdx
  wil::details *v9; // rcx
  wil::details *v10; // rcx
  HANDLE Event; // rbx
  HRESULT v12; // eax
  int v13; // eax
  int ActivationFactory; // eax
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // rbx
  int v16; // eax
  __int64 v17; // rbx
  int v18; // eax
  int v19; // eax
  int v20; // r9d
  unsigned int pFeatureLevels; // [rsp+20h] [rbp-49h]
  __int64 v22; // [rsp+50h] [rbp-19h] BYREF
  ID3D11Device *ppDevice; // [rsp+58h] [rbp-11h] BYREF
  __int64 v24; // [rsp+60h] [rbp-9h] BYREF
  void *ppIFactory; // [rsp+68h] [rbp-1h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp+7h] BYREF
  __int64 v27; // [rsp+78h] [rbp+Fh] BYREF
  __int64 (__fastcall ***v28)(_QWORD, GUID *, char *); // [rsp+80h] [rbp+17h] BYREF
  D3D_FEATURE_LEVEL pFeatureLevel; // [rsp+88h] [rbp+1Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp+27h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+3Fh]

  v1 = CDesktopManager::s_pDesktopManagerInstance;
  LastErrorFailHr = 0;
  if ( !*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 27) )
  {
    ppDevice = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&ppDevice);
    v4 = D3D11CreateDevice(0LL, D3D_DRIVER_TYPE_HARDWARE, 0LL, 0x20u, 0LL, 0, 7u, &ppDevice, &pFeatureLevel, 0LL);
    LastErrorFailHr = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x206u);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&ppDevice);
      return LastErrorFailHr;
    }
    v22 = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v22);
    v5 = ((__int64 (__fastcall *)(ID3D11Device *, GUID *, __int64 *))ppDevice->lpVtbl->QueryInterface)(
           ppDevice,
           &GUID_77db970f_6276_48ba_ba28_070143b4392c,
           &v22);
    LastErrorFailHr = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x209u);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v22);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&ppDevice);
      return LastErrorFailHr;
    }
    v6 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v22 + 48LL))(
           v22,
           &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
           (__int64)v1 + 224);
    LastErrorFailHr = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x20Cu);
      goto LABEL_23;
    }
    v24 = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v24);
    v7 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(**((_QWORD **)v1 + 28) + 48LL))(
           *((_QWORD *)v1 + 28),
           &GUID_a4966eed_76db_44da_84c1_ee9a7afb20a8,
           &v24);
    LastErrorFailHr = v7;
    if ( v7 < 0 )
    {
      pFeatureLevels = 527;
    }
    else
    {
      v9 = (wil::details *)*((_QWORD *)v1 + 34);
      if ( v9 )
      {
        wil::details::ResetEvent(v9, v8);
      }
      else
      {
        Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
        if ( Event )
        {
          GetLastError();
          wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
            (char *)v1 + 272,
            Event);
          LastErrorFailHr = 0;
        }
        else
        {
          LastErrorFailHr = wil::details::GetLastErrorFailHr(v10);
        }
        if ( (LastErrorFailHr & 0x80000000) != 0 )
        {
          pFeatureLevels = 531;
          v20 = LastErrorFailHr;
          goto LABEL_31;
        }
      }
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v24 + 240LL))(
             v24,
             *((_QWORD *)v1 + 34),
             (__int64)v1 + 280);
      LastErrorFailHr = v7;
      if ( v7 >= 0 )
      {
        ppIFactory = 0LL;
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&ppIFactory);
        v12 = D2D1CreateFactory(
                D2D1_FACTORY_TYPE_SINGLE_THREADED,
                &GUID_94f81a73_9212_4376_9c58_b16a3a0d3992,
                0LL,
                &ppIFactory);
        LastErrorFailHr = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x21Du);
        }
        else
        {
          v13 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)ppIFactory + 136LL))(
                  ppIFactory,
                  v22,
                  (__int64)v1 + 232);
          LastErrorFailHr = v13;
          if ( v13 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x21Fu);
          }
          else
          {
            v26 = 0LL;
            Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v26);
            v31 = 0LL;
            Microsoft::WRL::Wrappers::HStringReference::CreateReference(
              &hstringHeader,
              L"Windows.UI.Composition.Compositor",
              0x22u,
              0x21u);
            ActivationFactory = RoGetActivationFactory(v31, &GUID_00000035_0000_0000_c000_000000000046, &v26);
            LastErrorFailHr = ActivationFactory;
            if ( ActivationFactory < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ActivationFactory, 0x223u);
            }
            else
            {
              v15 = v26;
              v27 = 0LL;
              Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v27);
              v16 = (**v15)(v15, &GUID_22118adf_23f1_4801_bcfa_66cbf48cc51b, &v27);
              LastErrorFailHr = v16;
              if ( v16 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x227u);
              }
              else
              {
                v17 = v27;
                v28 = 0LL;
                Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v28);
                v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(*(_QWORD *)v17 + 48LL))(
                        v17,
                        *((_QWORD *)v1 + 29),
                        0LL,
                        &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8,
                        &v28);
                LastErrorFailHr = v18;
                if ( v18 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x22Bu);
                }
                else
                {
                  v19 = (**v28)(v28, &GUID_d14b6158_c3fa_4bce_9c1f_b61d8665eab0, (char *)v1 + 216);
                  LastErrorFailHr = v19;
                  if ( v19 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x22Eu);
                }
                Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v28);
              }
              Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v27);
            }
            Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v26);
          }
        }
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&ppIFactory);
        goto LABEL_22;
      }
      pFeatureLevels = 538;
    }
    v20 = v7;
LABEL_31:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, pFeatureLevels);
LABEL_22:
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v24);
LABEL_23:
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v22);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&ppDevice);
  }
  return LastErrorFailHr;
}
