/*
 * XREFs of ?LockForRead@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180229F80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18009B46C (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015930C (-reset@-$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x18015AEE4 (-HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?GetSourceBitmapCacheSource@CColorKeyBitmap@@AEBA?AV?$com_ptr_t@VID2DBitmapCacheSource@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180229EFC (-GetSourceBitmapCacheSource@CColorKeyBitmap@@AEBA-AV-$com_ptr_t@VID2DBitmapCacheSource@@Uerr_ret.c)
 *     ?ApplyColorKeyToBitmap@CBitmapColorKey@@SAJPEAVIBitmapDest@@PEBVCColorKey@@@Z @ 0x180233508 (-ApplyColorKeyToBitmap@CBitmapColorKey@@SAJPEAVIBitmapDest@@PEBVCColorKey@@@Z.c)
 */

__int64 __fastcall CColorKeyBitmap::LockForRead(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  int v4; // eax
  int v7; // eax
  __int64 v8; // rcx
  int v9; // ebx
  int v10; // r9d
  struct IBitmapDest *v11; // rcx
  unsigned int v12; // edi
  unsigned int v13; // ebx
  const struct PixelFormatInfo *v14; // rax
  int v15; // eax
  struct IBitmapDest *v16; // rbx
  _QWORD *SourceBitmapCacheSource; // rax
  unsigned int v19; // [rsp+20h] [rbp-39h]
  struct IBitmapDest *v20; // [rsp+30h] [rbp-29h] BYREF
  __int64 v21; // [rsp+38h] [rbp-21h] BYREF
  unsigned int v22; // [rsp+40h] [rbp-19h] BYREF
  unsigned int v23; // [rsp+44h] [rbp-15h] BYREF
  __int64 v24; // [rsp+48h] [rbp-11h] BYREF
  _DWORD v25[4]; // [rsp+50h] [rbp-9h] BYREF
  _DWORD v26[2]; // [rsp+60h] [rbp+7h] BYREF
  _BYTE v27[4]; // [rsp+68h] [rbp+Fh] BYREF
  _BYTE v28[4]; // [rsp+6Ch] [rbp+13h] BYREF
  __int64 v29[2]; // [rsp+70h] [rbp+17h] BYREF

  v4 = a2[2] - *a2;
  v20 = 0LL;
  v21 = 0LL;
  v25[0] = 0;
  v25[1] = 0;
  v23 = 0;
  v24 = 0LL;
  v22 = 0;
  v26[0] = 0;
  v26[1] = 0;
  v25[2] = v4;
  v7 = a2[3] - a2[1];
  *a3 = 0LL;
  v25[3] = v7;
  (*(void (__fastcall **)(__int64, _BYTE *, _BYTE *))(*(_QWORD *)a1 + 32LL))(a1, v27, v28);
  if ( !TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain((__int64)v26, (__int64)a2) )
  {
    v9 = -2147024809;
    v19 = 167;
LABEL_3:
    v10 = v9;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v10, v19);
    goto LABEL_22;
  }
  v11 = v20;
  v20 = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(struct IBitmapDest *))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = a2[3] - a2[1];
  v13 = a2[2] - *a2;
  v14 = (const struct PixelFormatInfo *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, v29);
  v15 = HrCreateDestBitmap(v13, v12, v14, &v20);
  v9 = v15;
  if ( v15 < 0 )
  {
    v19 = 174;
    goto LABEL_20;
  }
  v16 = v20;
  wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset(&v21);
  v15 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _DWORD *, __int64, __int64 *))(*(_QWORD *)v16 + 24LL))(
          v16,
          v25,
          2LL,
          &v21);
  v9 = v15;
  if ( v15 < 0 )
  {
    v19 = 178;
    goto LABEL_20;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v21 + 40LL))(v21, &v23);
  v9 = v15;
  if ( v15 < 0 )
  {
    v19 = 180;
    goto LABEL_20;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(*(_QWORD *)v21 + 48LL))(v21, &v22, &v24);
  v9 = v15;
  if ( v15 < 0 )
  {
    v19 = 181;
    goto LABEL_20;
  }
  SourceBitmapCacheSource = CColorKeyBitmap::GetSourceBitmapCacheSource(a1 - 16, v29);
  v9 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD, __int64))(*(_QWORD *)*SourceBitmapCacheSource + 56LL))(
         *SourceBitmapCacheSource,
         a2,
         v23,
         v22,
         v24);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v29);
  if ( v9 < 0 )
  {
    v19 = 187;
    goto LABEL_3;
  }
  wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset(&v21);
  v15 = CBitmapColorKey::ApplyColorKeyToBitmap(v20, (const struct CColorKey *)(a1 + 16));
  v9 = v15;
  if ( v15 < 0 )
  {
    v19 = 191;
    goto LABEL_20;
  }
  v15 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _DWORD *, __int64, _QWORD *))(*(_QWORD *)v20 + 24LL))(
          v20,
          v25,
          1LL,
          a3);
  v9 = v15;
  if ( v15 < 0 )
  {
    v19 = 194;
LABEL_20:
    v10 = v15;
    goto LABEL_21;
  }
LABEL_22:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v21);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v20);
  return (unsigned int)v9;
}
