/*
 * XREFs of ?WICIsOrientationSupported@@YA_NPEAUIWICBitmapDecoder@@@Z @ 0x1801EFADC
 * Callers:
 *     ?WICOrientateFrame@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapDecoder@@PEAUIWICBitmapFrameDecode@@_NPEAPEAUIWICBitmapSource@@@Z @ 0x1801EFB88 (-WICOrientateFrame@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapDecoder@@PEAUIWICBitmapFrameDecode@.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

char __fastcall WICIsOrientationSupported(struct IWICBitmapDecoder *a1)
{
  int v1; // eax
  char v2; // dl
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]

  v7 = 0LL;
  v8 = 0LL;
  v1 = ((__int64 (__fastcall *)(struct IWICBitmapDecoder *, __int64 *))a1->lpVtbl->GetContainerFormat)(a1, &v7);
  v2 = 0;
  if ( v1 >= 0 )
  {
    v3 = v7 - *(_QWORD *)&GUID_ContainerFormatJpeg.Data1;
    if ( v7 == *(_QWORD *)&GUID_ContainerFormatJpeg.Data1 )
      v3 = v8 - *(_QWORD *)GUID_ContainerFormatJpeg.Data4;
    if ( !v3 )
      return 1;
    v4 = v7 - *(_QWORD *)&GUID_ContainerFormatAdng.Data1;
    if ( v7 == *(_QWORD *)&GUID_ContainerFormatAdng.Data1 )
      v4 = v8 - *(_QWORD *)GUID_ContainerFormatAdng.Data4;
    if ( !v4 )
      return 1;
    v5 = v7 - *(_QWORD *)&GUID_ContainerFormatHeif.Data1;
    if ( v7 == *(_QWORD *)&GUID_ContainerFormatHeif.Data1 )
      v5 = v8 - *(_QWORD *)GUID_ContainerFormatHeif.Data4;
    if ( !v5 )
      return 1;
  }
  return v2;
}
