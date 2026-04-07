/*
 * XREFs of ??0CVisual@@IEAA@XZ @ 0x18001EF80
 * Callers:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180020F98 (--0CRenderDataVisual@@IEAA@XZ.c)
 *     ?Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180021A40 (-Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ??0CTopLevelWindow@@IEAA@XZ @ 0x180021B3C (--0CTopLevelWindow@@IEAA@XZ.c)
 *     ?WrapExistingResource@UdwmBottomVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180021F00 (-WrapExistingResource@UdwmBottomVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?WrapExistingResource@UdwmTopVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180021FF4 (-WrapExistingResource@UdwmTopVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180025AB0 (-Create@CTopLevelAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x180025B84 (--0CAtlasedRectsVisual@@IEAA@XZ.c)
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180026E70 (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?WrapExistingResource@CVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x18003B220 (-WrapExistingResource@CVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?Create@CRippleEffect@@SAJPEAUIDwmChannel@@PEAPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x18008FF84 (-Create@CRippleEffect@@SAJPEAUIDwmChannel@@PEAPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 *     ??0CDesktopThumbnailBase@@IEAA@XZ @ 0x1800AA600 (--0CDesktopThumbnailBase@@IEAA@XZ.c)
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
  result = this;
  *((_DWORD *)this + 48) = -2;
  *((_QWORD *)this + 5) = this;
  *((_DWORD *)this + 32) = 0x7FFFFFFF;
  *((_DWORD *)this + 34) = 0x7FFFFFFF;
  *((_DWORD *)this + 33) = 0x7FFFFFFF;
  *((_DWORD *)this + 35) = 0x7FFFFFFF;
  return result;
}
