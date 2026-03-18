/*
 * XREFs of ??0CDecodeBitmap@@IEAA@U_LUID@@@Z @ 0x18001E854
 * Callers:
 *     ?Create@CDecodeBitmap@@SAJU_LUID@@PEAPEAV1@@Z @ 0x18001E7EC (-Create@CDecodeBitmap@@SAJU_LUID@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderTargetBitmap@@IEAA@_N@Z @ 0x1800BF198 (--0CRenderTargetBitmap@@IEAA@_N@Z.c)
 */

CDecodeBitmap *__fastcall CDecodeBitmap::CDecodeBitmap(CDecodeBitmap *this, struct _LUID a2)
{
  __int64 v2; // rcx
  __int64 v3; // r9

  CRenderTargetBitmap::CRenderTargetBitmap(this, 0);
  *(_QWORD *)(v2 + 184) = v3;
  *(_QWORD *)(v2 + 16) = &CDecodeBitmap::`vftable'{for `ID2DBitmapCache'};
  *(_QWORD *)v2 = &CDecodeBitmap::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(v2 + 24) = &CDecodeBitmap::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(v2 + 88) = &CDecodeBitmap::`vftable'{for `CDeviceResource'};
  *(_QWORD *)(v2 + 144) = &CDecodeBitmap::`vftable'{for `IBitmapRealization'};
  *(_QWORD *)(v2 + 192) = 0LL;
  *(_DWORD *)(v2 + 200) = 0;
  *(_WORD *)(v2 + 204) = 0;
  return (CDecodeBitmap *)v2;
}
