/*
 * XREFs of ?EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJK@Z @ 0x1800449A8
 * Callers:
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z @ 0x180044834 (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037508 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003852C (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180039A24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180044C94 (-EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ??$As@UICompositor@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositor@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180045350 (--$As@UICompositor@Composition@UI@Windows@@@-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Mi.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccentAcrylicBlurBehind::EnsureAcrylicBrushForAccent(CAccentAcrylicBlurBehind *this, int a2)
{
  unsigned int v4; // ebx
  int ActivationFactory; // eax
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  char v15; // [rsp+20h] [rbp-49h]
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-29h] BYREF
  __int64 v17; // [rsp+48h] [rbp-21h] BYREF
  unsigned int v18; // [rsp+50h] [rbp-19h]
  unsigned int v19; // [rsp+54h] [rbp-15h]
  __int64 v20; // [rsp+58h] [rbp-11h] BYREF
  __int64 v21; // [rsp+60h] [rbp-9h] BYREF
  HSTRING_HEADER v22; // [rsp+68h] [rbp-1h] BYREF
  __int64 v23; // [rsp+80h] [rbp+17h]
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v25; // [rsp+A0h] [rbp+37h]

  v4 = 0;
  if ( *((_DWORD *)this + 92) != a2 )
  {
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v16);
    v25 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.UI.Xaml.Media.AcrylicBrush",
      0x23u,
      0x22u);
    ActivationFactory = RoGetActivationFactory(v25, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v16);
    v4 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ActivationFactory, 0x760u);
    }
    else
    {
      v7 = v16;
      v17 = 0LL;
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v17);
      v8 = (**v7)(v7, &GUID_680997ba_0457_5d80_b67c_2c402037fb04, &v17);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x764u);
      }
      else
      {
        v21 = 0LL;
        v9 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::ICompositor>(
               (char *)this + 288,
               &v21);
        v4 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x768u);
        }
        else
        {
          v10 = v17;
          v20 = 0LL;
          LOBYTE(v19) = HIBYTE(a2);
          HIBYTE(v19) = BYTE2(a2);
          v18 = 255;
          *(_WORD *)((char *)&v19 + 1) = a2;
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v20);
          v15 = 0;
          v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, char, __int64 *))(*(_QWORD *)v10 + 48LL))(
                  v10,
                  v21,
                  v19,
                  v18,
                  v15,
                  &v20);
          v4 = v11;
          if ( v11 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x773u);
          }
          else
          {
            v12 = CAccentAcrylicBlurBehind::EnsureNoiseSurfaceBrush(this);
            v4 = v12;
            if ( v12 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x777u);
            }
            else
            {
              v23 = 0LL;
              Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v22, L"Noise", 6u, 5u);
              v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v20 + 56LL))(
                      v20,
                      v23,
                      *((_QWORD *)this + 40));
              v4 = v13;
              if ( v13 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x77Bu);
              }
              else
              {
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 39);
                v14 = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v20)(
                        v20,
                        &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46,
                        (char *)this + 312);
                v4 = v14;
                if ( v14 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x77Eu);
                else
                  *((_DWORD *)this + 92) = a2;
              }
              v23 = 0LL;
            }
          }
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v20);
        }
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v21);
      }
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v17);
    }
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v16);
  }
  return v4;
}
