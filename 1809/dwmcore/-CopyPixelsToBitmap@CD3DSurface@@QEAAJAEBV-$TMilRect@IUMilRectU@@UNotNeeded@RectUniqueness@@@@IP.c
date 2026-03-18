/*
 * XREFs of ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x1800909E8
 * Callers:
 *     ?GetBits@CHwSurfaceRenderTarget@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z @ 0x1800904A0 (-GetBits@CHwSurfaceRenderTarget@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z.c)
 * Callees:
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x180090558 (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?DestroyAndRelease@CD3DResource@@QEAAXXZ @ 0x180090E5C (-DestroyAndRelease@CD3DResource@@QEAAXXZ.c)
 *     ?IsEqualPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@0@Z @ 0x180090FAC (-IsEqualPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@0@Z.c)
 *     ?LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z @ 0x180091000 (-LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z.c)
 *     ?Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAV1@@Z @ 0x180091124 (-Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_D.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x180092B64 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x180093A54 (-UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180096A0C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18009B4BC (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x18021581C (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CD3DSurface::CopyPixelsToBitmap(
        struct CD3DSurface *a1,
        struct tagRECT *a2,
        struct D3D11_SUBRESOURCE_DATA *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  char v9; // r12
  struct IBitmapSource *v10; // rdi
  struct IBitmapSource *v11; // rsi
  int v12; // eax
  struct CD3DResourceManager *v13; // rcx
  int v14; // eax
  int v15; // eax
  unsigned int v16; // ecx
  CD3DSurface *v17; // r14
  unsigned int v18; // ebx
  int v19; // r13d
  int v20; // r12d
  enum D3D11_MAP v21; // r9d
  int v22; // eax
  unsigned int v23; // ecx
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rax
  int v27; // eax
  unsigned int v28; // ecx
  bool v29; // al
  struct IBitmapSource *v30; // r13
  int v31; // eax
  unsigned __int64 v32; // rcx
  struct tagRECT *v33; // rax
  int v34; // r12d
  __m128i v35; // xmm0
  unsigned int top; // eax
  unsigned int bottom; // edx
  unsigned int left; // r8d
  unsigned int v39; // r10d
  LONG right; // r11d
  unsigned int v41; // r9d
  bool v42; // cf
  unsigned int v43; // eax
  int v44; // edx
  int v45; // r8d
  int v46; // r9d
  int v47; // r10d
  int v48; // r11d
  int v49; // ebx
  unsigned int v50; // edx
  unsigned int v51; // r9d
  unsigned int v52; // eax
  unsigned int v53; // eax
  __int64 v54; // rcx
  int v56; // eax
  unsigned int v57; // ecx
  int v58; // r9d
  unsigned int v59; // [rsp+20h] [rbp-E0h]
  struct IUnknown *v60; // [rsp+30h] [rbp-D0h]
  struct IBitmapSource *v61; // [rsp+48h] [rbp-B8h] BYREF
  struct IBitmapSource *v62; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v63; // [rsp+58h] [rbp-A8h] BYREF
  __m128i v64; // [rsp+60h] [rbp-A0h] BYREF
  CD3DSurface *v65; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v66; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v67[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int8 *v68; // [rsp+88h] [rbp-78h]
  __int64 v69; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v70; // [rsp+98h] [rbp-68h] BYREF
  __int128 v71; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v72[16]; // [rsp+B8h] [rbp-48h] BYREF
  enum DXGI_FORMAT v73[6]; // [rsp+C8h] [rbp-38h] BYREF
  _DWORD v74[5]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v75; // [rsp+F4h] [rbp-Ch]
  __int64 v76; // [rsp+FCh] [rbp-4h]
  __int64 v77; // [rsp+104h] [rbp+4h]
  __int128 v78; // [rsp+110h] [rbp+10h]

  v64.m128i_i64[0] = a5;
  *(_QWORD *)v67 = a1;
  *(_QWORD *)&v71 = "DWM Temp Readback (bitmap2)";
  v9 = 0;
  v74[0] = a2->right - a2->left;
  v10 = 0LL;
  v11 = 0LL;
  v12 = a2->bottom - a2->top;
  v74[2] = 1;
  v74[3] = 1;
  v75 = 1LL;
  v65 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v13 = (struct CD3DResourceManager *)*((_QWORD *)a1 + 2);
  v74[1] = v12;
  v14 = *((_DWORD *)a1 + 39);
  DWORD2(v71) = 27;
  v74[4] = v14;
  v76 = 3LL;
  v78 = v71;
  v77 = 0x20000LL;
  v15 = CD3DSurface::Create(v13, (const struct DWM_TEXTURE2D_DESC *)v74, a3, &v65);
  v17 = v65;
  v18 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x291u);
    goto LABEL_31;
  }
  CD3DDeviceLevel1::CopySurfaceRect(*(CD3DDeviceLevel1 **)(*((_QWORD *)a1 + 2) + 80LL), a1, a2, v65, 0LL, 0);
  v19 = a2->right - a2->left;
  v20 = a2->bottom - a2->top;
  *(_QWORD *)&v70.left = 0LL;
  v70.right = v19;
  v70.bottom = v20;
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(*(_QWORD *)v67 + 120LL) + 24LL))(*(_QWORD *)v67 + 120LL, v72);
  CD3DSurface::UpdatePixelFormatInfo(v17, (const struct PixelFormatInfo *)v72);
  v22 = CD3DSurface::LockRect(v17, (struct LOCKED_RECT *)v67, &v70, v21);
  v18 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x2C6u);
    v9 = 0;
    goto LABEL_31;
  }
  v24 = HrCreateBitmapFromMemoryEx(v19, v20, (const struct PixelFormatInfo *)v72, v67[0], v20 * v67[0], v68, v60, &v61);
  v18 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x2D7u);
    goto LABEL_56;
  }
  *(_QWORD *)&v71 = __PAIR64__(a7, a6);
  v26 = *(_QWORD *)v64.m128i_i64[0];
  *((_QWORD *)&v71 + 1) = __PAIR64__(v20, v19);
  v27 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int64 *))(v26 + 24))(
          v64.m128i_i64[0],
          &v71,
          2LL,
          &v63);
  v18 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x2E4u);
LABEL_56:
    v10 = v61;
    goto LABEL_30;
  }
  (*(void (__fastcall **)(__int64, enum DXGI_FORMAT *))(*(_QWORD *)v63 + 24LL))(v63, v73);
  v67[0] = GetPixelFormatSize(v73[0]) >> 3;
  v29 = IsEqualPixelFormatInfo((const struct PixelFormatInfo *)v72, (const struct PixelFormatInfo *)v73);
  v10 = v61;
  if ( v29 )
  {
    v30 = v61;
  }
  else
  {
    v56 = CFormatConverter::HrConvertBitmap(v61, (const struct PixelFormatInfo *)v73, &v62);
    v18 = v56;
    if ( v56 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, v56, 0x2F9u);
      v11 = v62;
      goto LABEL_30;
    }
    v11 = v62;
    v30 = v62;
  }
  v31 = (*(__int64 (__fastcall **)(__int64, CD3DSurface **, __int64 *))(*(_QWORD *)v63 + 48LL))(v63, &v65, &v69);
  v18 = v31;
  if ( v31 < 0 )
  {
    v59 = 766;
    goto LABEL_51;
  }
  v31 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v63 + 40LL))(v63, &v66);
  v18 = v31;
  if ( v31 < 0 )
  {
    v59 = 767;
LABEL_51:
    v58 = v31;
    goto LABEL_52;
  }
  v33 = a2;
  v34 = 0;
  v62 = (struct IBitmapSource *)a2;
  while ( 1 )
  {
    v35 = *(__m128i *)v33;
    top = a2->top;
    bottom = a2->bottom;
    left = a2->left;
    v64 = v35;
    v39 = v35.m128i_u32[1];
    right = v35.m128i_i32[2];
    LODWORD(v61) = top;
    v41 = _mm_cvtsi128_si32(v35);
    if ( left > v41 )
      v41 = left;
    v64.m128i_i32[0] = v41;
    if ( top > v35.m128i_i32[1] )
      v39 = top;
    v42 = a2->right < (unsigned __int32)v35.m128i_i32[2];
    v43 = v35.m128i_u32[3];
    v64.m128i_i32[1] = v39;
    if ( v42 )
      right = a2->right;
    v64.m128i_i32[2] = right;
    if ( bottom < v35.m128i_i32[3] )
      v43 = bottom;
    v64.m128i_i32[3] = v43;
    if ( (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v64) )
      goto LABEL_29;
    v49 = -(int)v61;
    LODWORD(v61) = v46 - v45;
    v70.left = v46 - v45;
    v70.right = v48 - v46;
    v70.top = v49 + v47;
    v32 = v66 * (unsigned __int64)(unsigned int)(v49 + v47);
    v70.bottom = v44 - v47;
    v50 = -1;
    v51 = -1;
    if ( v32 <= 0xFFFFFFFF )
      v51 = v66 * (v49 + v47);
    v18 = v32 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v32 > 0xFFFFFFFF )
      break;
    v32 = v67[0] * (unsigned __int64)(unsigned int)v61;
    v52 = -1;
    if ( v32 <= 0xFFFFFFFF )
      v52 = v67[0] * (_DWORD)v61;
    v18 = v32 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v32 > 0xFFFFFFFF )
    {
      v59 = 825;
      goto LABEL_48;
    }
    v53 = v51 + v52;
    if ( v53 >= v51 )
      v50 = v53;
    v18 = v53 < v51 ? 0x80070216 : 0;
    if ( v53 < v51 )
    {
      v59 = 827;
      goto LABEL_48;
    }
    v31 = (*(__int64 (__fastcall **)(struct IBitmapSource *, struct tagRECT *, _QWORD, _QWORD, __int64))(*(_QWORD *)v30 + 48LL))(
            v30,
            &v70,
            v66,
            (unsigned int)v65 - v50,
            v69 + v50);
    v18 = v31;
    if ( v31 < 0 )
    {
      v59 = 837;
      goto LABEL_51;
    }
LABEL_29:
    ++v34;
    v33 = (struct tagRECT *)((char *)v62 + 16);
    v62 = (struct IBitmapSource *)((char *)v62 + 16);
    if ( v34 )
      goto LABEL_30;
  }
  v59 = 821;
LABEL_48:
  v58 = v18;
LABEL_52:
  MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v58, v59);
LABEL_30:
  v9 = 1;
LABEL_31:
  if ( v63 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
  if ( v11 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v10 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v9 )
  {
    v54 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 80LL) + 640LL);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v54 + 120LL))(
      v54,
      *((_QWORD *)v17 + 16),
      *((unsigned int *)v17 + 34));
  }
  if ( v17 )
    CD3DResource::DestroyAndRelease(v17);
  return v18;
}
