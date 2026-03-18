/*
 * XREFs of ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x1801FC0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180053C94 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x180161C48 (-CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatI.c)
 *     ?InternalRelease@?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ @ 0x1801CEBA0 (-InternalRelease@-$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CVisualCapture::EnsureRenderTargets(CVisualCapture *this)
{
  __int64 v1; // r14
  unsigned int v3; // ebx
  __int64 v4; // r14
  _QWORD *v5; // rax
  _QWORD *v6; // r15
  __int64 v7; // rax
  __int64 (__fastcall *v8)(_QWORD *, _QWORD, _QWORD); // rbx
  signed int ExistingDevice; // eax
  __int64 v10; // rcx
  __int64 (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v12)(_QWORD, GUID *, struct ID3D11Texture2D **); // rdi
  __int64 (__fastcall *v13)(__int64, CHwTextureRenderTarget **); // rbx
  struct _LUID *v14; // rax
  __int64 v15; // rax
  unsigned int v16; // edx
  __int64 v17; // rcx
  signed int v18; // eax
  unsigned int v20; // [rsp+20h] [rbp-50h]
  CHwTextureRenderTarget *v21; // [rsp+30h] [rbp-40h] BYREF
  struct CD3DDeviceLevel1 *v22; // [rsp+38h] [rbp-38h] BYREF
  struct ID3D11Texture2D *v23; // [rsp+40h] [rbp-30h] BYREF
  __int64 (__fastcall ***v24)(_QWORD, GUID *, struct ID3D11Texture2D **); // [rsp+48h] [rbp-28h] BYREF
  CHwTextureRenderTarget *v25; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v26[16]; // [rsp+58h] [rbp-18h] BYREF

  v1 = *((_QWORD *)this + 51);
  v3 = -2003292412;
  if ( v1 )
  {
    v4 = *(_QWORD *)(v1 + 88);
    if ( v4 )
    {
      v5 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
      v6 = v5;
      if ( v5 )
      {
        v7 = *v5;
        v24 = 0LL;
        v23 = 0LL;
        v22 = 0LL;
        v8 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v7 + 56);
        v21 = 0LL;
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v24);
        ExistingDevice = v8(v6, &v24, 0LL);
        v3 = ExistingDevice;
        if ( ExistingDevice < 0 )
        {
          v20 = 63;
        }
        else
        {
          v11 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v24;
          v12 = **v24;
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v23);
          ExistingDevice = v12(v11, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v23);
          v3 = ExistingDevice;
          if ( ExistingDevice < 0 )
          {
            v20 = 65;
          }
          else
          {
            v13 = *(__int64 (__fastcall **)(__int64, CHwTextureRenderTarget **))(*(_QWORD *)v4 + 256LL);
            Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease((__int64 *)&v22);
            v14 = (struct _LUID *)v13(v4, &v25);
            ExistingDevice = CD3DDeviceManager::GetExistingDevice((CD3DDeviceManager *)&g_D3DDeviceManager, *v14, &v22);
            v3 = ExistingDevice;
            if ( ExistingDevice < 0 )
            {
              v20 = 69;
            }
            else
            {
              (*(void (__fastcall **)(_QWORD *, _BYTE *))(v6[18] + 24LL))(v6 + 18, v26);
              Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v21);
              ExistingDevice = CHwTextureRenderTarget::CreateFromTexture(
                                 v22,
                                 (unsigned int)DisplayId::All,
                                 (__int64)v26,
                                 v23,
                                 &v21);
              v3 = ExistingDevice;
              if ( ExistingDevice >= 0 )
              {
                v25 = v21;
                v15 = *((unsigned int *)this + 74);
                v21 = 0LL;
                v16 = v15 + 1;
                if ( (int)v15 + 1 >= (unsigned int)v15 )
                {
                  if ( v16 <= *((_DWORD *)this + 73) )
                  {
                    v3 = 0;
                    *(_QWORD *)(*((_QWORD *)this + 34) + 8 * v15) = v25;
                    *((_DWORD *)this + 74) = v16;
                    goto LABEL_15;
                  }
                  v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 272, 8, 1, &v25);
                  v3 = v18;
                  if ( v18 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v18, 0xC3u, 0LL);
                }
                else
                {
                  v3 = -2147024362;
                  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, 0x80070216, 0xB8u, 0LL);
                }
                if ( (v3 & 0x80000000) != 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_1802E2B48, 2u, v3, 0x51u, 0LL);
                  goto LABEL_22;
                }
LABEL_15:
                *((_DWORD *)this + 22) = *((_DWORD *)this + 104);
                *((_DWORD *)this + 23) = *((_DWORD *)this + 105);
LABEL_22:
                Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v21);
                Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease((__int64 *)&v22);
                Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v23);
                Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v24);
                return v3;
              }
              v20 = 77;
            }
          }
        }
        MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1802E2B48, 2u, ExistingDevice, v20, 0LL);
        goto LABEL_22;
      }
    }
  }
  return v3;
}
