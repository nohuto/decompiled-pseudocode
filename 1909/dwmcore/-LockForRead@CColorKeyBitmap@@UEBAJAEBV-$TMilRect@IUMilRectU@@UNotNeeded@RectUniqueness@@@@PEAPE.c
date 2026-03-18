/*
 * XREFs of ?LockForRead@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1802565B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800516E8 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015D370 (-reset@-$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x180161D5C (-HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?GetSourceBitmapCacheSource@CColorKeyBitmap@@AEBA?AV?$com_ptr_t@VID2DBitmapCacheSource@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18025652C (-GetSourceBitmapCacheSource@CColorKeyBitmap@@AEBA-AV-$com_ptr_t@VID2DBitmapCacheSource@@Uerr_ret.c)
 *     ?ApplyColorKeyToBitmap@CBitmapColorKey@@SAJPEAVIBitmapDest@@PEBVCColorKey@@@Z @ 0x18025FA9C (-ApplyColorKeyToBitmap@CBitmapColorKey@@SAJPEAVIBitmapDest@@PEBVCColorKey@@@Z.c)
 */

__int64 __fastcall CColorKeyBitmap::LockForRead(__int64 *a1, _DWORD *a2, _QWORD *a3)
{
  __int64 v6; // rax
  void (__fastcall *v7)(__int64 *, _BYTE *, _BYTE *); // rax
  __int64 v8; // rcx
  int v9; // ebx
  unsigned int v10; // r9d
  unsigned int v11; // edi
  unsigned int v12; // ebx
  const struct PixelFormatInfo *v13; // rax
  int v14; // eax
  struct IBitmapDest *v15; // rbx
  __int64 (__fastcall *v16)(struct IBitmapDest *, __int64 *, __int64, __int64 *); // rdi
  _QWORD *SourceBitmapCacheSource; // rax
  unsigned int v19; // [rsp+20h] [rbp-49h]
  __int64 v20; // [rsp+30h] [rbp-39h] BYREF
  struct IBitmapDest *v21; // [rsp+38h] [rbp-31h] BYREF
  unsigned int v22; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v23; // [rsp+44h] [rbp-25h] BYREF
  __int64 v24; // [rsp+48h] [rbp-21h] BYREF
  __int64 v25; // [rsp+50h] [rbp-19h] BYREF
  int v26; // [rsp+58h] [rbp-11h]
  int v27; // [rsp+5Ch] [rbp-Dh]
  __int64 v28; // [rsp+60h] [rbp-9h] BYREF
  _BYTE v29[4]; // [rsp+68h] [rbp-1h] BYREF
  _BYTE v30[4]; // [rsp+6Ch] [rbp+3h] BYREF
  __int64 v31[2]; // [rsp+70h] [rbp+7h] BYREF

  v26 = a2[2] - *a2;
  v27 = a2[3] - a2[1];
  *a3 = 0LL;
  v6 = *a1;
  v21 = 0LL;
  v20 = 0LL;
  v25 = 0LL;
  v7 = *(void (__fastcall **)(__int64 *, _BYTE *, _BYTE *))(v6 + 32);
  v23 = 0;
  v24 = 0LL;
  v22 = 0;
  v28 = 0LL;
  v7(a1, v29, v30);
  if ( !TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain((__int64)&v28, (__int64)a2) )
  {
    v9 = -2147024809;
    v19 = 165;
LABEL_3:
    v10 = v9;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v10, v19, 0LL);
    goto LABEL_20;
  }
  v11 = a2[3] - a2[1];
  v12 = a2[2] - *a2;
  v13 = (const struct PixelFormatInfo *)(*(__int64 (__fastcall **)(__int64 *, __int64 *))(*a1 + 24))(a1, v31);
  v14 = HrCreateDestBitmap(v12, v11, v13, &v21);
  v9 = v14;
  if ( v14 < 0 )
  {
    v19 = 172;
    goto LABEL_18;
  }
  v15 = v21;
  v16 = *(__int64 (__fastcall **)(struct IBitmapDest *, __int64 *, __int64, __int64 *))(*(_QWORD *)v21 + 24LL);
  wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset(&v20);
  v14 = v16(v15, &v25, 2LL, &v20);
  v9 = v14;
  if ( v14 < 0 )
  {
    v19 = 176;
    goto LABEL_18;
  }
  v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v20 + 40LL))(v20, &v23);
  v9 = v14;
  if ( v14 < 0 )
  {
    v19 = 178;
    goto LABEL_18;
  }
  v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(*(_QWORD *)v20 + 48LL))(v20, &v22, &v24);
  v9 = v14;
  if ( v14 < 0 )
  {
    v19 = 179;
    goto LABEL_18;
  }
  SourceBitmapCacheSource = CColorKeyBitmap::GetSourceBitmapCacheSource((__int64)(a1 - 2), v31);
  v9 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD, __int64))(*(_QWORD *)*SourceBitmapCacheSource + 56LL))(
         *SourceBitmapCacheSource,
         a2,
         v23,
         v22,
         v24);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v31);
  if ( v9 < 0 )
  {
    v19 = 185;
    goto LABEL_3;
  }
  wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset(&v20);
  v14 = CBitmapColorKey::ApplyColorKeyToBitmap(v21, (const struct CColorKey *)(a1 + 2));
  v9 = v14;
  if ( v14 < 0 )
  {
    v19 = 189;
    goto LABEL_18;
  }
  v14 = (*(__int64 (__fastcall **)(struct IBitmapDest *, __int64 *, __int64, _QWORD *))(*(_QWORD *)v21 + 24LL))(
          v21,
          &v25,
          1LL,
          a3);
  v9 = v14;
  if ( v14 < 0 )
  {
    v19 = 192;
LABEL_18:
    v10 = v14;
    goto LABEL_19;
  }
LABEL_20:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v20);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v21);
  return (unsigned int)v9;
}
