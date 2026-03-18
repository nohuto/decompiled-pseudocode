/*
 * XREFs of ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x18001798C
 * Callers:
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1800177F0 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z.c)
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180020DB0 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBi.c)
 *     ?CopyPixels@CHwTextureRenderTarget@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180202EA0 (-CopyPixels@CHwTextureRenderTarget@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@.c)
 *     ?LockForRead@CHwTextureRenderTarget@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180203170 (-LockForRead@CHwTextureRenderTarget@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x1800376CC (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?IsEqualPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@0@Z @ 0x180090FAC (-IsEqualPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@0@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x180092B64 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x18021581C (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CopyTexture(__int64 a1, struct IUnknown *a2, __int64 a3, int *a4, __int64 a5)
{
  int v5; // ebx
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  unsigned __int8 *v15; // rdi
  int v16; // eax
  unsigned int v17; // ecx
  struct IBitmapSource *v18; // rdi
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // ebx
  int v27; // eax
  unsigned int v28; // ecx
  int v29; // r9d
  unsigned int v30; // [rsp+20h] [rbp-E0h]
  struct IUnknown *v31; // [rsp+30h] [rbp-D0h]
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  struct IBitmapSource *v34; // [rsp+60h] [rbp-A0h] BYREF
  struct IBitmapSource *v35; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v36; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v37; // [rsp+74h] [rbp-8Ch] BYREF
  int v38; // [rsp+78h] [rbp-88h] BYREF
  __int64 v39; // [rsp+7Ch] [rbp-84h]
  unsigned __int8 *v40[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v41; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v42[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v43; // [rsp+A4h] [rbp-5Ch]
  __int64 v44; // [rsp+B0h] [rbp-50h] BYREF
  int v45; // [rsp+B8h] [rbp-48h]
  int v46; // [rsp+BCh] [rbp-44h]
  __int64 v47; // [rsp+C0h] [rbp-40h] BYREF
  int v48; // [rsp+C8h] [rbp-38h]
  int v49; // [rsp+CCh] [rbp-34h]
  int v50; // [rsp+D0h] [rbp-30h]
  int v51; // [rsp+D4h] [rbp-2Ch]
  int v52; // [rsp+D8h] [rbp-28h]
  int v53; // [rsp+DCh] [rbp-24h]
  int v54; // [rsp+E0h] [rbp-20h]
  int v55; // [rsp+E4h] [rbp-1Ch]
  int v56; // [rsp+F0h] [rbp-10h] BYREF
  int v57; // [rsp+F4h] [rbp-Ch]
  int v58; // [rsp+100h] [rbp+0h]
  __int64 v59; // [rsp+10Ch] [rbp+Ch]
  __int64 v60; // [rsp+114h] [rbp+14h]
  __int128 v61; // [rsp+120h] [rbp+20h]

  v5 = *(_DWORD *)(a1 + 848);
  v40[0] = "DWM Temp Readback (bitmap1)";
  LODWORD(v40[1]) = 27;
  v32 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  v61 = *(_OWORD *)v40;
  if ( v5 < 0 )
  {
    v30 = 3175;
    v29 = v5;
    goto LABEL_25;
  }
  ((void (__fastcall *)(struct IUnknown *, int *))a2->lpVtbl[3].AddRef)(a2, &v56);
  v9 = *(_QWORD *)(a1 + 632);
  v56 = a4[2] - *a4;
  v57 = a4[3] - a4[1];
  v59 = 3LL;
  v60 = 0x20000LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v32);
  v10 = (*(__int64 (__fastcall **)(__int64, int *, _QWORD, __int64 *))(*(_QWORD *)v9 + 40LL))(v9, &v56, 0LL, &v32);
  v5 = v10;
  if ( v10 < 0 )
  {
    v30 = 3201;
    goto LABEL_23;
  }
  (*(void (__fastcall **)(__int64, const GUID *, _QWORD, _QWORD))(*(_QWORD *)v32 + 40LL))(
    v32,
    &WKPDID_D3DDebugObjectName,
    DWORD2(v61),
    v61);
  v11 = *(_QWORD *)(a1 + 640);
  v50 = *a4;
  v51 = a4[1];
  v53 = a4[2];
  v54 = a4[3];
  v52 = 0;
  v55 = 1;
  v31 = a2;
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD *)v11 + 368LL))(
    v11,
    v32,
    0LL,
    0LL,
    0,
    0);
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, unsigned __int8 **))(**(_QWORD **)(a1 + 640)
                                                                                                + 112LL))(
          *(_QWORD *)(a1 + 640),
          v32,
          0LL,
          1LL,
          0,
          v40);
  v5 = v10;
  if ( v10 < 0 )
  {
    v30 = 3227;
LABEL_23:
    v29 = v10;
LABEL_25:
    MilInstrumentationCheckHR_MaybeFailFast(a1, &dword_18029B920, 9u, v29, v30);
    goto LABEL_13;
  }
  v38 = v58;
  v39 = 0LL;
  v45 = v56;
  v46 = v57;
  v48 = a4[2] - *a4;
  v49 = a4[3] - a4[1];
  v44 = 0LL;
  v47 = 0LL;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v33);
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64 *))(*(_QWORD *)a5 + 24LL))(a5, &v44, 2LL, &v33);
  v5 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_18029B920, 9u, v12, 0xCB1u);
  }
  else
  {
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v33 + 24LL))(v33, v42);
    v14 = LODWORD(v40[1]) * (a4[3] - a4[1]);
    v15 = v40[0];
    v39 = v43;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v34);
    v16 = HrCreateBitmapFromMemoryEx(
            a4[2] - *a4,
            a4[3] - a4[1],
            (const struct PixelFormatInfo *)&v38,
            (unsigned int)v40[1],
            v14,
            v15,
            v31,
            &v34);
    v5 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_18029B920, 9u, v16, 0xCC6u);
    }
    else
    {
      if ( IsEqualPixelFormatInfo((const struct PixelFormatInfo *)&v38, (const struct PixelFormatInfo *)v42) )
      {
        v18 = v34;
        goto LABEL_8;
      }
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v35);
      v27 = CFormatConverter::HrConvertBitmap(v34, (const struct PixelFormatInfo *)v42, &v35);
      v5 = v27;
      if ( v27 >= 0 )
      {
        v18 = v35;
LABEL_8:
        v19 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(*(_QWORD *)v33 + 48LL))(v33, &v36, &v41);
        v5 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v20, &dword_18029B920, 9u, v19, 0xCD7u);
        }
        else
        {
          v21 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v33 + 40LL))(v33, &v37);
          v5 = v21;
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v22, &dword_18029B920, 9u, v21, 0xCD8u);
          }
          else
          {
            v23 = (*(__int64 (__fastcall **)(struct IBitmapSource *, __int64 *, _QWORD, _QWORD, __int64))(*(_QWORD *)v18 + 48LL))(
                    v18,
                    &v47,
                    v37,
                    v36,
                    v41);
            v5 = v23;
            if ( v23 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v24, &dword_18029B920, 9u, v23, 0xCE7u);
          }
        }
        goto LABEL_12;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v28, &dword_18029B920, 9u, v27, 0xCD2u);
    }
  }
LABEL_12:
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 640) + 120LL))(*(_QWORD *)(a1 + 640), v32, 0LL);
LABEL_13:
  v25 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(a1, (unsigned int)v5, 0LL);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v33);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v35);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v34);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v32);
  return v25;
}
