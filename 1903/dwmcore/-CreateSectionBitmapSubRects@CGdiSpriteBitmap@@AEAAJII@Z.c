/*
 * XREFs of ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z @ 0x1802144B8
 * Callers:
 *     ?NeedsTiling@CGdiSpriteBitmap@@UEAA_NAEBUtagSIZE@@@Z @ 0x1800C4270 (-NeedsTiling@CGdiSpriteBitmap@@UEAA_NAEBUtagSIZE@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BD110 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800BD580 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCSubRectBitmapRealizationImageSource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCSubRectBitmapRealizationImageSource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCSubRectBitmapRealizationImageSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCSubRectBitmapRealizationImageSource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180214364 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCSubRectBitmapRealizationImageSource@@Uerr_returncode_po.c)
 *     ?Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z @ 0x1802568E4 (-Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z.c)
 *     ?CreateFromGDISection@CSectionBitmapSubRectRealization@@SAJPEAXAEBUtagRECT@@IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@_NPEAPEAVCBitmapRealization@@@Z @ 0x180256DFC (-CreateFromGDISection@CSectionBitmapSubRectRealization@@SAJPEAXAEBUtagRECT@@IW4DXGI_FORMAT@@W4DX.c)
 *     ?Create@CSubRectBitmapRealizationImageSource@@SAJPEAVIImageSource@@PEAVIBitmapRealization@@AEBUtagRECT@@2PEAPEAV1@@Z @ 0x18025A988 (-Create@CSubRectBitmapRealizationImageSource@@SAJPEAVIImageSource@@PEAVIBitmapRealization@@AEBUt.c)
 */

__int64 __fastcall CGdiSpriteBitmap::CreateSectionBitmapSubRects(CGdiSpriteBitmap *this)
{
  CGdiSpriteBitmap ***v1; // rdi
  int v2; // esi
  CGdiSpriteBitmap **v3; // r15
  CGdiSpriteBitmap **v5; // rbx
  unsigned int v6; // eax
  unsigned int v7; // r15d
  unsigned int v8; // ecx
  unsigned int v9; // eax
  int v10; // edx
  unsigned int v11; // r12d
  LONG v12; // r13d
  enum DXGI_FORMAT v13; // r9d
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // r8d
  void *v17; // rcx
  signed int v18; // eax
  __int64 v19; // rcx
  struct IBitmapRealization *v20; // rcx
  struct IBitmapRealization *v21; // rbx
  signed int v22; // eax
  __int64 v23; // rcx
  signed int v24; // eax
  __int64 v25; // rcx
  char *v26; // rdx
  CMILCOMBase *v27; // rbx
  CGdiSpriteBitmap **v28; // r14
  CGdiSpriteBitmap **v29; // rbx
  enum DXGI_ALPHA_MODE v31; // [rsp+20h] [rbp-60h]
  bool v32; // [rsp+28h] [rbp-58h]
  struct CBitmapRealization *v33; // [rsp+40h] [rbp-40h] BYREF
  struct IBitmapRealization *v34; // [rsp+48h] [rbp-38h] BYREF
  CMILCOMBase *v35; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v36; // [rsp+58h] [rbp-28h] BYREF
  struct tagRECT v37; // [rsp+68h] [rbp-18h] BYREF

  v1 = (CGdiSpriteBitmap ***)((char *)this + 464);
  v2 = 0;
  v3 = (CGdiSpriteBitmap **)*((_QWORD *)this + 59);
  v5 = (CGdiSpriteBitmap **)*((_QWORD *)this + 58);
  if ( v5 != v3 )
  {
    do
    {
      if ( *v5 )
        CGdiSpriteBitmap::Release(*v5);
      ++v5;
    }
    while ( v5 != v3 );
    v5 = *v1;
  }
  v1[1] = v5;
  v6 = *((_DWORD *)this + 110);
  v7 = 0;
  v8 = *((_DWORD *)this + 111);
  *(_QWORD *)&v36.left = 0LL;
  v36.right = v6;
  v36.bottom = v8;
  if ( v6 )
  {
    while ( 1 )
    {
      v9 = v6 - v7;
      v10 = 2048;
      v11 = 0;
      if ( v9 < 0x800 )
        v10 = v9;
      if ( v8 )
        break;
LABEL_30:
      v6 = *((_DWORD *)this + 110);
      v7 += 2048;
      if ( v7 >= v6 )
        goto LABEL_38;
    }
    v12 = v10 + v7;
    while ( 1 )
    {
      v13 = *((_DWORD *)this + 22);
      v14 = v8 - v11;
      v37.left = v7;
      v37.top = v11;
      v15 = 2048;
      v37.right = v12;
      v16 = *((_DWORD *)this + 112);
      if ( v14 < 0x800 )
        v15 = v14;
      v17 = (void *)*((_QWORD *)this + 47);
      v37.bottom = v11 + v15;
      v31 = *((_DWORD *)this + 23);
      v33 = 0LL;
      v18 = CSectionBitmapSubRectRealization::CreateFromGDISection(v17, &v37, v16, v13, v31, v32, &v33);
      v2 = v18;
      if ( v18 < 0 )
        break;
      v20 = (struct CBitmapRealization *)((char *)v33 + 144);
      if ( (*((_BYTE *)this + 117) & 1) != 0 )
      {
        if ( !v33 )
          v20 = 0LL;
        v34 = 0LL;
        v22 = CColorKeyBitmapRealization::Create(v20, (CGdiSpriteBitmap *)((char *)this + 384), &v34);
        v2 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x221u, 0LL);
LABEL_34:
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v34);
          goto LABEL_37;
        }
        v21 = v34;
      }
      else
      {
        v21 = (struct IBitmapRealization *)((unsigned __int64)v20 & -(__int64)(v33 != 0LL));
        v34 = v21;
        if ( v21 )
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v21 + 8LL))((unsigned __int64)v20 & -(__int64)(v33 != 0LL));
      }
      v35 = 0LL;
      v24 = CSubRectBitmapRealizationImageSource::Create((CGdiSpriteBitmap *)((char *)this + 56), v21, &v37, &v36, &v35);
      v2 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x22Bu, 0LL);
        if ( v35 )
          CGdiSpriteBitmap::Release(v35);
        goto LABEL_34;
      }
      v26 = (char *)v1[1];
      v27 = v35;
      if ( v1[2] == (CGdiSpriteBitmap **)v26 )
      {
        std::vector<wil::com_ptr_t<CSubRectBitmapRealizationImageSource,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CSubRectBitmapRealizationImageSource,wil::err_returncode_policy> const &>(
          (__int64)v1,
          v26,
          &v35);
      }
      else
      {
        *(_QWORD *)v26 = v35;
        if ( v27 )
          CMILCOMBase::InternalAddRef(v27);
        ++v1[1];
      }
      if ( v27 )
        CGdiSpriteBitmap::Release(v27);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v34);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v33);
      v8 = *((_DWORD *)this + 111);
      v11 += 2048;
      if ( v11 >= v8 )
        goto LABEL_30;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x214u, 0LL);
LABEL_37:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v33);
LABEL_38:
    if ( v2 < 0 )
    {
      v28 = v1[1];
      v29 = *v1;
      if ( *v1 != v28 )
      {
        do
        {
          if ( *v29 )
            CGdiSpriteBitmap::Release(*v29);
          ++v29;
        }
        while ( v29 != v28 );
        v29 = *v1;
      }
      v1[1] = v29;
    }
  }
  return (unsigned int)v2;
}
