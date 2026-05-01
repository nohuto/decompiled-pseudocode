/*
 * XREFs of ?CopyPropertySet@Holographic@Shell@Internal@Windows@@YAJPEAUIPropertySet@Collections@Foundation@4@0@Z @ 0x180239D98
 * Callers:
 *     ?SetActivationPropertySet@ApplicationViewBackedViewHostItem@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18023AC50 (-SetActivationPropertySet@ApplicationViewBackedViewHostItem@@UEAAJPEAUIPropertySet@Collections@F.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Internal::Shell::Holographic::CopyPropertySet(
        __int64 (__fastcall ***this)(Windows::Internal::Shell::Holographic *, GUID *, __int64 *),
        __int64 (__fastcall ***a2)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *),
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  __int64 (__fastcall *v5)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall *v8)(Windows::Internal::Shell::Holographic *, GUID *, __int64 *); // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64 *); // rdi
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64 *); // rdi
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, HSTRING *); // rdi
  int v18; // eax
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, __int64 *); // rdi
  int v21; // eax
  __int64 v23; // rdx
  __int64 v24; // [rsp+30h] [rbp-30h] BYREF
  __int64 v25; // [rsp+38h] [rbp-28h] BYREF
  __int64 v26; // [rsp+40h] [rbp-20h] BYREF
  __int64 v27; // [rsp+48h] [rbp-18h] BYREF
  __int64 v28[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  char v30; // [rsp+98h] [rbp+38h] BYREF
  char v31; // [rsp+A0h] [rbp+40h] BYREF
  HSTRING string; // [rsp+A8h] [rbp+48h] BYREF

  v28[1] = -2LL;
  v28[0] = 0LL;
  v5 = **a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v28);
  v6 = v5((struct Windows::Foundation::Collections::IPropertySet *)a2, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, v28);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v27 = 0LL;
    v25 = 0LL;
    v8 = **this;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    v9 = v8((Windows::Internal::Shell::Holographic *)this, &GUID_fe2f3d47_5d47_5499_8374_430c7cda0204, &v27);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v30 = 0;
      v11 = v27;
      v12 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 48LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      v9 = v12(v11, &v25);
      v7 = v9;
      if ( v9 >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v25 + 56LL))(v25, &v30);
        v7 = v9;
        if ( v9 >= 0 )
        {
          while ( 1 )
          {
            if ( !v30 )
            {
              v7 = 0;
              goto LABEL_17;
            }
            v24 = 0LL;
            v13 = v25;
            v14 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 48LL);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
            v15 = v14(v13, &v24);
            v7 = v15;
            if ( v15 < 0 )
              break;
            v31 = 0;
            string = 0LL;
            v16 = v24;
            v17 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v24 + 48LL);
            WindowsDeleteString(0LL);
            string = 0LL;
            v18 = v17(v16, &string);
            v7 = v18;
            if ( v18 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x3A,
                (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpropertysethelpers.h",
                (const char *)(unsigned int)v18);
              goto LABEL_23;
            }
            v26 = 0LL;
            v19 = v24;
            v20 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 56LL);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
            v21 = v20(v19, &v26);
            v7 = v21;
            if ( v21 < 0 )
            {
              v23 = 60LL;
LABEL_21:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v23,
                (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpropertysethelpers.h",
                (const char *)(unsigned int)v21);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
LABEL_23:
              WindowsDeleteString(string);
              string = 0LL;
              goto LABEL_25;
            }
            (*(void (__fastcall **)(__int64, HSTRING, __int64, char *))(*(_QWORD *)v28[0] + 80LL))(
              v28[0],
              string,
              v26,
              &v31);
            v21 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v25 + 64LL))(v25, &v30);
            v7 = v21;
            if ( v21 < 0 )
            {
              v23 = 64LL;
              goto LABEL_21;
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
            WindowsDeleteString(string);
            string = 0LL;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x35,
            (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpropertysethelpers.h",
            (const char *)(unsigned int)v15);
LABEL_25:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
          goto LABEL_17;
        }
        v10 = 47LL;
      }
      else
      {
        v10 = 46LL;
      }
    }
    else
    {
      v10 = 43LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpropertysethelpers.h",
      (const char *)(unsigned int)v9);
LABEL_17:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x26,
    (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpropertysethelpers.h",
    (const char *)(unsigned int)v6);
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v28);
  return v7;
}
