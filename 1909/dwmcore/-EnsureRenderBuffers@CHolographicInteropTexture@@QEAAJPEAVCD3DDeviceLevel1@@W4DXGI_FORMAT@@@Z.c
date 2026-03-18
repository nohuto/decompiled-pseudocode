/*
 * XREFs of ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z @ 0x1802455F0
 * Callers:
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z @ 0x180244960 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x18004F31C (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800573D0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@VDisplayId@@PEAUPixelFormatInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18015AE44 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@VDisplayId@@PEA.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1802460D8 (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180246EBC (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

__int64 __fastcall CHolographicInteropTexture::EnsureRenderBuffers(
        CHolographicInteropTexture *this,
        struct CD3DDeviceLevel1 *a2,
        enum DXGI_FORMAT a3)
{
  int v3; // ebx
  __int64 v5; // rcx
  int v6; // edx
  unsigned int v7; // r12d
  char *v8; // rax
  const char *v9; // rcx
  char *v10; // rbx
  unsigned int v11; // r13d
  struct D3D11_SUBRESOURCE_DATA *v12; // r8
  signed int v13; // eax
  __int64 v14; // rcx
  struct ID3D11Texture2D *v15; // rbx
  HRESULT (__stdcall *QueryInterface)(ID3D11Texture2D *, const IID *const, void **); // rsi
  signed int v17; // eax
  __int64 v18; // rcx
  __int64 (__fastcall *v19)(char *, _QWORD, __int64, _QWORD, __int64); // rax
  __int64 v20; // rdx
  signed int v21; // eax
  const char *v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // r8d
  signed int RenderTargetBitmapFromTexture; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  CHolographicInteropTaskQueue *v28; // rcx
  struct IUnknown *v29; // r8
  unsigned int v30; // edx
  struct ID3D11Texture2D *v32; // [rsp+40h] [rbp-69h] BYREF
  char *v33; // [rsp+48h] [rbp-61h] BYREF
  enum DXGI_FORMAT v34; // [rsp+50h] [rbp-59h]
  __int128 v35; // [rsp+58h] [rbp-51h] BYREF
  CD3DDeviceLevel1 *v36; // [rsp+68h] [rbp-41h]
  __int64 v37; // [rsp+70h] [rbp-39h]
  _DWORD v38[5]; // [rsp+80h] [rbp-29h] BYREF
  __int64 v39; // [rsp+94h] [rbp-15h]
  int v40; // [rsp+9Ch] [rbp-Dh]
  __int64 v41; // [rsp+A0h] [rbp-9h]
  int v42; // [rsp+A8h] [rbp-1h]
  __int128 v43; // [rsp+B0h] [rbp+7h]

  v3 = 0;
  v34 = a3;
  v32 = 0LL;
  v33 = 0LL;
  v36 = a2;
  if ( *((_BYTE *)this + 133) )
    goto LABEL_41;
  v5 = *((unsigned int *)this + 36);
  if ( (unsigned int)(v5 - 1) <= 0x3FFF )
  {
    v6 = *((_DWORD *)this + 37);
    if ( (unsigned int)(v6 - 1) <= 0x3FFF )
    {
      v38[4] = a3;
      v38[0] = v5;
      *(_QWORD *)&v35 = "Holographic Interop texture";
      DWORD2(v35) = 27;
      v38[1] = v6;
      v38[2] = 1;
      v43 = v35;
      v38[3] = 1;
      v39 = 1LL;
      v40 = 0;
      v41 = 40LL;
      v42 = 2050;
      AcquireSRWLockExclusive((PSRWLOCK)this + 38);
      v7 = 0;
      if ( *((_DWORD *)this + 35) )
      {
        while ( 2 )
        {
          v8 = (char *)operator new(0x68uLL);
          if ( v8 )
          {
            v10 = v8 + 8;
            *(_QWORD *)v8 = 1LL;
            `vector constructor iterator'(
              v8 + 8,
              96LL,
              1LL,
              (void (__fastcall *)(char *))CHolographicInteropTexture::RenderBuffer::RenderBuffer);
          }
          else
          {
            v10 = 0LL;
          }
          if ( v7 >= 2uLL )
            std::_Xlength_error(v9);
          *((_QWORD *)this + v7 + 13) = v10;
          *((_DWORD *)this + 34) = 1;
          v11 = 0;
          do
          {
            Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v32);
            v13 = CD3DDeviceLevel1::CreateTexture(v36, (const struct DWM_TEXTURE2D_DESC *)v38, v12, &v32);
            v3 = v13;
            if ( v13 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x250u, 0LL);
              goto LABEL_31;
            }
            v15 = v32;
            QueryInterface = v32->lpVtbl->QueryInterface;
            Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v33);
            v17 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, char **))QueryInterface)(
                    v15,
                    &GUID_30961379_4609_4a41_998e_54fe567ee0c1,
                    &v33);
            v3 = v17;
            if ( v17 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x252u, 0LL);
              goto LABEL_31;
            }
            if ( v7 >= 2uLL )
              std::_Xlength_error(v33);
            v19 = *(__int64 (__fastcall **)(char *, _QWORD, __int64, _QWORD, __int64))(*(_QWORD *)v33 + 104LL);
            v20 = *((_QWORD *)this + v7 + 13) + 8LL;
            v37 = 96LL * v11;
            v21 = v19(v33, 0LL, 0x80000000LL, 0LL, v20 + v37);
            v3 = v21;
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast((__int64)v22, 0LL, 0, v21, 0x258u, 0LL);
              goto LABEL_31;
            }
            *(_QWORD *)&v35 = (unsigned int)v34 | 0x100000000LL;
            DWORD2(v35) = v34 == DXGI_FORMAT_R16G16B16A16_FLOAT;
            if ( v7 >= 2uLL )
              std::_Xlength_error(v22);
            v23 = *((_QWORD *)this + 9);
            if ( *(_QWORD *)(v23 + 40) )
              v24 = *(_DWORD *)(v23 + 64);
            else
              v24 = DisplayId::Hmd;
            RenderTargetBitmapFromTexture = CD3DDeviceLevel1::CreateRenderTargetBitmapFromTexture(
                                              (__int64)v36,
                                              (__int64)v32,
                                              v24,
                                              (__int64)&v35,
                                              (_QWORD *)(*((_QWORD *)this + v7 + 13) + v37));
            v3 = RenderTargetBitmapFromTexture;
            if ( RenderTargetBitmapFromTexture < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, RenderTargetBitmapFromTexture, 0x263u, 0LL);
LABEL_31:
              ReleaseSRWLockExclusive((PSRWLOCK)this + 38);
              goto LABEL_39;
            }
            ++v11;
          }
          while ( v11 < *((_DWORD *)this + 34) );
          if ( ++v7 < *((_DWORD *)this + 35) )
            continue;
          break;
        }
      }
      ReleaseSRWLockExclusive((PSRWLOCK)this + 38);
      v27 = *((_QWORD *)this + 9);
      if ( *((_BYTE *)this + 134) )
      {
        v28 = *(CHolographicInteropTaskQueue **)(v27 + 48);
        if ( !v28 || !*(_BYTE *)(v27 + 240) )
          goto LABEL_37;
        v29 = (struct IUnknown *)(((unsigned __int64)this + 64) & -(__int64)(this != 0LL));
        v30 = 4;
      }
      else
      {
        *((_BYTE *)this + 134) = 1;
        v28 = *(CHolographicInteropTaskQueue **)(v27 + 48);
        if ( !v28 || !*(_BYTE *)(v27 + 240) )
          goto LABEL_37;
        v29 = (struct IUnknown *)(((unsigned __int64)this + 64) & -(__int64)(this != 0LL));
        v30 = 1;
      }
      CHolographicInteropTaskQueue::PostMessageW(v28, v30, v29, 0LL, 0LL, 0LL, 0LL);
LABEL_37:
      *((_BYTE *)this + 133) = 1;
      goto LABEL_39;
    }
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, 0x80070057, 0x230u, 0LL);
LABEL_39:
  if ( v3 < 0 )
    CHolographicInteropTexture::ReleaseResources(this);
LABEL_41:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v33);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v32);
  return (unsigned int)v3;
}
