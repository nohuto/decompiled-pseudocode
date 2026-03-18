/*
 * XREFs of ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180020DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x18001798C (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x180020FB0 (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 *     ??2CBitmapLock@@SAPEAX_K@Z @ 0x1800714BC (--2CBitmapLock@@SAPEAX_K@Z.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x1800968D4 (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180096A0C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x180096A38 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18009B46C (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18009B4BC (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x18015AEE4 (-HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 */

__int64 __fastcall CD2DBitmap::LockForRead(__int64 a1, int *a2, _QWORD *a3)
{
  int v3; // eax
  CBitmapLock *v4; // rdi
  __int64 v8; // rdx
  unsigned int v9; // ecx
  int v10; // ecx
  struct IBitmapUnlock *v11; // rbx
  unsigned __int8 PixelFormatSize; // al
  unsigned int v13; // esi
  unsigned int v14; // r12d
  unsigned __int64 v15; // rcx
  CBitmapLock *v16; // rax
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // ebx
  int v22; // r9d
  __int64 v23; // rdi
  int v24; // eax
  int v25; // eax
  unsigned int v26; // [rsp+20h] [rbp-49h]
  struct IBitmapDest *v27; // [rsp+60h] [rbp-9h] BYREF
  struct IUnknown *v28; // [rsp+68h] [rbp-1h] BYREF
  struct IUnknown *v29; // [rsp+70h] [rbp+7h] BYREF
  unsigned __int8 *v30; // [rsp+78h] [rbp+Fh] BYREF
  int v31; // [rsp+80h] [rbp+17h] BYREF
  int v32; // [rsp+84h] [rbp+1Bh]
  BOOL v33; // [rsp+88h] [rbp+1Fh]
  int v34; // [rsp+8Ch] [rbp+23h]
  unsigned int v35; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v36; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = *(_DWORD *)(a1 + 56);
  v4 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  v29 = 0LL;
  v31 = 0;
  v32 = 0;
  v33 = v3;
  v34 = *(_DWORD *)(a1 + 60);
  if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(&v31)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v8) )
  {
    v20 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024809, 0x155u);
LABEL_27:
    if ( v4 )
      (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v4 + 16LL))(v4);
    goto LABEL_29;
  }
  v10 = *(_DWORD *)(a1 + 72);
  v32 = *(_DWORD *)(a1 + 108);
  v31 = v10;
  v33 = v10 == 10;
  if ( CD2DBitmap::TryFastWarpLock((CD2DBitmap *)(a1 - 112), &v30, &v35, &v36, &v28) )
  {
    v11 = (struct IBitmapUnlock *)((a1 + 8) & -(__int64)(a1 != 112));
    PixelFormatSize = GetPixelFormatSize(*(enum DXGI_FORMAT *)(a1 + 72));
    v13 = v35;
    v14 = v35 * a2[1] + *a2 * (PixelFormatSize >> 3);
    v16 = (CBitmapLock *)CBitmapLock::operator new(v15);
    if ( v16 )
      v4 = CBitmapLock::CBitmapLock(v16);
    if ( v4 )
    {
      (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v4 + 8LL))(v4);
      v18 = CBitmapLock::HrInit(
              v4,
              v11,
              a2[2] - *a2,
              a2[3] - a2[1],
              (const struct PixelFormatInfo *)&v31,
              v13,
              v36 - v14,
              &v30[v14],
              WICBitmapLockRead,
              0,
              v28);
      v20 = v18;
      if ( v18 >= 0 )
      {
        *a3 = (char *)v4 + 16;
        goto LABEL_9;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x17Bu);
      goto LABEL_27;
    }
    v20 = -2147024882;
    v26 = 367;
    v22 = -2147024882;
    goto LABEL_17;
  }
  v23 = *(_QWORD *)(*(_QWORD *)(a1 - 88) + 24LL);
  v24 = HrCreateDestBitmap(a2[2] - *a2, a2[3] - a2[1], (const struct PixelFormatInfo *)&v31, &v27);
  v20 = v24;
  if ( v24 < 0 )
  {
    v26 = 399;
    goto LABEL_15;
  }
  v24 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))(a1 + 24))(
          *(_QWORD *)(a1 + 24),
          &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
          &v29);
  v20 = v24;
  if ( v24 < 0 )
  {
    v26 = 402;
    goto LABEL_15;
  }
  v25 = CD3DDeviceLevel1::CopyTexture(v23, v29, *(unsigned int *)(a1 + 144), a2, (__int64)v27);
  v20 = v25;
  if ( v25 < 0 )
  {
    v26 = 410;
    v22 = v25;
    goto LABEL_17;
  }
  v24 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _QWORD, __int64, _QWORD *))(*(_QWORD *)v27 + 24LL))(
          v27,
          0LL,
          1LL,
          a3);
  v20 = v24;
  if ( v24 < 0 )
  {
    v26 = 417;
LABEL_15:
    v22 = v24;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v22, v26);
  }
LABEL_29:
  if ( v28 )
    ((void (__fastcall *)(struct IUnknown *))v28->lpVtbl->Release)(v28);
LABEL_9:
  if ( v29 )
    ((void (__fastcall *)(struct IUnknown *))v29->lpVtbl->Release)(v29);
  if ( v27 )
    (*(void (__fastcall **)(struct IBitmapDest *))(*(_QWORD *)v27 + 16LL))(v27);
  return v20;
}
