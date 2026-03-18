/*
 * XREFs of ?LockForRead@CHwTextureRenderTarget@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180203170
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x18001798C (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18009B46C (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18009B4BC (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x18015AEE4 (-HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 */

__int64 __fastcall CHwTextureRenderTarget::LockForRead(__int64 a1, int *a2, __int64 a3)
{
  bool v6; // zf
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r9d
  unsigned int v14; // [rsp+20h] [rbp-28h]
  _DWORD v15[6]; // [rsp+30h] [rbp-18h] BYREF
  struct IBitmapDest *v16; // [rsp+50h] [rbp+8h] BYREF

  v15[0] = 0;
  v15[1] = 0;
  v16 = 0LL;
  v6 = *(_QWORD *)(a1 + 16) == 0LL;
  v15[2] = *(_DWORD *)(a1 - 216);
  v15[3] = *(_DWORD *)(a1 - 212);
  if ( v6 )
  {
    v7 = -2003292412;
    v14 = 775;
LABEL_13:
    v12 = v7;
    goto LABEL_14;
  }
  if ( !TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain((__int64)v15, (__int64)a2)
    || TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2) )
  {
    v7 = -2147024809;
    v14 = 782;
    goto LABEL_13;
  }
  v9 = HrCreateDestBitmap(a2[2] - *a2, *(_DWORD *)(v8 + 12) - a2[1], (const struct PixelFormatInfo *)(a1 + 24), &v16);
  v7 = v9;
  if ( v9 < 0 )
  {
    v14 = 791;
  }
  else
  {
    v10 = CD3DDeviceLevel1::CopyTexture(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 80LL),
            *(struct IUnknown **)(*(_QWORD *)(a1 - 24) + 128LL),
            *(unsigned int *)(*(_QWORD *)(a1 - 24) + 136LL),
            a2,
            (__int64)v16);
    v7 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x31Fu);
      goto LABEL_15;
    }
    v9 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _QWORD, __int64, __int64))(*(_QWORD *)v16 + 24LL))(
           v16,
           0LL,
           1LL,
           a3);
    v7 = v9;
    if ( v9 >= 0 )
      goto LABEL_15;
    v14 = 806;
  }
  v12 = v9;
LABEL_14:
  MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v12, v14);
LABEL_15:
  if ( v16 )
    (*(void (__fastcall **)(struct IBitmapDest *))(*(_QWORD *)v16 + 16LL))(v16);
  return v7;
}
