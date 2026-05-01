/*
 * XREFs of ?AddFrameToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapEncoder@@PEAUIWICBitmapSource@@U_GUID@@W4EncodingOptions@@@Z @ 0x1801DD3A4
 * Callers:
 *     ?GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GUID@@U3@W4EncodingOptions@@PEAPEAUIStream@@@Z @ 0x1801DDAB4 (-GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?ConvertWICBitmapPixelFormat@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@U_GUID@@W4WICBitmapDitherType@@PEAPEAU2@@Z @ 0x1801DD68C (-ConvertWICBitmapPixelFormat@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@U_GUID@@W4WICBitm.c)
 *     ?SetJpegQuantizationTableOptions@@YAJW4JpegQuantizationTableTypes@@PEAUIPropertyBag2@@@Z @ 0x1801DDE0C (-SetJpegQuantizationTableOptions@@YAJW4JpegQuantizationTableTypes@@PEAUIPropertyBag2@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AddFrameToWICBitmap(
        struct IWICImagingFactory *a1,
        __int64 a2,
        struct IWICBitmapSource *a3,
        struct _GUID *a4,
        char a5)
{
  __int64 (__fastcall *v9)(__int64, __int64 *, __int64 *); // rbx
  int v10; // ebx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  enum WICBitmapDitherType v15; // r9d
  __int64 v17; // [rsp+30h] [rbp-71h] BYREF
  struct IWICBitmapSource *v18; // [rsp+38h] [rbp-69h] BYREF
  __int64 v19; // [rsp+40h] [rbp-61h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-59h] BYREF
  unsigned int v21; // [rsp+4Ch] [rbp-55h] BYREF
  __int64 v22; // [rsp+50h] [rbp-51h]
  _QWORD v23[3]; // [rsp+58h] [rbp-49h] BYREF
  __int128 v24; // [rsp+70h] [rbp-31h]
  struct _GUID v25; // [rsp+80h] [rbp-21h] BYREF
  struct _GUID v26; // [rsp+90h] [rbp-11h] BYREF
  __int64 v27; // [rsp+A0h] [rbp-1h]
  __int64 v28; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v29; // [rsp+B0h] [rbp+Fh]

  v22 = -2LL;
  v17 = 0LL;
  v19 = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)a2 + 80LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  v10 = v9(a2, &v17, &v19);
  if ( v10 < 0 )
    goto LABEL_28;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, &v28);
  if ( v10 < 0 )
    goto LABEL_28;
  v11 = v28 - *(_QWORD *)&GUID_ContainerFormatBmp.Data1;
  if ( v28 == *(_QWORD *)&GUID_ContainerFormatBmp.Data1 )
    v11 = v29 - *(_QWORD *)GUID_ContainerFormatBmp.Data4;
  if ( v11 || (a5 & 1) == 0 )
  {
    v13 = v28 - *(_QWORD *)&GUID_ContainerFormatJpeg.Data1;
    if ( v28 == *(_QWORD *)&GUID_ContainerFormatJpeg.Data1 )
      v13 = v29 - *(_QWORD *)GUID_ContainerFormatJpeg.Data4;
    if ( v13 || (a5 & 2) == 0 )
      goto LABEL_14;
    v12 = SetJpegQuantizationTableOptions(v11, v19);
  }
  else
  {
    *(_QWORD *)v26.Data4 = 0xFFFFLL;
    v27 = 0LL;
    v23[0] = 0LL;
    v23[1] = 0LL;
    v24 = 0LL;
    *(_QWORD *)&v26.Data1 = 11LL;
    v23[2] = L"EnableV5Header32bppBGRA";
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *, struct _GUID *))(*(_QWORD *)v19 + 32LL))(
            v19,
            1LL,
            v23,
            &v26);
  }
  v10 = v12;
LABEL_14:
  if ( v10 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 24LL))(v17, v19);
    if ( v10 >= 0 )
    {
      v10 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, unsigned int *, unsigned int *))a3->lpVtbl->GetSize)(
              a3,
              &v20,
              &v21);
      if ( v10 >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v17 + 32LL))(v17, v20, v21);
        if ( v10 >= 0 )
        {
          v26 = *a4;
          v10 = (*(__int64 (__fastcall **)(__int64, struct _GUID *))(*(_QWORD *)v17 + 48LL))(v17, &v26);
          if ( v10 >= 0 )
          {
            v18 = 0LL;
            v14 = *(_QWORD *)&v26.Data1 - *(_QWORD *)&a4->Data1;
            if ( *(_QWORD *)&v26.Data1 == *(_QWORD *)&a4->Data1 )
              v14 = *(_QWORD *)v26.Data4 - *(_QWORD *)a4->Data4;
            if ( v14 )
            {
              v25 = *a4;
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
              v10 = ConvertWICBitmapPixelFormat(a1, a3, &v25, v15, &v18);
            }
            else
            {
              *(_QWORD *)&v25.Data1 = a3;
              Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v25);
              *(_QWORD *)&v25.Data1 = v18;
              v18 = a3;
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
            }
            if ( v10 >= 0 )
            {
              v25.Data1 = 0;
              *(_DWORD *)&v25.Data2 = 0;
              *(_DWORD *)v25.Data4 = v20;
              *(_DWORD *)&v25.Data4[4] = v21;
              v10 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource *, struct _GUID *))(*(_QWORD *)v17 + 88LL))(
                      v17,
                      v18,
                      &v25);
              if ( v10 >= 0 )
                v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 96LL))(v17);
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
          }
        }
      }
    }
  }
LABEL_28:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  return (unsigned int)v10;
}
