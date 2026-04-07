/*
 * XREFs of ?EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180042FA0
 * Callers:
 *     ?EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJK@Z @ 0x180042CB4 (-EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJK@Z.c)
 * Callees:
 *     ?EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ @ 0x180015610 (-EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A568 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UICompositor@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositor@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180040C9C (--$As@UICompositor@Composition@UI@Windows@@@-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Mi.c)
 *     ??$As@UICompositionBrush@Composition@UI@Windows@@@?$ComPtr@UICompositionSurfaceBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004392C (--$As@UICompositionBrush@Composition@UI@Windows@@@-$ComPtr@UICompositionSurfaceBrush@Composition.c)
 *     ??$As@UICompositionSurface@Composition@UI@Windows@@@?$ComPtr@UICompositionDrawingSurface@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionSurface@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180043B4C (--$As@UICompositionSurface@Composition@UI@Windows@@@-$ComPtr@UICompositionDrawingSurface@Composi.c)
 *     ??$As@UICompositionDrawingSurfaceInterop@Composition@UI@Windows@@@?$ComPtr@UICompositionDrawingSurface@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionDrawingSurfaceInterop@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180043B90 (--$As@UICompositionDrawingSurfaceInterop@Composition@UI@Windows@@@-$ComPtr@UICompositionDrawingS.c)
 *     ??$As@UICompositorInterop@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositorInterop@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180043BD4 (--$As@UICompositorInterop@Composition@UI@Windows@@@-$ComPtr@UIDCompositionDesktopDevicePartner@@.c)
 *     ??$As@UIDCompositionDeviceInternal@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompositionDeviceInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x180043C18 (--$As@UIDCompositionDeviceInternal@@@-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccentAcrylicBlurBehind::EnsureNoiseSurfaceBrush(CAccentAcrylicBlurBehind *this)
{
  char *v1; // r14
  unsigned int v3; // edi
  HMODULE ModuleHandleW; // rdi
  HRSRC ResourceW; // rbx
  HGLOBAL Resource; // rax
  LPVOID v7; // r15
  DWORD v8; // r12d
  __int64 v9; // rbx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  _QWORD *v19; // rsi
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdi
  CDesktopManager *v25; // rcx
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rdi
  __m128 v29; // xmm7
  __m128 v30; // xmm6
  int v31; // eax
  int v32; // eax
  __int64 v33; // rdi
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  __int64 v39; // rdi
  int v40; // eax
  int v41; // eax
  int v42; // eax
  void *v44; // [rsp+30h] [rbp-D8h]
  __int64 v45; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v46; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v47; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v48; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v49; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v50; // [rsp+70h] [rbp-98h] BYREF
  __int64 v51; // [rsp+78h] [rbp-90h] BYREF
  __int64 v52; // [rsp+80h] [rbp-88h] BYREF
  __int64 v53; // [rsp+88h] [rbp-80h] BYREF
  __int64 v54; // [rsp+90h] [rbp-78h] BYREF
  __int64 v55; // [rsp+98h] [rbp-70h] BYREF
  int v56; // [rsp+A0h] [rbp-68h] BYREF
  int v57; // [rsp+A4h] [rbp-64h] BYREF
  __int64 v58; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v59; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v60; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v61; // [rsp+C0h] [rbp-48h] BYREF
  int v62; // [rsp+C8h] [rbp-40h] BYREF
  int v63; // [rsp+CCh] [rbp-3Ch]
  __int64 v64; // [rsp+D0h] [rbp-38h] BYREF
  int v65; // [rsp+D8h] [rbp-30h]
  int v66; // [rsp+DCh] [rbp-2Ch]
  _DWORD v67[4]; // [rsp+E0h] [rbp-28h] BYREF
  float v68[4]; // [rsp+F0h] [rbp-18h] BYREF

  v1 = (char *)this + 320;
  v3 = 0;
  if ( !*((_QWORD *)this + 40) )
  {
    ModuleHandleW = GetModuleHandleW(L"Windows.UI.Xaml.Controls.dll");
    ResourceW = FindResourceW(ModuleHandleW, (LPCWSTR)0x7D0, (LPCWSTR)0xA);
    Resource = LoadResource(ModuleHandleW, ResourceW);
    v7 = LockResource(Resource);
    v8 = SizeofResource(ModuleHandleW, ResourceW);
    v9 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 39);
    if ( v9 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 39));
    v45 = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v45);
    v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 112LL))(v9, &v45);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x79Au, v44);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v45);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(__int64, LPVOID, _QWORD))(*(_QWORD *)v45 + 128LL))(v45, v7, v8);
      v3 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x79Bu, v44);
      }
      else
      {
        v46 = 0LL;
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v46);
        v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v9 + 32LL))(
                v9,
                v45,
                0LL,
                1LL,
                &v46);
        v3 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x79Eu, v44);
        }
        else
        {
          v13 = v46;
          v48 = 0LL;
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v48);
          v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 104LL))(v13, 0LL, &v48);
          v3 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x7A1u, v44);
          }
          else
          {
            v47 = 0LL;
            Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v47);
            v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 80LL))(v9, &v47);
            v3 = v15;
            if ( v15 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x7A4u, v44);
            }
            else
            {
              v16 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, _QWORD, _QWORD))(*(_QWORD *)v47 + 64LL))(
                      v47,
                      v48,
                      &GUID_WICPixelFormat32bppPBGRA,
                      0LL,
                      0LL);
              v3 = v16;
              if ( v16 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x7A5u, 0LL);
              }
              else
              {
                v49 = 0LL;
                Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v49);
                v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v9 + 144LL))(
                        v9,
                        v47,
                        2LL,
                        &v49);
                v3 = v17;
                if ( v17 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x7A8u, 0LL);
                }
                else
                {
                  v56 = 0;
                  v57 = 0;
                  v18 = (*(__int64 (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v49 + 24LL))(v49, &v56, &v57);
                  v3 = v18;
                  if ( v18 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x7ADu, 0LL);
                  }
                  else
                  {
                    v19 = (_QWORD *)((char *)this + 288);
                    v50 = 0LL;
                    v20 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<IDCompositionDeviceInternal>(
                            v19,
                            &v50);
                    v3 = v20;
                    if ( v20 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x7B1u, 0LL);
                    }
                    else
                    {
                      v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v50 + 24LL))(
                              v50,
                              (unsigned int)v56,
                              (unsigned int)v57);
                      v3 = v21;
                      if ( v21 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x7B3u, 0LL);
                      }
                      else
                      {
                        v65 = v56;
                        v66 = v57;
                        v64 = 0LL;
                        v22 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v50 + 32LL))(
                                v50,
                                &v64,
                                1LL);
                        v3 = v22;
                        if ( v22 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x7B5u, 0LL);
                        }
                        else
                        {
                          v53 = 0LL;
                          v23 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::ICompositorInterop>(
                                  v19,
                                  &v53);
                          v3 = v23;
                          if ( v23 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x7B8u, 0LL);
                          }
                          else
                          {
                            v24 = v53;
                            v52 = 0LL;
                            Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v52);
                            if ( (int)CDesktopManager::EnsureDCompositionInteropDevice(v25) < 0 )
                              v26 = 0LL;
                            else
                              v26 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 29);
                            v27 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v24 + 40LL))(
                                    v24,
                                    v26,
                                    &v52);
                            v3 = v27;
                            if ( v27 < 0 )
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x7BBu, 0LL);
                            }
                            else
                            {
                              v28 = v52;
                              v29 = 0LL;
                              v30 = 0LL;
                              v51 = 0LL;
                              v29.m128_f32[0] = (float)v56;
                              v30.m128_f32[0] = (float)v57;
                              Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v51);
                              v31 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64, __int64, __int64 *))(*(_QWORD *)v28 + 48LL))(
                                      v28,
                                      _mm_unpacklo_ps(v29, v30).m128_u64[0],
                                      87LL,
                                      1LL,
                                      &v51);
                              v3 = v31;
                              if ( v31 < 0 )
                              {
                                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x7C1u, 0LL);
                              }
                              else
                              {
                                v55 = 0LL;
                                v32 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionDrawingSurface>::As<Windows::UI::Composition::ICompositionDrawingSurfaceInterop>(
                                        &v51,
                                        &v55);
                                v3 = v32;
                                if ( v32 < 0 )
                                {
                                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x7C4u, 0LL);
                                }
                                else
                                {
                                  v33 = v55;
                                  v54 = 0LL;
                                  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v54);
                                  v34 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *, int *))(*(_QWORD *)v33 + 24LL))(
                                          v33,
                                          0LL,
                                          &GUID_e8f7fe7a_191c_466d_ad95_975678bda998,
                                          &v54,
                                          &v62);
                                  v3 = v34;
                                  if ( v34 < 0 )
                                  {
                                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x7C9u, 0LL);
                                  }
                                  else
                                  {
                                    v58 = 0LL;
                                    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v58);
                                    v35 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v54 + 40LL))(
                                            v54,
                                            v49,
                                            0LL,
                                            &v58);
                                    v3 = v35;
                                    if ( v35 < 0 )
                                    {
                                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x7CDu, 0LL);
                                    }
                                    else
                                    {
                                      v67[0] = 0;
                                      v67[1] = 0;
                                      v68[0] = (float)v62;
                                      v68[1] = (float)v63;
                                      *(float *)&v67[2] = (float)v56;
                                      *(float *)&v67[3] = (float)v57;
                                      v68[2] = (float)v62 + (float)v56;
                                      v68[3] = (float)v63 + (float)v57;
                                      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v54 + 624LL))(v54, 1LL);
                                      (*(void (__fastcall **)(__int64, __int64, float *))(*(_QWORD *)v54 + 208LL))(
                                        v54,
                                        v58,
                                        v68);
                                      v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 32LL))(v55);
                                      v3 = v36;
                                      if ( v36 < 0 )
                                      {
                                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x7E2u, v67);
                                      }
                                      else
                                      {
                                        v60 = 0LL;
                                        v37 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::ICompositor>(
                                                v19,
                                                &v60);
                                        v3 = v37;
                                        if ( v37 < 0 )
                                        {
                                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x7E5u, v67);
                                        }
                                        else
                                        {
                                          v61 = 0LL;
                                          v38 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionDrawingSurface>::As<Windows::UI::Composition::ICompositionSurface>(
                                                  &v51,
                                                  &v61);
                                          v3 = v38;
                                          if ( v38 < 0 )
                                          {
                                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x7E9u, v67);
                                          }
                                          else
                                          {
                                            v39 = v60;
                                            v59 = 0LL;
                                            Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v59);
                                            v40 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v39 + 192LL))(
                                                    v39,
                                                    v61,
                                                    &v59);
                                            v3 = v40;
                                            if ( v40 < 0 )
                                            {
                                              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x7EDu, v67);
                                            }
                                            else
                                            {
                                              v41 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v59 + 88LL))(
                                                      v59,
                                                      0LL);
                                              v3 = v41;
                                              if ( v41 < 0 )
                                              {
                                                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x7EEu, v67);
                                              }
                                              else
                                              {
                                                v42 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionSurfaceBrush>::As<Windows::UI::Composition::ICompositionBrush>(
                                                        &v59,
                                                        v1);
                                                v3 = v42;
                                                if ( v42 < 0 )
                                                  MilInstrumentationCheckHR_MaybeFailFast(
                                                    0x14u,
                                                    0LL,
                                                    0,
                                                    v42,
                                                    0x7F1u,
                                                    v67);
                                              }
                                            }
                                            Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v59);
                                          }
                                          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v61);
                                        }
                                        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v60);
                                      }
                                    }
                                    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v58);
                                  }
                                  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v54);
                                }
                                Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v55);
                              }
                              Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v51);
                            }
                            Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v52);
                          }
                          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v53);
                        }
                      }
                    }
                    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v50);
                  }
                }
                Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v49);
              }
            }
            Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v47);
          }
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v48);
        }
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v46);
      }
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v45);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  return v3;
}
