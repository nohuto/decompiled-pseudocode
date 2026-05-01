/*
 * XREFs of ?InitializeDuplication@DDAScreenCapture@@AEAAJXZ @ 0x18019D970
 * Callers:
 *     ?GetScreenCaptureAsWicBitmapSource@DDAScreenCapture@@QEAAJPEAUIWICImagingFactory@@PEAPEAUIWICBitmapSource@@@Z @ 0x18019D2C4 (-GetScreenCaptureAsWicBitmapSource@DDAScreenCapture@@QEAAJPEAUIWICImagingFactory@@PEAPEAUIWICBit.c)
 *     ?Initialize@DDAScreenCapture@@AEAAJXZ @ 0x18019D850 (-Initialize@DDAScreenCapture@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DDAScreenCapture::InitializeDuplication(DDAScreenCapture *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // esi
  __int64 v7; // rbx
  int v8; // eax
  int v9; // eax
  _QWORD *v10; // rsi
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rbx
  int v16; // eax
  __int64 v18; // [rsp+28h] [rbp-39h] BYREF
  __int64 v19; // [rsp+30h] [rbp-31h] BYREF
  __int64 v20[2]; // [rsp+38h] [rbp-29h] BYREF
  _BYTE v21[88]; // [rsp+48h] [rbp-19h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v20[1] = -2LL;
  v20[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v20);
  v2 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 13))(
         *((_QWORD *)this + 13),
         &GUID_6007896c_3244_4afd_bf18_a6d3beda5023,
         v20);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v19 = 0LL;
    v4 = v20[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 56LL))(v4, &v19);
    v3 = v5;
    if ( v5 >= 0 )
    {
      v18 = 0LL;
      v6 = 0;
      do
      {
        v7 = v19;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
        v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 56LL))(v7, v6, &v18);
        v3 = v8;
        if ( !++v6 )
        {
          v3 = -2147418113;
          v12 = 2147549183LL;
          v13 = 105LL;
          goto LABEL_20;
        }
        if ( v8 < 0 )
        {
          v12 = (unsigned int)v8;
          v13 = 91LL;
          goto LABEL_20;
        }
        v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v18 + 56LL))(v18, v21);
        v3 = v9;
        if ( v9 < 0 )
        {
          v12 = (unsigned int)v9;
          v13 = 94LL;
          goto LABEL_20;
        }
      }
      while ( v22 != *((_QWORD *)this + 16) );
      v10 = (_QWORD *)((char *)this + 120);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 15);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 15);
      v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v18)(
              v18,
              &GUID_00cddea8_939b_4b83_a340_a685226666cc,
              (char *)this + 120);
      v3 = v11;
      if ( v11 >= 0 )
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v10 + 56LL))(*v10, (char *)this + 8);
        v3 = v14;
        if ( v14 >= 0 )
        {
          v15 = *v10;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this);
          v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, DDAScreenCapture *))(*(_QWORD *)v15 + 176LL))(
                  v15,
                  *((_QWORD *)this + 13),
                  this);
          v3 = v16;
          if ( v16 >= 0 )
          {
            v3 = 0;
            goto LABEL_21;
          }
          v12 = (unsigned int)v16;
          v13 = 111LL;
        }
        else
        {
          v12 = (unsigned int)v14;
          v13 = 110LL;
        }
      }
      else
      {
        v12 = (unsigned int)v11;
        v13 = 109LL;
      }
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)v12);
LABEL_21:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v5);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v2);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v20);
  return v3;
}
