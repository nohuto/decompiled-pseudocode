/*
 * XREFs of ??0CVisual@@IEAA@XZ @ 0x180019DE0
 * Callers:
 *     ?WrapExistingResource@UdwmTopVisual@@SAJIPEAPEAV1@@Z @ 0x18000F4A8 (-WrapExistingResource@UdwmTopVisual@@SAJIPEAPEAV1@@Z.c)
 *     ?WrapExistingResource@UdwmBottomVisual@@SAJIPEAPEAV1@@Z @ 0x18000F560 (-WrapExistingResource@UdwmBottomVisual@@SAJIPEAPEAV1@@Z.c)
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180022D7C (--0CRenderDataVisual@@IEAA@XZ.c)
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x180024840 (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CClientArea@@KAJIPEAPEAV1@@Z @ 0x180024D04 (-Create@CClientArea@@KAJIPEAPEAV1@@Z.c)
 *     ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x180025EC0 (--0CAtlasedRectsVisual@@IEAA@XZ.c)
 *     ??0CTopLevelWindow@@IEAA@XZ @ 0x18002602C (--0CTopLevelWindow@@IEAA@XZ.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x1800269D8 (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?WrapExistingResource@CVisual@@SAJIPEAPEAV1@@Z @ 0x1800281AC (-WrapExistingResource@CVisual@@SAJIPEAPEAV1@@Z.c)
 *     ?Create@CRippleEffect@@SAJPEAPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x1800948A4 (-Create@CRippleEffect@@SAJPEAPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 *     ??0CDesktopThumbnailBase@@IEAA@XZ @ 0x1800AE620 (--0CDesktopThumbnailBase@@IEAA@XZ.c)
 * Callees:
 *     <none>
 */

CVisual *__fastcall CVisual::CVisual(CVisual *this)
{
  CVisual *result; // rax

  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CVisual::`vftable';
  *((_QWORD *)this + 4) = &VisualCollection::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 22) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 21) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 23) = 0x3FF0000000000000LL;
  *((_DWORD *)this + 32) = 0x7FFFFFFF;
  *((_DWORD *)this + 34) = 0x7FFFFFFF;
  *((_DWORD *)this + 33) = 0x7FFFFFFF;
  *((_DWORD *)this + 35) = 0x7FFFFFFF;
  result = this;
  *((_DWORD *)this + 48) = -2;
  *((_QWORD *)this + 5) = this;
  return result;
}
