/*
 * XREFs of ?CopyPropertySet@Holographic@Shell@Internal@Windows@@YAJPEAUIPropertySet@Collections@Foundation@4@0@Z @ 0x1801C26C4
 * Callers:
 *     ?SetActivationPropertySet@ApplicationViewBackedViewHostItem@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801C3640 (-SetActivationPropertySet@ApplicationViewBackedViewHostItem@@UEAAJPEAUIPropertySet@Collections@F.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Internal::Shell::Holographic::CopyPropertySet(
        Windows::Internal::Shell::Holographic *this,
        struct Windows::Foundation::Collections::IPropertySet *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rbx
  int v15; // eax
  __int64 v17; // rdx
  __int64 v18; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+38h] [rbp-28h] BYREF
  __int64 v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+48h] [rbp-18h] BYREF
  __int64 v22[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  char v24; // [rsp+88h] [rbp+28h] BYREF
  char v25; // [rsp+90h] [rbp+30h] BYREF
  HSTRING string; // [rsp+98h] [rbp+38h] BYREF

  v22[1] = -2LL;
  v22[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v22);
  v5 = (**(__int64 (__fastcall ***)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *))a2)(
         a2,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         v22);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v21 = 0LL;
    v19 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    v7 = (**(__int64 (__fastcall ***)(Windows::Internal::Shell::Holographic *, GUID *, __int64 *))this)(
           this,
           &GUID_fe2f3d47_5d47_5499_8374_430c7cda0204,
           &v21);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v24 = 0;
      v9 = v21;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 48LL))(v9, &v19);
      v6 = v7;
      if ( v7 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v19 + 56LL))(v19, &v24);
        v6 = v7;
        if ( v7 >= 0 )
        {
          while ( 1 )
          {
            if ( !v24 )
            {
              v6 = 0;
              goto LABEL_17;
            }
            v18 = 0LL;
            v10 = v19;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
            v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 48LL))(v10, &v18);
            v6 = v11;
            if ( v11 < 0 )
              break;
            v25 = 0;
            string = 0LL;
            v12 = v18;
            WindowsDeleteString(0LL);
            string = 0LL;
            v13 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v12 + 48LL))(v12, &string);
            v6 = v13;
            if ( v13 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x3A,
                (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpropertysethelpers.h",
                (const char *)(unsigned int)v13);
              goto LABEL_23;
            }
            v20 = 0LL;
            v14 = v18;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
            v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 56LL))(v14, &v20);
            v6 = v15;
            if ( v15 < 0 )
            {
              v17 = 60LL;
LABEL_21:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v17,
                (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpropertysethelpers.h",
                (const char *)(unsigned int)v15);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
LABEL_23:
              WindowsDeleteString(string);
              string = 0LL;
              goto LABEL_25;
            }
            (*(void (__fastcall **)(__int64, HSTRING, __int64, char *))(*(_QWORD *)v22[0] + 80LL))(
              v22[0],
              string,
              v20,
              &v25);
            v15 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v19 + 64LL))(v19, &v24);
            v6 = v15;
            if ( v15 < 0 )
            {
              v17 = 64LL;
              goto LABEL_21;
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
            WindowsDeleteString(string);
            string = 0LL;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x35,
            (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpropertysethelpers.h",
            (const char *)(unsigned int)v11);
LABEL_25:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
          goto LABEL_17;
        }
        v8 = 47LL;
      }
      else
      {
        v8 = 46LL;
      }
    }
    else
    {
      v8 = 43LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpropertysethelpers.h",
      (const char *)(unsigned int)v7);
LABEL_17:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x26,
    (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpropertysethelpers.h",
    (const char *)(unsigned int)v5);
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v22);
  return v6;
}
