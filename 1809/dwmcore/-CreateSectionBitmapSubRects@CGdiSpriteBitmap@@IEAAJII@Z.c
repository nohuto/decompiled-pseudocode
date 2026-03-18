/*
 * XREFs of ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@IEAAJII@Z @ 0x180198574
 * Callers:
 *     ?NeedsTiling@CGdiSpriteBitmap@@UEAA_NAEBUtagSIZE@@@Z @ 0x1800674D0 (-NeedsTiling@CGdiSpriteBitmap@@UEAA_NAEBUtagSIZE@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?ReleaseSectionBitmapSubRects@CGdiSpriteBitmap@@IEAAXXZ @ 0x180093234 (-ReleaseSectionBitmapSubRects@CGdiSpriteBitmap@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCSubRectBitmapRealizationImageSource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCSubRectBitmapRealizationImageSource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCSubRectBitmapRealizationImageSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCSubRectBitmapRealizationImageSource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180198418 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCSubRectBitmapRealizationImageSource@@Uerr_returncode_po.c)
 *     ?Create@CSubRectBitmapRealizationImageSource@@SAJPEAVIImageSource@@PEAVIBitmapRealization@@AEBUtagRECT@@2PEAPEAV1@@Z @ 0x1801D5418 (-Create@CSubRectBitmapRealizationImageSource@@SAJPEAVIImageSource@@PEAVIBitmapRealization@@AEBUt.c)
 *     ?Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z @ 0x180226648 (-Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z.c)
 *     ?CreateFromGDISection@CSectionBitmapSubRectRealization@@SAJPEAXAEBUtagRECT@@IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@_NPEAPEAVCBitmapRealization@@@Z @ 0x180226B58 (-CreateFromGDISection@CSectionBitmapSubRectRealization@@SAJPEAXAEBUtagRECT@@IW4DXGI_FORMAT@@W4DX.c)
 */

__int64 __fastcall CGdiSpriteBitmap::CreateSectionBitmapSubRects(char **this)
{
  int v2; // edi
  unsigned int v3; // eax
  unsigned int v4; // r15d
  unsigned int v5; // ecx
  unsigned int v6; // eax
  int v7; // edx
  unsigned int v8; // r12d
  LONG v9; // r13d
  enum DXGI_FORMAT v10; // r9d
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // r8d
  char *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  struct IBitmapRealization *v18; // rbx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  CMILCOMBase *v27; // rbx
  char *v28; // rdx
  enum DXGI_ALPHA_MODE v30; // [rsp+28h] [rbp-39h]
  bool v31; // [rsp+30h] [rbp-31h]
  struct CBitmapRealization *v32; // [rsp+48h] [rbp-19h] BYREF
  struct IBitmapRealization *v33; // [rsp+50h] [rbp-11h] BYREF
  __int64 v34; // [rsp+58h] [rbp-9h] BYREF
  CMILCOMBase *v35; // [rsp+60h] [rbp-1h] BYREF
  struct tagRECT v36; // [rsp+68h] [rbp+7h] BYREF
  struct tagRECT v37; // [rsp+78h] [rbp+17h] BYREF

  v2 = 0;
  CGdiSpriteBitmap::ReleaseSectionBitmapSubRects((CGdiSpriteBitmap *)this);
  v3 = *((_DWORD *)this + 110);
  v4 = 0;
  v5 = *((_DWORD *)this + 111);
  *(_QWORD *)&v36.left = 0LL;
  v36.right = v3;
  v36.bottom = v5;
  if ( v3 )
  {
    while ( 1 )
    {
      v6 = v3 - v4;
      v7 = 2048;
      v8 = 0;
      if ( v6 < 0x800 )
        v7 = v6;
      if ( v5 )
        break;
LABEL_25:
      v3 = *((_DWORD *)this + 110);
      v4 += 2048;
      if ( v4 >= v3 )
        goto LABEL_37;
    }
    v9 = v7 + v4;
    while ( 1 )
    {
      v10 = *((_DWORD *)this + 22);
      v11 = v5 - v8;
      v37.left = v4;
      v37.top = v8;
      v12 = 2048;
      v37.right = v9;
      v13 = *((_DWORD *)this + 112);
      if ( v11 < 0x800 )
        v12 = v11;
      v14 = this[58];
      v37.bottom = v8 + v12;
      v30 = *((_DWORD *)this + 23);
      v32 = 0LL;
      v15 = CSectionBitmapSubRectRealization::CreateFromGDISection(v14, &v37, v13, v10, v30, v31, &v32);
      v2 = v15;
      if ( v15 < 0 )
        break;
      v17 = (unsigned __int64)v32 + 144;
      if ( *((char *)this + 116) < 0 )
      {
        v33 = 0LL;
        v19 = CColorKeyBitmapRealization::Create(
                (struct IBitmapRealization *)(-(__int64)(v32 != 0LL) & v17),
                (const struct CColorKey *)(this + 48),
                &v33);
        v2 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x21Eu);
          goto LABEL_30;
        }
        v18 = v33;
      }
      else
      {
        v18 = (struct IBitmapRealization *)(v17 & -(__int64)(v32 != 0LL));
        v33 = v18;
        if ( v18 )
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v18 + 8LL))(v17 & -(__int64)(v32 != 0LL));
      }
      v34 = 0LL;
      v21 = (**(__int64 (__fastcall ***)(struct IBitmapRealization *, GUID *, __int64 *))v18)(
              v18,
              &GUID_475af409_d8b1_4ca5_8177_4562f6260b68,
              &v34);
      v2 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x222u);
        goto LABEL_29;
      }
      v23 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v34 + 24LL))(
              v34,
              -(__int64)(this != 0LL) & (unsigned __int64)(this + 8));
      v2 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x223u);
        goto LABEL_29;
      }
      v35 = 0LL;
      v25 = CSubRectBitmapRealizationImageSource::Create(
              (struct IImageSource *)((unsigned __int64)(this + 7) & -(__int64)(this != 0LL)),
              v18,
              &v37,
              &v36,
              &v35);
      v2 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x22Cu);
        if ( v35 )
          CGdiSpriteBitmap::Release(v35);
LABEL_29:
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v34);
LABEL_30:
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v33);
        goto LABEL_36;
      }
      v27 = v35;
      v28 = this[60];
      if ( this[61] == v28 )
      {
        std::vector<wil::com_ptr_t<CSubRectBitmapRealizationImageSource,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CSubRectBitmapRealizationImageSource,wil::err_returncode_policy> const &>(
          this + 59,
          v28,
          &v35);
      }
      else
      {
        *(_QWORD *)v28 = v35;
        if ( v27 )
          CMILCOMBase::InternalAddRef(v27);
        this[60] += 8;
      }
      if ( v27 )
        CGdiSpriteBitmap::Release(v27);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v34);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v33);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v32);
      v5 = *((_DWORD *)this + 111);
      v8 += 2048;
      if ( v8 >= v5 )
        goto LABEL_25;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x211u);
LABEL_36:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v32);
LABEL_37:
    if ( v2 < 0 )
      CGdiSpriteBitmap::ReleaseSectionBitmapSubRects((CGdiSpriteBitmap *)this);
  }
  return (unsigned int)v2;
}
