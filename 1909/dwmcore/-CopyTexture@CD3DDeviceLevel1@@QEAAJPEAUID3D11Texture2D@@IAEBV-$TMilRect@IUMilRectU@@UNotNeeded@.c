/*
 * XREFs of ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x1800171AC
 * Callers:
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180017010 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z.c)
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180021380 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBi.c)
 *     ?CopyPixels@CHwTextureRenderTarget@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180161A90 (-CopyPixels@CHwTextureRenderTarget@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@.c)
 *     ?LockForRead@CHwTextureRenderTarget@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1801620B0 (-LockForRead@CHwTextureRenderTarget@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsEqualPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@0@Z @ 0x18002363C (-IsEqualPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@0@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x180047E10 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180063830 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x180222FA0 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CopyTexture(__int64 a1, struct IUnknown *a2, __int64 a3, int *a4, __int64 *a5)
{
  int v5; // ebx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, int *, _QWORD, __int64 *); // rbx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 (__fastcall *v18)(__int64 *, __int64 *, __int64, __int64 *); // rbx
  int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // ebx
  unsigned __int8 *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // eax
  unsigned int v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  struct IBitmapSource *v31; // rdi
  int v32; // eax
  unsigned int v33; // ecx
  int v34; // eax
  unsigned int v35; // ecx
  int v36; // eax
  unsigned int v37; // ecx
  unsigned int v38; // ebx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  int v49; // eax
  unsigned int v50; // ecx
  int v51; // r9d
  unsigned int v52; // [rsp+20h] [rbp-E0h]
  __int64 v53; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v54; // [rsp+58h] [rbp-A8h] BYREF
  struct IBitmapSource *v55; // [rsp+60h] [rbp-A0h] BYREF
  struct IBitmapSource *v56; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v57; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v58; // [rsp+74h] [rbp-8Ch] BYREF
  int v59; // [rsp+78h] [rbp-88h] BYREF
  __int64 v60; // [rsp+7Ch] [rbp-84h]
  unsigned __int8 *v61[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v62; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v63[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v64; // [rsp+A4h] [rbp-5Ch]
  __int64 v65; // [rsp+B0h] [rbp-50h] BYREF
  int v66; // [rsp+B8h] [rbp-48h]
  int v67; // [rsp+BCh] [rbp-44h]
  __int64 v68; // [rsp+C0h] [rbp-40h] BYREF
  int v69; // [rsp+C8h] [rbp-38h]
  int v70; // [rsp+CCh] [rbp-34h]
  int v71; // [rsp+D0h] [rbp-30h]
  int v72; // [rsp+D4h] [rbp-2Ch]
  int v73; // [rsp+D8h] [rbp-28h]
  int v74; // [rsp+DCh] [rbp-24h]
  int v75; // [rsp+E0h] [rbp-20h]
  int v76; // [rsp+E4h] [rbp-1Ch]
  int v77; // [rsp+F0h] [rbp-10h] BYREF
  int v78; // [rsp+F4h] [rbp-Ch]
  int v79; // [rsp+100h] [rbp+0h]
  __int64 v80; // [rsp+10Ch] [rbp+Ch]
  __int64 v81; // [rsp+114h] [rbp+14h]
  __int128 v82; // [rsp+120h] [rbp+20h]

  v5 = *(_DWORD *)(a1 + 880);
  v61[0] = "DWM Temp Readback (bitmap1)";
  LODWORD(v61[1]) = 27;
  v53 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v54 = 0LL;
  v82 = *(_OWORD *)v61;
  if ( v5 < 0 )
  {
    v51 = v5;
    v52 = 3194;
    goto LABEL_25;
  }
  ((void (__fastcall *)(struct IUnknown *, int *))a2->lpVtbl[3].AddRef)(a2, &v77);
  v9 = *(_QWORD *)(a1 + 632);
  v77 = a4[2] - *a4;
  v78 = a4[3] - a4[1];
  v80 = 3LL;
  v81 = 0x20000LL;
  v10 = *(__int64 (__fastcall **)(__int64, int *, _QWORD, __int64 *))(*(_QWORD *)v9 + 40LL);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v53);
  v11 = v10(v9, &v77, 0LL, &v53);
  v5 = v11;
  if ( v11 < 0 )
  {
    v52 = 3220;
    goto LABEL_23;
  }
  (*(void (__fastcall **)(__int64, const GUID *, _QWORD, _QWORD))(*(_QWORD *)v53 + 40LL))(
    v53,
    &WKPDID_D3DDebugObjectName,
    DWORD2(v82),
    v82);
  v12 = *a4;
  v13 = *(_QWORD *)(a1 + 640);
  v73 = 0;
  v71 = v12;
  v72 = a4[1];
  v74 = a4[2];
  v75 = a4[3];
  v76 = 1;
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD *)v13 + 368LL))(
    v13,
    v53,
    0LL,
    0LL,
    0,
    0);
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, unsigned __int8 **))(**(_QWORD **)(a1 + 640)
                                                                                                + 112LL))(
          *(_QWORD *)(a1 + 640),
          v53,
          0LL,
          1LL,
          0,
          v61);
  v5 = v11;
  if ( v11 < 0 )
  {
    v52 = 3246;
LABEL_23:
    v51 = v11;
LABEL_25:
    MilInstrumentationCheckHR_MaybeFailFast(a1, &dword_1802B0D10, 9u, v51, v52, 0LL);
    goto LABEL_13;
  }
  v59 = v79;
  v60 = 0LL;
  v66 = v77;
  v67 = v78;
  v69 = a4[2] - *a4;
  v70 = a4[3] - a4[1];
  v17 = *a5;
  v65 = 0LL;
  v68 = 0LL;
  v18 = *(__int64 (__fastcall **)(__int64 *, __int64 *, __int64, __int64 *))(v17 + 24);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v54, v14, v15, v16);
  v19 = v18(a5, &v65, 2LL, &v54);
  v5 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, &dword_1802B0D10, 9u, v19, 0xCC4u, 0LL);
  }
  else
  {
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v54 + 24LL))(v54, v63);
    v21 = LODWORD(v61[1]) * (a4[3] - a4[1]);
    v22 = v61[0];
    v60 = v64;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v55, v23, v24, v25);
    v26 = HrCreateBitmapFromMemoryEx(
            a4[2] - *a4,
            a4[3] - a4[1],
            (const struct PixelFormatInfo *)&v59,
            (unsigned int)v61[1],
            v21,
            v22,
            a2,
            &v55);
    v5 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, &dword_1802B0D10, 9u, v26, 0xCD9u, 0LL);
    }
    else
    {
      if ( IsEqualPixelFormatInfo((const struct PixelFormatInfo *)&v59, (const struct PixelFormatInfo *)v63) )
      {
        v31 = v55;
        goto LABEL_8;
      }
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v56, v28, v29, v30);
      v49 = CFormatConverter::HrConvertBitmap(v55, (const struct PixelFormatInfo *)v63, &v56);
      v5 = v49;
      if ( v49 >= 0 )
      {
        v31 = v56;
LABEL_8:
        v32 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(*(_QWORD *)v54 + 48LL))(v54, &v57, &v62);
        v5 = v32;
        if ( v32 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v33, &dword_1802B0D10, 9u, v32, 0xCEAu, 0LL);
        }
        else
        {
          v34 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v54 + 40LL))(v54, &v58);
          v5 = v34;
          if ( v34 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v35, &dword_1802B0D10, 9u, v34, 0xCEBu, 0LL);
          }
          else
          {
            v36 = (*(__int64 (__fastcall **)(struct IBitmapSource *, __int64 *, _QWORD, _QWORD, __int64))(*(_QWORD *)v31 + 48LL))(
                    v31,
                    &v68,
                    v58,
                    v57,
                    v62);
            v5 = v36;
            if ( v36 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v37, &dword_1802B0D10, 9u, v36, 0xCFAu, 0LL);
          }
        }
        goto LABEL_12;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v50, &dword_1802B0D10, 9u, v49, 0xCE5u, 0LL);
    }
  }
LABEL_12:
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 640) + 120LL))(*(_QWORD *)(a1 + 640), v53, 0LL);
LABEL_13:
  v38 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(a1, (unsigned int)v5, 0LL);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v54, v39, v40, v41);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v56, v42, v43, v44);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v55, v45, v46, v47);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v53);
  return v38;
}
