/*
 * XREFs of ??0CSubRectBitmapRealizationImageSource@@AEAA@PEAVIImageSource@@PEAVIBitmapRealization@@AEBUtagRECT@@2@Z @ 0x1801D5328
 * Callers:
 *     ?Create@CSubRectBitmapRealizationImageSource@@SAJPEAVIImageSource@@PEAVIBitmapRealization@@AEBUtagRECT@@2PEAPEAV1@@Z @ 0x1801D5418 (-Create@CSubRectBitmapRealizationImageSource@@SAJPEAVIImageSource@@PEAVIBitmapRealization@@AEBUt.c)
 * Callees:
 *     ??0?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z @ 0x1800EF06C (--0-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z.c)
 */

CSubRectBitmapRealizationImageSource *__fastcall CSubRectBitmapRealizationImageSource::CSubRectBitmapRealizationImageSource(
        CSubRectBitmapRealizationImageSource *this,
        struct IImageSource *a2,
        struct IBitmapRealization *a3,
        const struct tagRECT *a4,
        const struct tagRECT *a5)
{
  __int128 v7; // xmm1
  CSubRectBitmapRealizationImageSource *result; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CSubRectBitmapRealizationImageSource::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 4) = a2;
  *((_QWORD *)this + 2) = &CSubRectBitmapRealizationImageSource::`vftable'{for `IImageSource'};
  *((_BYTE *)this + 24) = 0;
  wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
    (_QWORD *)this + 5,
    (__int64)a3);
  v7 = (__int128)*a5;
  result = this;
  *((struct tagRECT *)this + 3) = *a4;
  *((_OWORD *)this + 4) = v7;
  return result;
}
