/*
 * XREFs of ?WICIsOrientationSupported@@YA_NPEAUIWICBitmapDecoder@@@Z @ 0x180242174
 * Callers:
 *     ?WICOrientateFrame@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapDecoder@@PEAUIWICBitmapFrameDecode@@_NPEAPEAUIWICBitmapSource@@@Z @ 0x18024223C (-WICOrientateFrame@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapDecoder@@PEAUIWICBitmapFrameDecode@.c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

char __fastcall WICIsOrientationSupported(struct IWICBitmapDecoder *a1)
{
  int v1; // eax
  char v2; // cl
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]

  v8 = 0LL;
  v9 = 0LL;
  v1 = ((__int64 (__fastcall *)(struct IWICBitmapDecoder *, __int64 *))a1->lpVtbl->GetContainerFormat)(a1, &v8);
  v2 = 0;
  if ( v1 >= 0 )
  {
    v3 = v8 - *(_QWORD *)&GUID_ContainerFormatJpeg.Data1;
    if ( v8 == *(_QWORD *)&GUID_ContainerFormatJpeg.Data1 )
      v3 = v9 - *(_QWORD *)GUID_ContainerFormatJpeg.Data4;
    if ( !v3 )
      return 1;
    v4 = v8 - *(_QWORD *)&GUID_ContainerFormatAdng.Data1;
    if ( v8 == *(_QWORD *)&GUID_ContainerFormatAdng.Data1 )
      v4 = v9 - *(_QWORD *)GUID_ContainerFormatAdng.Data4;
    if ( !v4 )
      return 1;
    v5 = v8 - *(_QWORD *)&GUID_ContainerFormatHeif.Data1;
    if ( v8 == *(_QWORD *)&GUID_ContainerFormatHeif.Data1 )
      v5 = v9 - *(_QWORD *)GUID_ContainerFormatHeif.Data4;
    if ( !v5 )
      return 1;
    v6 = v8 - *(_QWORD *)&GUID_ContainerFormatRaw.Data1;
    if ( v8 == *(_QWORD *)&GUID_ContainerFormatRaw.Data1 )
      v6 = v9 - *(_QWORD *)GUID_ContainerFormatRaw.Data4;
    if ( !v6 )
      return 1;
  }
  return v2;
}
