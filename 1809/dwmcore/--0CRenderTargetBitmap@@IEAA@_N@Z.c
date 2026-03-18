/*
 * XREFs of ??0CRenderTargetBitmap@@IEAA@_N@Z @ 0x18008B654
 * Callers:
 *     ??0CDecodeBitmap@@IEAA@U_LUID@@@Z @ 0x180020100 (--0CDecodeBitmap@@IEAA@U_LUID@@@Z.c)
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIRenderTargetBitmap@@PEAPEAV1@@Z @ 0x18008B5A0 (-Create@CRenderTargetBitmap@@SAJPEAVIRenderTargetBitmap@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CRenderTargetBitmap *__fastcall CRenderTargetBitmap::CRenderTargetBitmap(CRenderTargetBitmap *this, char a2)
{
  CRenderTargetBitmap *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 12) = (char *)this + 128;
  *((_QWORD *)this + 13) = (char *)this + 128;
  *((_DWORD *)this + 28) = 2;
  *(_QWORD *)((char *)this + 116) = 2LL;
  *(_QWORD *)this = &CRenderTargetBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDecodeBitmap::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CDecodeBitmap::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 11) = &CRenderTargetBitmap::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 18) = &CDecodeBitmap::`vftable'{for `IBitmapRealization'};
  result = this;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_BYTE *)this + 176) = a2;
  return result;
}
