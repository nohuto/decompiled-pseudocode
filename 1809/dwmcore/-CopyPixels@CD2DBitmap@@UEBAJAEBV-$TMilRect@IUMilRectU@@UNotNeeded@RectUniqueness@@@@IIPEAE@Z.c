/*
 * XREFs of ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1800177F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x18001798C (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x180020FB0 (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x18007F2E4 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x180092B64 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180096A0C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18009B46C (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18009B4BC (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::CopyPixels(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  int v5; // eax
  struct IBitmapSource *v6; // rdi
  int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // ecx
  int v14; // ecx
  __int64 v15; // r15
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // ebx
  int v19; // eax
  unsigned __int8 PixelFormatSize; // al
  __int64 v22; // r11
  int v23; // r9d
  unsigned int v24; // [rsp+20h] [rbp-41h]
  struct IUnknown *v25; // [rsp+30h] [rbp-31h]
  unsigned int v26; // [rsp+50h] [rbp-11h] BYREF
  struct IBitmapSource *v27; // [rsp+58h] [rbp-9h] BYREF
  __int64 v28; // [rsp+60h] [rbp-1h] BYREF
  struct IUnknown *v29; // [rsp+68h] [rbp+7h] BYREF
  unsigned __int8 *v30; // [rsp+70h] [rbp+Fh] BYREF
  int v31; // [rsp+78h] [rbp+17h] BYREF
  int v32; // [rsp+7Ch] [rbp+1Bh]
  BOOL v33; // [rsp+80h] [rbp+1Fh]
  int v34; // [rsp+84h] [rbp+23h]
  unsigned int v35; // [rsp+C0h] [rbp+5Fh] BYREF

  v5 = *(_DWORD *)(a1 + 56);
  v6 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v31 = 0;
  v32 = 0;
  v33 = v5;
  v11 = *(_DWORD *)(a1 + 60);
  v27 = 0LL;
  v34 = v11;
  if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(&v31)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v12) )
  {
    v18 = -2147024809;
    v24 = 250;
    v23 = -2147024809;
  }
  else
  {
    v14 = *(_DWORD *)(a1 + 72);
    v32 = *(_DWORD *)(a1 + 108);
    v31 = v14;
    v33 = v14 == 10;
    if ( CD2DBitmap::TryFastWarpLock((CD2DBitmap *)(a1 - 112), &v30, &v35, &v26, &v29) )
    {
      PixelFormatSize = GetPixelFormatSize(*(enum DXGI_FORMAT *)(a1 + 72));
      v22 = *a2 * (PixelFormatSize >> 3) + v35 * a2[1];
      v19 = CBitmap::CopyPixelsHelper(
              (enum DXGI_FORMAT)*(_DWORD *)(a1 + 72),
              a2[2] - *a2,
              a2[3] - a2[1],
              v35,
              v26 - (unsigned int)v22,
              &v30[v22],
              a3,
              a4,
              a5);
      v18 = v19;
      if ( v19 >= 0 )
        goto LABEL_7;
      v24 = 286;
    }
    else
    {
      v15 = *(_QWORD *)(*(_QWORD *)(a1 - 88) + 24LL);
      v16 = HrCreateBitmapFromMemoryEx(
              a2[2] - *a2,
              a2[3] - a2[1],
              (const struct PixelFormatInfo *)&v31,
              a3,
              a4,
              a5,
              v25,
              &v27);
      v18 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x12Du);
        v6 = v27;
        goto LABEL_7;
      }
      v6 = v27;
      v19 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))v27)(
              v27,
              &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
              &v28);
      v18 = v19;
      if ( v19 < 0 )
      {
        v24 = 304;
      }
      else
      {
        v19 = CD3DDeviceLevel1::CopyTexture(v15, *(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 144), a2, v28);
        v18 = v19;
        if ( v19 >= 0 )
          goto LABEL_7;
        v24 = 312;
      }
    }
    v23 = v19;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v23, v24);
LABEL_7:
  if ( v29 )
    ((void (__fastcall *)(struct IUnknown *))v29->lpVtbl->Release)(v29);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v6 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v6 + 16LL))(v6);
  return v18;
}
