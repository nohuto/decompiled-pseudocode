/*
 * XREFs of ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x1800188DC
 * Callers:
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180018740 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z.c)
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180022B80 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBi.c)
 *     ?CopyPixels@CHwTextureRenderTarget@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180163180 (-CopyPixels@CHwTextureRenderTarget@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@.c)
 *     ?LockForRead@CHwTextureRenderTarget@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1801637A0 (-LockForRead@CHwTextureRenderTarget@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x180039930 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180059A50 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEqualPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@0@Z @ 0x1800B1DAC (-IsEqualPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@0@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1802246B0 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CopyTexture(__int64 a1, struct IUnknown *a2, __int64 a3, int *a4, __int64 *a5)
{
  int v5; // ebx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, int *, _QWORD, __int64 *); // rbx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 (__fastcall *v15)(__int64 *, __int64 *, __int64, __int64 *); // rbx
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // ebx
  unsigned __int8 *v19; // rdi
  int v20; // eax
  unsigned int v21; // ecx
  struct IBitmapSource *v22; // rdi
  int v23; // eax
  unsigned int v24; // ecx
  int v25; // eax
  unsigned int v26; // ecx
  int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // ebx
  int v31; // eax
  unsigned int v32; // ecx
  int v33; // r9d
  unsigned int v34; // [rsp+20h] [rbp-E0h]
  __int64 v35; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  struct IBitmapSource *v37; // [rsp+60h] [rbp-A0h] BYREF
  struct IBitmapSource *v38; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v39; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v40; // [rsp+74h] [rbp-8Ch] BYREF
  int v41; // [rsp+78h] [rbp-88h] BYREF
  __int64 v42; // [rsp+7Ch] [rbp-84h]
  unsigned __int8 *v43[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v44; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v45[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v46; // [rsp+A4h] [rbp-5Ch]
  __int64 v47; // [rsp+B0h] [rbp-50h] BYREF
  int v48; // [rsp+B8h] [rbp-48h]
  int v49; // [rsp+BCh] [rbp-44h]
  __int64 v50; // [rsp+C0h] [rbp-40h] BYREF
  int v51; // [rsp+C8h] [rbp-38h]
  int v52; // [rsp+CCh] [rbp-34h]
  int v53; // [rsp+D0h] [rbp-30h]
  int v54; // [rsp+D4h] [rbp-2Ch]
  int v55; // [rsp+D8h] [rbp-28h]
  int v56; // [rsp+DCh] [rbp-24h]
  int v57; // [rsp+E0h] [rbp-20h]
  int v58; // [rsp+E4h] [rbp-1Ch]
  int v59; // [rsp+F0h] [rbp-10h] BYREF
  int v60; // [rsp+F4h] [rbp-Ch]
  int v61; // [rsp+100h] [rbp+0h]
  __int64 v62; // [rsp+10Ch] [rbp+Ch]
  __int64 v63; // [rsp+114h] [rbp+14h]
  __int128 v64; // [rsp+120h] [rbp+20h]

  v5 = *(_DWORD *)(a1 + 880);
  v43[0] = "DWM Temp Readback (bitmap1)";
  LODWORD(v43[1]) = 27;
  v35 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v36 = 0LL;
  v64 = *(_OWORD *)v43;
  if ( v5 < 0 )
  {
    v33 = v5;
    v34 = 3194;
    goto LABEL_25;
  }
  ((void (__fastcall *)(struct IUnknown *, int *))a2->lpVtbl[3].AddRef)(a2, &v59);
  v9 = *(_QWORD *)(a1 + 632);
  v59 = a4[2] - *a4;
  v60 = a4[3] - a4[1];
  v62 = 3LL;
  v63 = 0x20000LL;
  v10 = *(__int64 (__fastcall **)(__int64, int *, _QWORD, __int64 *))(*(_QWORD *)v9 + 40LL);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v35);
  v11 = v10(v9, &v59, 0LL, &v35);
  v5 = v11;
  if ( v11 < 0 )
  {
    v34 = 3220;
    goto LABEL_23;
  }
  (*(void (__fastcall **)(__int64, const GUID *, _QWORD, _QWORD))(*(_QWORD *)v35 + 40LL))(
    v35,
    &WKPDID_D3DDebugObjectName,
    DWORD2(v64),
    v64);
  v12 = *a4;
  v13 = *(_QWORD *)(a1 + 640);
  v55 = 0;
  v53 = v12;
  v54 = a4[1];
  v56 = a4[2];
  v57 = a4[3];
  v58 = 1;
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD *)v13 + 368LL))(
    v13,
    v35,
    0LL,
    0LL,
    0,
    0);
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, unsigned __int8 **))(**(_QWORD **)(a1 + 640)
                                                                                                + 112LL))(
          *(_QWORD *)(a1 + 640),
          v35,
          0LL,
          1LL,
          0,
          v43);
  v5 = v11;
  if ( v11 < 0 )
  {
    v34 = 3246;
LABEL_23:
    v33 = v11;
LABEL_25:
    MilInstrumentationCheckHR_MaybeFailFast(a1, &dword_1802B2900, 9u, v33, v34, 0LL);
    goto LABEL_13;
  }
  v41 = v61;
  v42 = 0LL;
  v48 = v59;
  v49 = v60;
  v51 = a4[2] - *a4;
  v52 = a4[3] - a4[1];
  v14 = *a5;
  v47 = 0LL;
  v50 = 0LL;
  v15 = *(__int64 (__fastcall **)(__int64 *, __int64 *, __int64, __int64 *))(v14 + 24);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v36);
  v16 = v15(a5, &v47, 2LL, &v36);
  v5 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_1802B2900, 9u, v16, 0xCC4u, 0LL);
  }
  else
  {
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v36 + 24LL))(v36, v45);
    v18 = LODWORD(v43[1]) * (a4[3] - a4[1]);
    v19 = v43[0];
    v42 = v46;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v37);
    v20 = HrCreateBitmapFromMemoryEx(
            a4[2] - *a4,
            a4[3] - a4[1],
            (const struct PixelFormatInfo *)&v41,
            (unsigned int)v43[1],
            v18,
            v19,
            a2,
            &v37);
    v5 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, &dword_1802B2900, 9u, v20, 0xCD9u, 0LL);
    }
    else
    {
      if ( IsEqualPixelFormatInfo((const struct PixelFormatInfo *)&v41, (const struct PixelFormatInfo *)v45) )
      {
        v22 = v37;
        goto LABEL_8;
      }
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v38);
      v31 = CFormatConverter::HrConvertBitmap(v37, (const struct PixelFormatInfo *)v45, &v38);
      v5 = v31;
      if ( v31 >= 0 )
      {
        v22 = v38;
LABEL_8:
        v23 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(*(_QWORD *)v36 + 48LL))(v36, &v39, &v44);
        v5 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v24, &dword_1802B2900, 9u, v23, 0xCEAu, 0LL);
        }
        else
        {
          v25 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v36 + 40LL))(v36, &v40);
          v5 = v25;
          if ( v25 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v26, &dword_1802B2900, 9u, v25, 0xCEBu, 0LL);
          }
          else
          {
            v27 = (*(__int64 (__fastcall **)(struct IBitmapSource *, __int64 *, _QWORD, _QWORD, __int64))(*(_QWORD *)v22 + 48LL))(
                    v22,
                    &v50,
                    v40,
                    v39,
                    v44);
            v5 = v27;
            if ( v27 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v28, &dword_1802B2900, 9u, v27, 0xCFAu, 0LL);
          }
        }
        goto LABEL_12;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v32, &dword_1802B2900, 9u, v31, 0xCE5u, 0LL);
    }
  }
LABEL_12:
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 640) + 120LL))(*(_QWORD *)(a1 + 640), v35, 0LL);
LABEL_13:
  v29 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(a1, (unsigned int)v5, 0LL);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v36);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v38);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v37);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v35);
  return v29;
}
