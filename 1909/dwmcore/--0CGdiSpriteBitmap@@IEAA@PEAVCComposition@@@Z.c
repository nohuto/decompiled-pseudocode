/*
 * XREFs of ??0CGdiSpriteBitmap@@IEAA@PEAVCComposition@@@Z @ 0x18004B88C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CGdiSpriteBitmap *__fastcall CGdiSpriteBitmap::CGdiSpriteBitmap(CGdiSpriteBitmap *this, struct CComposition *a2)
{
  CGdiSpriteBitmap *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CGdiSpriteBitmap::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CGdiSpriteBitmap::`vftable'{for `ISpriteImage'};
  *((_QWORD *)this + 8) = &CGdiSpriteBitmap::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 21) = (char *)this + 200;
  *((_QWORD *)this + 22) = (char *)this + 200;
  *((_DWORD *)this + 46) = 1;
  *(_QWORD *)((char *)this + 188) = 1LL;
  *((_QWORD *)this + 26) = (char *)this + 216;
  *((_DWORD *)this + 54) = 0;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 35) = &CRegionShape::`vftable';
  *((_QWORD *)this + 37) = (char *)this + 304;
  *((_DWORD *)this + 76) = 0;
  *((_QWORD *)this + 46) = 0LL;
  *((_DWORD *)this + 96) = 1065353216;
  *((_DWORD *)this + 97) = 1065353216;
  *((_DWORD *)this + 98) = 1065353216;
  *(_QWORD *)((char *)this + 396) = 1065353216LL;
  result = this;
  *(_QWORD *)((char *)this + 404) = 0LL;
  *((_DWORD *)this + 103) = 0;
  *((_BYTE *)this + 416) = 0;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_DWORD *)this + 22) = 87;
  *((_DWORD *)this + 24) = 0;
  return result;
}
