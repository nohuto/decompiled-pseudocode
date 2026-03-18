/*
 * XREFs of ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x1800065C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x1800067B4 (-CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatI.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FBA8 (-InternalRelease@-$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180099098 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x1800A1078 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualCapture::EnsureRenderTargets(CVisualCapture *this)
{
  __int64 v1; // rsi
  int v3; // ebx
  struct _LUID *v4; // rsi
  struct CBitmapRealization *RenderingRealizationNoRef; // r14
  int ExistingDevice; // eax
  unsigned int v7; // ecx
  __int64 v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // ecx
  int v13; // eax
  unsigned int v14; // [rsp+20h] [rbp-50h]
  __int64 v15; // [rsp+30h] [rbp-40h] BYREF
  struct CD3DDeviceLevel1 *v16; // [rsp+38h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-30h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-28h] BYREF
  __int64 v19; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v20[16]; // [rsp+58h] [rbp-18h] BYREF

  v1 = *((_QWORD *)this + 52);
  v3 = -2003292412;
  if ( v1 )
  {
    v4 = *(struct _LUID **)(v1 + 88);
    if ( v4 )
    {
      RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef((CCompositionSurfaceInfo *)v4);
      if ( RenderingRealizationNoRef )
      {
        v18 = 0LL;
        v17 = 0LL;
        v16 = 0LL;
        v15 = 0LL;
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v18);
        ExistingDevice = (*(__int64 (__fastcall **)(struct CBitmapRealization *, _QWORD, _QWORD))(*(_QWORD *)RenderingRealizationNoRef
                                                                                                + 56LL))(
                           RenderingRealizationNoRef,
                           &v18,
                           0LL);
        v3 = ExistingDevice;
        if ( ExistingDevice < 0 )
        {
          v14 = 65;
        }
        else
        {
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v17);
          ExistingDevice = (**v18)(v18, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v17);
          v3 = ExistingDevice;
          if ( ExistingDevice < 0 )
          {
            v14 = 67;
          }
          else
          {
            Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease(&v16);
            ExistingDevice = CD3DDeviceManager::GetExistingDevice(
                               (CD3DDeviceManager *)&g_D3DDeviceManager,
                               v4[21],
                               &v16);
            v3 = ExistingDevice;
            if ( ExistingDevice < 0 )
            {
              v14 = 71;
            }
            else
            {
              (*(void (__fastcall **)(__int64, _BYTE *))(*((_QWORD *)RenderingRealizationNoRef + 18) + 24LL))(
                (__int64)RenderingRealizationNoRef + 144,
                v20);
              Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v15);
              ExistingDevice = CHwTextureRenderTarget::CreateFromTexture(
                                 v16,
                                 (unsigned int)DisplayId::All,
                                 v20,
                                 v17,
                                 &v15);
              v3 = ExistingDevice;
              if ( ExistingDevice >= 0 )
              {
                v8 = v15;
                v15 = 0LL;
                v19 = v8;
                v9 = *((_DWORD *)this + 74);
                v10 = v9 + 1;
                v3 = v9 + 1 < v9 ? 0x80070216 : 0;
                if ( v9 + 1 < v9 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v3, 0xB5u);
                }
                else if ( v10 > *((_DWORD *)this + 73) )
                {
                  v13 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 272, 8LL, 1LL, &v19);
                  v3 = v13;
                  if ( v13 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v13, 0xC0u);
                }
                else
                {
                  v11 = *((_DWORD *)this + 74);
                  *(_QWORD *)(*((_QWORD *)this + 34) + 8LL * v9) = v19;
                  *((_DWORD *)this + 74) = v10;
                }
                if ( v3 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_18029B818, 2u, v3, 0x53u);
                }
                else
                {
                  *((_DWORD *)this + 90) = *((_DWORD *)this + 106);
                  *((_DWORD *)this + 91) = *((_DWORD *)this + 107);
                }
                goto LABEL_13;
              }
              v14 = 79;
            }
          }
        }
        MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_18029B818, 2u, ExistingDevice, v14);
LABEL_13:
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v15);
        Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease(&v16);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v17);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v18);
      }
    }
  }
  return (unsigned int)v3;
}
