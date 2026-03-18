/*
 * XREFs of ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x1800230A8
 * Callers:
 *     ?GetBits@CHwSurfaceRenderTarget@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z @ 0x180022FF0 (-GetBits@CHwSurfaceRenderTarget@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z.c)
 * Callees:
 *     ?DestroyAndRelease@CD3DResource@@QEAAXXZ @ 0x1800234EC (-DestroyAndRelease@CD3DResource@@QEAAXXZ.c)
 *     ?IsEqualPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@0@Z @ 0x18002363C (-IsEqualPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@0@Z.c)
 *     ?LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z @ 0x180023694 (-LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z.c)
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x180023750 (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAV1@@Z @ 0x1800238B4 (-Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_D.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x180047E10 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800484B8 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x18004A4F4 (-UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180051738 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x180222FA0 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CD3DSurface::CopyPixelsToBitmap(
        struct CD3DSurface *a1,
        struct tagRECT *a2,
        struct D3D11_SUBRESOURCE_DATA *a3,
        __int64 a4,
        __int64 *a5,
        int a6,
        int a7)
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
  int v29; // r12d
  bool v30; // al
  int v31; // eax
  __int64 v32; // rcx
  struct tagRECT *v33; // r13
  unsigned int top; // eax
  unsigned int left; // r8d
  unsigned int bottom; // edx
  LONG v37; // r10d
  LONG right; // r11d
  unsigned int v39; // r9d
  bool v40; // cf
  LONG v41; // eax
  unsigned int v42; // edx
  int v43; // r8d
  int v44; // r9d
  int v45; // r10d
  int v46; // r11d
  unsigned __int64 v47; // r9
  unsigned __int64 v48; // rcx
  __int64 v49; // rcx
  int v51; // eax
  unsigned int v52; // ecx
  int v53; // r9d
  unsigned int v54; // [rsp+20h] [rbp-E0h]
  struct IUnknown *v55; // [rsp+30h] [rbp-D0h]
  struct IBitmapSource *v56; // [rsp+48h] [rbp-B8h] BYREF
  struct tagRECT v57; // [rsp+50h] [rbp-B0h] BYREF
  struct IBitmapSource *v58; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v59; // [rsp+68h] [rbp-98h] BYREF
  CD3DSurface *v60; // [rsp+70h] [rbp-90h] BYREF
  struct IBitmapSource *v61; // [rsp+78h] [rbp-88h]
  unsigned int v62; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v63; // [rsp+88h] [rbp-78h]
  __int64 v64; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int8 *v65[2]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v66[16]; // [rsp+A8h] [rbp-58h] BYREF
  enum DXGI_FORMAT v67[4]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v68[6]; // [rsp+C8h] [rbp-38h] BYREF
  _DWORD v69[5]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v70; // [rsp+F4h] [rbp-Ch]
  __int64 v71; // [rsp+FCh] [rbp-4h]
  __int64 v72; // [rsp+104h] [rbp+4h]
  __int128 v73; // [rsp+110h] [rbp+10h]

  v63 = a5;
  v61 = a1;
  v65[0] = "DWM Temp Readback (bitmap2)";
  v9 = 0;
  v69[0] = a2->right - a2->left;
  v10 = 0LL;
  v11 = 0LL;
  v12 = a2->bottom - a2->top;
  v69[2] = 1;
  v69[3] = 1;
  v70 = 1LL;
  v60 = 0LL;
  v56 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v13 = (struct CD3DResourceManager *)*((_QWORD *)a1 + 2);
  v69[1] = v12;
  v14 = *((_DWORD *)a1 + 39);
  LODWORD(v65[1]) = 27;
  v69[4] = v14;
  v71 = 3LL;
  v73 = *(_OWORD *)v65;
  v72 = 0x20000LL;
  v15 = CD3DSurface::Create(v13, (const struct DWM_TEXTURE2D_DESC *)v69, a3, &v60);
  v17 = v60;
  v18 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x28Eu, 0LL);
  }
  else
  {
    CD3DDeviceLevel1::CopySurfaceRect(*(CD3DDeviceLevel1 **)(*((_QWORD *)a1 + 2) + 80LL), a1, a2, v60, 0LL, 0);
    v19 = a2->right - a2->left;
    v20 = a2->bottom - a2->top;
    v57.left = 0;
    v57.top = 0;
    v57.right = v19;
    v57.bottom = v20;
    (*(void (__fastcall **)(__int64, _BYTE *))(*((_QWORD *)v61 + 15) + 24LL))((__int64)v61 + 120, v66);
    CD3DSurface::UpdatePixelFormatInfo(v17, (const struct PixelFormatInfo *)v66);
    v22 = CD3DSurface::LockRect(v17, (struct LOCKED_RECT *)v65, &v57, v21);
    v18 = v22;
    if ( v22 >= 0 )
    {
      v24 = HrCreateBitmapFromMemoryEx(
              v19,
              v20,
              (const struct PixelFormatInfo *)v66,
              (unsigned int)v65[0],
              v20 * LODWORD(v65[0]),
              v65[1],
              v55,
              &v56);
      v18 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x2D4u, 0LL);
      }
      else
      {
        v68[0] = a6;
        v68[1] = a7;
        v26 = *v63;
        v68[2] = v19;
        v68[3] = v20;
        v27 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, __int64, __int64 *))(v26 + 24))(v63, v68, 2LL, &v59);
        v29 = 0;
        v18 = v27;
        if ( v27 >= 0 )
        {
          (*(void (__fastcall **)(__int64, enum DXGI_FORMAT *))(*(_QWORD *)v59 + 24LL))(v59, v67);
          LODWORD(v63) = GetPixelFormatSize(v67[0]) >> 3;
          v30 = IsEqualPixelFormatInfo((const struct PixelFormatInfo *)v66, (const struct PixelFormatInfo *)v67);
          v10 = v56;
          if ( v30 )
          {
            v61 = v56;
LABEL_7:
            v31 = (*(__int64 (__fastcall **)(__int64, CD3DSurface **, __int64 *))(*(_QWORD *)v59 + 48LL))(
                    v59,
                    &v60,
                    &v64);
            v18 = v31;
            if ( v31 < 0 )
            {
              v54 = 763;
            }
            else
            {
              v31 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v59 + 40LL))(v59, &v62);
              v18 = v31;
              if ( v31 >= 0 )
              {
                v33 = a2;
                while ( 1 )
                {
                  top = a2->top;
                  left = a2->left;
                  bottom = a2->bottom;
                  v57 = *v33;
                  v37 = v57.top;
                  right = v57.right;
                  LODWORD(v56) = top;
                  v39 = _mm_cvtsi128_si32((__m128i)v57);
                  LODWORD(v58) = v57.bottom;
                  if ( left > v39 )
                    v39 = left;
                  v57.left = v39;
                  if ( top > v57.top )
                    v37 = top;
                  v40 = a2->right < (unsigned int)v57.right;
                  v41 = v57.bottom;
                  v57.top = v37;
                  if ( v40 )
                    right = a2->right;
                  v57.right = right;
                  if ( bottom < v57.bottom )
                    v41 = bottom;
                  v57.bottom = v41;
                  if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v57) )
                  {
                    if ( v42 >= (unsigned int)v58 )
                      v42 = (unsigned int)v58;
                    v32 = (unsigned int)(v44 - v43);
                    LODWORD(v65[0]) = v44 - v43;
                    LODWORD(v65[1]) = v46 - v44;
                    v47 = v62 * (unsigned __int64)(unsigned int)(v45 - (_DWORD)v56);
                    HIDWORD(v65[1]) = v42 - v45;
                    HIDWORD(v65[0]) = v45 - (_DWORD)v56;
                    if ( v47 > 0xFFFFFFFF )
                    {
                      v53 = -2147024362;
                      v18 = -2147024362;
                      v54 = 818;
                      goto LABEL_44;
                    }
                    v48 = (unsigned int)v63 * v32;
                    if ( v48 > 0xFFFFFFFF )
                    {
                      v18 = -2147024362;
                      MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, -2147024362, 0x336u, 0LL);
                      goto LABEL_26;
                    }
                    if ( (int)v48 + (int)v47 < (unsigned int)v47 )
                    {
                      v18 = -2147024362;
                      MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, -2147024362, 0x338u, 0LL);
                      goto LABEL_26;
                    }
                    v31 = (*(__int64 (__fastcall **)(struct IBitmapSource *, unsigned __int8 **, _QWORD, _QWORD, __int64))(*(_QWORD *)v61 + 48LL))(
                            v61,
                            v65,
                            v62,
                            (unsigned int)((_DWORD)v60 - (v48 + v47)),
                            v64 + (unsigned int)(v48 + v47));
                    v18 = v31;
                    if ( v31 < 0 )
                    {
                      v54 = 834;
                      goto LABEL_42;
                    }
                  }
                  ++v29;
                  ++v33;
                  if ( v29 )
                    goto LABEL_26;
                }
              }
              v54 = 764;
            }
LABEL_42:
            v53 = v31;
LABEL_44:
            MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v53, v54, 0LL);
            goto LABEL_26;
          }
          v51 = CFormatConverter::HrConvertBitmap(v56, (const struct PixelFormatInfo *)v67, &v58);
          v18 = v51;
          if ( v51 >= 0 )
          {
            v11 = v58;
            v61 = v58;
            goto LABEL_7;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v51, 0x2F6u, 0LL);
          v11 = v58;
LABEL_26:
          v9 = 1;
          goto LABEL_27;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x2E1u, 0LL);
      }
      v10 = v56;
      goto LABEL_26;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x2C3u, 0LL);
    v9 = 0;
  }
LABEL_27:
  if ( v59 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
  if ( v11 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v10 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v9 )
  {
    v49 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 80LL) + 640LL);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v49 + 120LL))(
      v49,
      *((_QWORD *)v17 + 16),
      *((unsigned int *)v17 + 34));
  }
  if ( v17 )
    CD3DResource::DestroyAndRelease(v17);
  return v18;
}
