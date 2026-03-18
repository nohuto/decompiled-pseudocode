/*
 * XREFs of ?CopyPixels@CHwTextureRenderTarget@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180163180
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x1800188DC (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x180039930 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18003BEC8 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18003BF18 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwTextureRenderTarget::CopyPixels(__int64 a1, int *a2, __int64 a3, __int64 a4, unsigned __int8 *a5)
{
  int v5; // eax
  struct IBitmapSource *v6; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  unsigned int v12; // r10d
  unsigned int v13; // r11d
  signed int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // r9d
  unsigned int v19; // [rsp+20h] [rbp-40h]
  struct IUnknown *v20; // [rsp+30h] [rbp-30h]
  __int64 *v21; // [rsp+40h] [rbp-20h] BYREF
  _DWORD v22[6]; // [rsp+48h] [rbp-18h] BYREF
  struct IBitmapSource *v23; // [rsp+80h] [rbp+20h] BYREF

  v5 = *(_DWORD *)(a1 - 152);
  v6 = 0LL;
  v21 = 0LL;
  v22[0] = 0;
  v22[1] = 0;
  v22[2] = v5;
  v9 = *(_DWORD *)(a1 - 148);
  v23 = 0LL;
  v22[3] = v9;
  if ( !*(_QWORD *)(a1 + 16) )
  {
    v10 = -2003292412;
    v19 = 725;
LABEL_13:
    v17 = v10;
    goto LABEL_14;
  }
  if ( !TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain((__int64)v22, (__int64)a2)
    || TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2) )
  {
    v10 = -2147024809;
    v19 = 730;
    goto LABEL_13;
  }
  v14 = HrCreateBitmapFromMemoryEx(
          a2[2] - *a2,
          *(_DWORD *)(v11 + 12) - a2[1],
          (const struct PixelFormatInfo *)(a1 + 24),
          v13,
          v12,
          a5,
          v20,
          &v23);
  v10 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x2E6u, 0LL);
    v6 = v23;
    goto LABEL_15;
  }
  v6 = v23;
  v16 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 **))v23)(
          v23,
          &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
          &v21);
  v10 = v16;
  if ( v16 < 0 )
  {
    v19 = 745;
  }
  else
  {
    v16 = CD3DDeviceLevel1::CopyTexture(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 80LL),
            *(struct IUnknown **)(*(_QWORD *)(a1 - 24) + 128LL),
            *(unsigned int *)(*(_QWORD *)(a1 - 24) + 136LL),
            a2,
            v21);
    v10 = v16;
    if ( v16 >= 0 )
      goto LABEL_15;
    v19 = 753;
  }
  v17 = v16;
LABEL_14:
  MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v17, v19, 0LL);
LABEL_15:
  if ( v21 )
    (*(void (__fastcall **)(__int64 *))(*v21 + 16))(v21);
  if ( v6 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v6 + 16LL))(v6);
  return v10;
}
