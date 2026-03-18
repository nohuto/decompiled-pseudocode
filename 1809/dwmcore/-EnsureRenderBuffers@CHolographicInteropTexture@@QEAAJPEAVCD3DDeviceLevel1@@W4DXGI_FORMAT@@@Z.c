/*
 * XREFs of ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z @ 0x18020DA40
 * Callers:
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z @ 0x180211608 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002C9EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x180095660 (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@VDisplayId@@PEAUPixelFormatInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801FBA9C (-CreateRenderTargetBitmapFromTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@VDisplayId@@PEA.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x18020E54C (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180211B90 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

__int64 __fastcall CHolographicInteropTexture::EnsureRenderBuffers(
        CHolographicInteropTexture *this,
        struct CD3DDeviceLevel1 *a2,
        enum DXGI_FORMAT a3)
{
  char *v3; // rdi
  int v5; // r14d
  __int64 v6; // rcx
  int v7; // edx
  unsigned int v8; // r12d
  char *v9; // rax
  unsigned int v10; // r13d
  struct D3D11_SUBRESOURCE_DATA *v11; // r8
  int v12; // eax
  __int64 v13; // rcx
  struct ID3D11Texture2D *v14; // rdi
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // r8d
  int RenderTargetBitmapFromTexture; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  CHolographicInteropTaskQueue *v26; // rcx
  struct IUnknown *v27; // r8
  unsigned int v28; // edx
  __int64 *v30; // [rsp+40h] [rbp-69h] BYREF
  struct ID3D11Texture2D *v31; // [rsp+48h] [rbp-61h] BYREF
  __int128 v32; // [rsp+50h] [rbp-59h] BYREF
  enum DXGI_FORMAT v33; // [rsp+60h] [rbp-49h]
  CD3DDeviceLevel1 *v34; // [rsp+68h] [rbp-41h]
  __int64 v35; // [rsp+70h] [rbp-39h]
  _DWORD v36[5]; // [rsp+80h] [rbp-29h] BYREF
  __int64 v37; // [rsp+94h] [rbp-15h]
  int v38; // [rsp+9Ch] [rbp-Dh]
  __int64 v39; // [rsp+A0h] [rbp-9h]
  int v40; // [rsp+A8h] [rbp-1h]
  __int128 v41; // [rsp+B0h] [rbp+7h]
  const void *retaddr; // [rsp+108h] [rbp+5Fh]

  v3 = 0LL;
  v33 = a3;
  v34 = a2;
  v5 = 0;
  v31 = 0LL;
  v30 = 0LL;
  if ( *((_BYTE *)this + 133) )
    goto LABEL_40;
  v6 = *((unsigned int *)this + 36);
  if ( (unsigned int)(v6 - 1) <= 0x3FFF )
  {
    v7 = *((_DWORD *)this + 37);
    if ( (unsigned int)(v7 - 1) <= 0x3FFF )
    {
      v36[0] = v6;
      DWORD2(v32) = 27;
      *(_QWORD *)&v32 = "Holographic Interop texture";
      v36[1] = v7;
      v36[2] = 1;
      v41 = v32;
      v36[3] = 1;
      v36[4] = a3;
      v37 = 1LL;
      v38 = 0;
      v39 = 40LL;
      v40 = 2050;
      AcquireSRWLockExclusive((PSRWLOCK)this + 38);
      v8 = 0;
      if ( *((_DWORD *)this + 35) )
      {
        while ( 2 )
        {
          v9 = (char *)operator new(0x68uLL);
          if ( v9 )
          {
            v3 = v9 + 8;
            *(_QWORD *)v9 = 1LL;
            `vector constructor iterator'(
              v9 + 8,
              96LL,
              1LL,
              (void (__fastcall *)(char *))CHolographicInteropTexture::RenderBuffer::RenderBuffer);
          }
          if ( v8 >= 2uLL )
            ModuleFailFastForHRESULT(-2147483637, retaddr);
          *((_QWORD *)this + v8 + 13) = v3;
          *((_DWORD *)this + 34) = 1;
          v10 = 0;
          do
          {
            Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v31);
            v12 = CD3DDeviceLevel1::CreateTexture(v34, (const struct DWM_TEXTURE2D_DESC *)v36, v11, &v31);
            v5 = v12;
            if ( v12 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x25Bu);
              goto LABEL_30;
            }
            Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v30);
            v14 = v31;
            v15 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, __int64 **))v31->lpVtbl->QueryInterface)(
                    v31,
                    &GUID_30961379_4609_4a41_998e_54fe567ee0c1,
                    &v30);
            v5 = v15;
            if ( v15 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x25Du);
              goto LABEL_30;
            }
            if ( v8 >= 2uLL )
              ModuleFailFastForHRESULT(-2147483637, retaddr);
            v17 = *v30;
            v18 = *((_QWORD *)this + v8 + 13) + 8LL;
            v35 = 96LL * v10;
            v19 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, _QWORD, __int64))(v17 + 104))(
                    v30,
                    0LL,
                    0x80000000LL,
                    0LL,
                    v18 + v35);
            v5 = v19;
            if ( v19 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x263u);
              goto LABEL_30;
            }
            *(_QWORD *)&v32 = (unsigned int)v33 | 0x100000000LL;
            DWORD2(v32) = v33 == DXGI_FORMAT_R16G16B16A16_FLOAT;
            if ( v8 >= 2uLL )
              ModuleFailFastForHRESULT(-2147483637, retaddr);
            v21 = *((_QWORD *)this + 9);
            if ( *(_QWORD *)(v21 + 32) )
              v22 = *(_DWORD *)(v21 + 56);
            else
              v22 = DisplayId::Hmd;
            RenderTargetBitmapFromTexture = CD3DDeviceLevel1::CreateRenderTargetBitmapFromTexture(
                                              v34,
                                              v14,
                                              v22,
                                              (__int64)&v32,
                                              (_QWORD *)(*((_QWORD *)this + v8 + 13) + v35));
            v3 = 0LL;
            v5 = RenderTargetBitmapFromTexture;
            if ( RenderTargetBitmapFromTexture < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, RenderTargetBitmapFromTexture, 0x26Eu);
LABEL_30:
              ReleaseSRWLockExclusive((PSRWLOCK)this + 38);
              goto LABEL_38;
            }
            ++v10;
          }
          while ( v10 < *((_DWORD *)this + 34) );
          if ( ++v8 < *((_DWORD *)this + 35) )
            continue;
          break;
        }
      }
      ReleaseSRWLockExclusive((PSRWLOCK)this + 38);
      v25 = *((_QWORD *)this + 9);
      if ( *((_BYTE *)this + 134) )
      {
        v26 = *(CHolographicInteropTaskQueue **)(v25 + 40);
        if ( !v26 || !*(_BYTE *)(v25 + 216) )
          goto LABEL_36;
        v27 = (struct IUnknown *)(((unsigned __int64)this + 64) & -(__int64)(this != 0LL));
        v28 = 4;
      }
      else
      {
        *((_BYTE *)this + 134) = 1;
        v26 = *(CHolographicInteropTaskQueue **)(v25 + 40);
        if ( !v26 || !*(_BYTE *)(v25 + 216) )
          goto LABEL_36;
        v27 = (struct IUnknown *)(((unsigned __int64)this + 64) & -(__int64)(this != 0LL));
        v28 = 1;
      }
      CHolographicInteropTaskQueue::PostMessageW(v26, v28, v27, 0LL, 0LL, 0LL, 0LL);
LABEL_36:
      *((_BYTE *)this + 133) = 1;
      goto LABEL_38;
    }
  }
  v5 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024809, 0x23Bu);
LABEL_38:
  if ( v5 < 0 )
    CHolographicInteropTexture::ReleaseResources(this);
LABEL_40:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v30);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v31);
  return (unsigned int)v5;
}
