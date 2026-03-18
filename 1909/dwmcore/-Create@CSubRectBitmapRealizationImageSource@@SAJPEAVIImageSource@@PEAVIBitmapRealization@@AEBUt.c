/*
 * XREFs of ?Create@CSubRectBitmapRealizationImageSource@@SAJPEAVIImageSource@@PEAVIBitmapRealization@@AEBUtagRECT@@2PEAPEAV1@@Z @ 0x1802590C8
 * Callers:
 *     ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z @ 0x180212DD8 (-CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BE550 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CSubRectBitmapRealizationImageSource@@AEAA@PEAVIImageSource@@PEAVIBitmapRealization@@AEBUtagRECT@@2@Z @ 0x180258FD4 (--0CSubRectBitmapRealizationImageSource@@AEAA@PEAVIImageSource@@PEAVIBitmapRealization@@AEBUtagR.c)
 */

__int64 __fastcall CSubRectBitmapRealizationImageSource::Create(
        struct IImageSource *a1,
        struct IBitmapRealization *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        struct CSubRectBitmapRealizationImageSource **a5)
{
  CSubRectBitmapRealizationImageSource *v10; // rax
  CMILCOMBase *v11; // rdi
  unsigned int v12; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a5 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(struct IImageSource *))(*(_QWORD *)a1 + 144LL))(a1) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x146,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\subrectbitmaprealizationimagesource.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  else
  {
    v10 = (CSubRectBitmapRealizationImageSource *)operator new(0x50uLL);
    if ( v10 )
      v11 = CSubRectBitmapRealizationImageSource::CSubRectBitmapRealizationImageSource(v10, a1, a2, a3, a4);
    else
      v11 = 0LL;
    if ( v11 )
    {
      CMILCOMBase::InternalAddRef(v11);
      *a5 = v11;
      return 0;
    }
    else
    {
      v12 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14E,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\subrectbitmaprealizationimagesource.cpp",
        (const char *)0x8007000ELL);
    }
    return v12;
  }
}
