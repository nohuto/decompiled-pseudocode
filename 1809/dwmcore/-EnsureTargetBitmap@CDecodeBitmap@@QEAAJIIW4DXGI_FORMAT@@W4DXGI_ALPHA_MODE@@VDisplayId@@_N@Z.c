/*
 * XREFs of ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z @ 0x1802298C8
 * Callers:
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1802296A8 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormatInfo@@@Z @ 0x18000692C (-PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormat.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x18002FC60 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x18004E2CC (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z @ 0x18004EC34 (-Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDecodeBitmap::EnsureTargetBitmap(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        enum DXGI_FORMAT a4,
        __int64 a5,
        unsigned int a6,
        char a7)
{
  unsigned int v7; // edi
  __int64 v9; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  struct _LUID v20; // [rsp+40h] [rbp-61h]
  struct IRenderTargetBitmap *v21; // [rsp+70h] [rbp-31h] BYREF
  __int64 v22; // [rsp+78h] [rbp-29h]
  const char *v23; // [rsp+80h] [rbp-21h] BYREF
  int v24; // [rsp+88h] [rbp-19h]
  _BYTE v25[16]; // [rsp+90h] [rbp-11h] BYREF

  v7 = 0;
  v21 = 0LL;
  v9 = *(_QWORD *)(a1 + 160);
  if ( v9
    && *(_DWORD *)(a1 + 192) == a2
    && *(_DWORD *)(a1 + 196) == a3
    && *(_DWORD *)(a1 + 200) == a4
    && *(_BYTE *)(a1 + 204) == a7 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 128LL))(v9, 3LL);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 160) + 240LL))(*(_QWORD *)(a1 + 160), a6);
  }
  else
  {
    v22 = 1LL;
    v13 = PixelFormatInfoFromDXGIFormatAndAlphaMode(a4, DXGI_ALPHA_MODE_IGNORE, (struct PixelFormatInfo *)v25);
    v7 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x58u);
    }
    else
    {
      CRenderTargetBitmap::ReleaseRenderTargetBitmap((CRenderTargetBitmap *)a1);
      *(_DWORD *)(a1 + 192) = 0;
      *(_DWORD *)(a1 + 196) = 0;
      v23 = "DWM Rendertarget (DecodeBitmap)";
      *(_BYTE *)(a1 + 205) = 0;
      v20 = *(struct _LUID *)(a1 + 184);
      v24 = 31;
      v15 = CD3DDeviceManager::CreateRenderTargetBitmap(
              (__int64)&qword_180308A48,
              (__int64)&v23,
              a2,
              a3,
              v22,
              0,
              (__int64)v25,
              0,
              v20,
              a6,
              a7,
              0,
              1,
              &v21);
      v7 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x70u);
      }
      else
      {
        v17 = CRenderTargetBitmap::Initialize(
                (CRenderTargetBitmap *)a1,
                (__int64 (__fastcall ***)(struct IRenderTargetBitmap *, GUID *, __int64 *))v21);
        v7 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x74u);
        }
        else
        {
          *(_DWORD *)(a1 + 192) = a2;
          *(_DWORD *)(a1 + 196) = a3;
          *(_DWORD *)(a1 + 200) = a4;
          *(_BYTE *)(a1 + 204) = a7;
        }
      }
    }
  }
  if ( v21 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v21 + 16LL))(v21);
  return v7;
}
