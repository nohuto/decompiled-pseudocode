/*
 * XREFs of ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180022B80
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x1800188DC (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?TryFastWarpLock@CD2DBitmap@@AEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x180022D90 (-TryFastWarpLock@CD2DBitmap@@AEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18003BEC8 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18003BF18 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x18003E828 (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180042214 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x180044204 (--0CBitmapLock@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x18016344C (-HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 */

__int64 __fastcall CD2DBitmap::LockForRead(__int64 a1, int *a2, _QWORD *a3)
{
  int v4; // eax
  CBitmapLock *v7; // rdi
  __int64 v8; // rdx
  unsigned int v9; // ecx
  int v10; // ecx
  struct IBitmapUnlock *v11; // rbx
  unsigned __int8 PixelFormatSize; // al
  unsigned int v13; // esi
  unsigned int v14; // r12d
  CBitmapLock *v15; // rax
  unsigned int v16; // ecx
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // ebx
  int v21; // r9d
  __int64 v22; // rdi
  int v23; // eax
  int v24; // eax
  unsigned int v25; // [rsp+20h] [rbp-49h]
  struct IBitmapDest *v26; // [rsp+60h] [rbp-9h] BYREF
  struct IUnknown *v27; // [rsp+68h] [rbp-1h] BYREF
  struct IUnknown *v28; // [rsp+70h] [rbp+7h] BYREF
  unsigned __int8 *v29; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v30; // [rsp+80h] [rbp+17h] BYREF
  int v31; // [rsp+88h] [rbp+1Fh]
  int v32; // [rsp+8Ch] [rbp+23h]
  unsigned int v33; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v34; // [rsp+E8h] [rbp+7Fh] BYREF

  v31 = *(_DWORD *)(a1 + 56);
  v4 = *(_DWORD *)(a1 + 60);
  v27 = 0LL;
  v26 = 0LL;
  v7 = 0LL;
  v28 = 0LL;
  v30 = 0LL;
  v32 = v4;
  if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(&v30)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v8) )
  {
    v19 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024809, 0x133u, 0LL);
LABEL_27:
    if ( v7 )
      (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v7 + 16LL))(v7);
    goto LABEL_29;
  }
  v10 = *(_DWORD *)(a1 + 72);
  HIDWORD(v30) = *(_DWORD *)(a1 + 108);
  LODWORD(v30) = v10;
  v31 = v10 == 10;
  if ( CD2DBitmap::TryFastWarpLock((CD2DBitmap *)(a1 - 112), &v29, &v33, &v34, &v27) )
  {
    v11 = (struct IBitmapUnlock *)((a1 + 8) & -(__int64)(a1 != 112));
    PixelFormatSize = GetPixelFormatSize(*(enum DXGI_FORMAT *)(a1 + 72));
    v13 = v33;
    v14 = v33 * a2[1] + *a2 * (PixelFormatSize >> 3);
    v15 = (CBitmapLock *)operator new(0x90uLL);
    if ( v15 )
      v7 = CBitmapLock::CBitmapLock(v15);
    if ( v7 )
    {
      (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v7 + 8LL))(v7);
      v17 = CBitmapLock::HrInit(
              v7,
              v11,
              a2[2] - *a2,
              a2[3] - a2[1],
              (const struct PixelFormatInfo *)&v30,
              v13,
              v34 - v14,
              &v29[v14],
              WICBitmapLockRead,
              0,
              v27);
      v19 = v17;
      if ( v17 >= 0 )
      {
        *a3 = (char *)v7 + 16;
        goto LABEL_9;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x159u, 0LL);
      goto LABEL_27;
    }
    v19 = -2147024882;
    v21 = -2147024882;
    v25 = 333;
    goto LABEL_17;
  }
  v22 = *(_QWORD *)(*(_QWORD *)(a1 - 88) + 24LL);
  v23 = HrCreateDestBitmap(a2[2] - *a2, a2[3] - a2[1], (const struct PixelFormatInfo *)&v30, &v26);
  v19 = v23;
  if ( v23 < 0 )
  {
    v25 = 365;
    goto LABEL_15;
  }
  v23 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))(a1 + 24))(
          *(_QWORD *)(a1 + 24),
          &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
          &v28);
  v19 = v23;
  if ( v23 < 0 )
  {
    v25 = 368;
    goto LABEL_15;
  }
  v24 = CD3DDeviceLevel1::CopyTexture(v22, v28, *(unsigned int *)(a1 + 144), a2, (__int64 *)v26);
  v19 = v24;
  if ( v24 < 0 )
  {
    v21 = v24;
    v25 = 376;
    goto LABEL_17;
  }
  v23 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _QWORD, __int64, _QWORD *))(*(_QWORD *)v26 + 24LL))(
          v26,
          0LL,
          1LL,
          a3);
  v19 = v23;
  if ( v23 < 0 )
  {
    v25 = 383;
LABEL_15:
    v21 = v23;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v21, v25, 0LL);
  }
LABEL_29:
  if ( v27 )
    ((void (__fastcall *)(struct IUnknown *))v27->lpVtbl->Release)(v27);
LABEL_9:
  if ( v28 )
    ((void (__fastcall *)(struct IUnknown *))v28->lpVtbl->Release)(v28);
  if ( v26 )
    (*(void (__fastcall **)(struct IBitmapDest *))(*(_QWORD *)v26 + 16LL))(v26);
  return v19;
}
