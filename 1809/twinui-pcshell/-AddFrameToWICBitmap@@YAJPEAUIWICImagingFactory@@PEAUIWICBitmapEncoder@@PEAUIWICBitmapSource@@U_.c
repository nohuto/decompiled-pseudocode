/*
 * XREFs of ?AddFrameToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapEncoder@@PEAUIWICBitmapSource@@U_GUID@@W4EncodingOptions@@@Z @ 0x180196D54
 * Callers:
 *     ?GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GUID@@U3@W4EncodingOptions@@PEAPEAUIStream@@@Z @ 0x180197470 (-GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ConvertWICBitmapPixelFormat@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@U_GUID@@W4WICBitmapDitherType@@PEAPEAU2@@Z @ 0x18019703C (-ConvertWICBitmapPixelFormat@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@U_GUID@@W4WICBitm.c)
 *     ?SetJpegQuantizationTableOptions@@YAJW4JpegQuantizationTableTypes@@PEAUIPropertyBag2@@@Z @ 0x1801977AC (-SetJpegQuantizationTableOptions@@YAJW4JpegQuantizationTableTypes@@PEAUIPropertyBag2@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AddFrameToWICBitmap(
        struct IWICImagingFactory *a1,
        __int64 a2,
        struct IWICBitmapSource *a3,
        struct _GUID *a4,
        char a5)
{
  int v9; // ebx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  enum WICBitmapDitherType v14; // r9d
  __int64 v16; // [rsp+30h] [rbp-71h] BYREF
  struct IWICBitmapSource *v17; // [rsp+38h] [rbp-69h] BYREF
  __int64 v18; // [rsp+40h] [rbp-61h] BYREF
  unsigned int v19; // [rsp+48h] [rbp-59h] BYREF
  unsigned int v20; // [rsp+4Ch] [rbp-55h] BYREF
  __int64 v21; // [rsp+50h] [rbp-51h]
  _BYTE v22[16]; // [rsp+58h] [rbp-49h] BYREF
  const wchar_t *v23; // [rsp+68h] [rbp-39h]
  struct _GUID v24; // [rsp+80h] [rbp-21h] BYREF
  struct _GUID v25; // [rsp+90h] [rbp-11h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-1h]
  __int64 v27; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v28; // [rsp+B0h] [rbp+Fh]

  v21 = -2LL;
  v16 = 0LL;
  v18 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)a2 + 80LL))(a2, &v16, &v18);
  if ( v9 < 0 )
    goto LABEL_28;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, &v27);
  if ( v9 < 0 )
    goto LABEL_28;
  v10 = v27 - *(_QWORD *)&GUID_ContainerFormatBmp.Data1;
  if ( v27 == *(_QWORD *)&GUID_ContainerFormatBmp.Data1 )
    v10 = v28 - *(_QWORD *)GUID_ContainerFormatBmp.Data4;
  if ( v10 || (a5 & 1) == 0 )
  {
    v12 = v27 - *(_QWORD *)&GUID_ContainerFormatJpeg.Data1;
    if ( v27 == *(_QWORD *)&GUID_ContainerFormatJpeg.Data1 )
      v12 = v28 - *(_QWORD *)GUID_ContainerFormatJpeg.Data4;
    if ( v12 || (a5 & 2) == 0 )
      goto LABEL_14;
    v11 = SetJpegQuantizationTableOptions(v10, v18);
  }
  else
  {
    v25 = (struct _GUID)0LL;
    v26 = 0LL;
    memset_0(v22, 0, 0x28uLL);
    LOWORD(v25.Data1) = 11;
    *(_WORD *)v25.Data4 = -1;
    v23 = L"EnableV5Header32bppBGRA";
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, struct _GUID *))(*(_QWORD *)v18 + 32LL))(
            v18,
            1LL,
            v22,
            &v25);
  }
  v9 = v11;
LABEL_14:
  if ( v9 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 24LL))(v16, v18);
    if ( v9 >= 0 )
    {
      v9 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, unsigned int *, unsigned int *))a3->lpVtbl->GetSize)(
             a3,
             &v19,
             &v20);
      if ( v9 >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v16 + 32LL))(v16, v19, v20);
        if ( v9 >= 0 )
        {
          v25 = *a4;
          v9 = (*(__int64 (__fastcall **)(__int64, struct _GUID *))(*(_QWORD *)v16 + 48LL))(v16, &v25);
          if ( v9 >= 0 )
          {
            v17 = 0LL;
            v13 = *(_QWORD *)&v25.Data1 - *(_QWORD *)&a4->Data1;
            if ( *(_QWORD *)&v25.Data1 == *(_QWORD *)&a4->Data1 )
              v13 = *(_QWORD *)v25.Data4 - *(_QWORD *)a4->Data4;
            if ( v13 )
            {
              v24 = *a4;
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
              v9 = ConvertWICBitmapPixelFormat(a1, a3, &v24, v14, &v17);
            }
            else
            {
              *(_QWORD *)&v24.Data1 = a3;
              Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v24);
              *(_QWORD *)&v24.Data1 = v17;
              v17 = a3;
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
            }
            if ( v9 >= 0 )
            {
              v24.Data1 = 0;
              *(_DWORD *)&v24.Data2 = 0;
              *(_DWORD *)v24.Data4 = v19;
              *(_DWORD *)&v24.Data4[4] = v20;
              v9 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource *, struct _GUID *))(*(_QWORD *)v16 + 88LL))(
                     v16,
                     v17,
                     &v24);
              if ( v9 >= 0 )
                v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 96LL))(v16);
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
          }
        }
      }
    }
  }
LABEL_28:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  return (unsigned int)v9;
}
