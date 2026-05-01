/*
 * XREFs of ?Update@LaunchNewTabPageService@@UEAAJPEAUIUnknown@@@Z @ 0x1801EEC60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LaunchNewTabPageService::Update(LaunchNewTabPageService *this, struct IUnknown *a2)
{
  int ActivationFactory; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rbx
  HSTRING_HEADER *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rbx
  HSTRING_HEADER *v16; // rax
  _BYTE v18[8]; // [rsp+38h] [rbp-19h] BYREF
  __int64 v19; // [rsp+40h] [rbp-11h] BYREF
  __int64 v20; // [rsp+48h] [rbp-9h] BYREF
  __int64 v21[3]; // [rsp+50h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+17h] BYREF
  __int64 v23; // [rsp+80h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v21[1] = -2LL;
  v21[0] = 0LL;
  v23 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.PropertyValue",
    0x21u,
    0x20u);
  ActivationFactory = RoGetActivationFactory(v23, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, v21);
  v5 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    *(_OWORD *)&hstringHeader.Reserved.Reserved1 = *((_OWORD *)this + 3);
    v19 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, HSTRING_HEADER *, __int64 *))(*(_QWORD *)v21[0] + 160LL))(
           v21[0],
           &hstringHeader,
           &v19);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v20 = 0LL;
      v7 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
             a2,
             &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
             &v20);
      v5 = v7;
      if ( v7 >= 0 )
      {
        v9 = v20;
        v10 = v19;
        v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                &hstringHeader,
                (const WCHAR **)off_180400278);
        v7 = (*(__int64 (__fastcall **)(__int64, PVOID, __int64, _BYTE *))(*(_QWORD *)v9 + 80LL))(
               v9,
               v11[1].Reserved.Reserved1,
               v10,
               v18);
        v5 = v7;
        if ( v7 >= 0 )
        {
          *(_OWORD *)&hstringHeader.Reserved.Reserved1 = 0uLL;
          v12 = v21[0];
          v13 = v19;
          v19 = 0LL;
          if ( v13 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          v7 = (*(__int64 (__fastcall **)(__int64, HSTRING_HEADER *, __int64 *))(*(_QWORD *)v12 + 160LL))(
                 v12,
                 &hstringHeader,
                 &v19);
          v5 = v7;
          if ( v7 >= 0 )
          {
            v14 = v20;
            v15 = v19;
            v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                    &hstringHeader,
                    (const WCHAR **)off_180400268);
            v7 = (*(__int64 (__fastcall **)(__int64, PVOID, __int64, _BYTE *))(*(_QWORD *)v14 + 80LL))(
                   v14,
                   v16[1].Reserved.Reserved1,
                   v15,
                   v18);
            v5 = v7;
            if ( v7 >= 0 )
            {
              wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v20);
              wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v19);
              v5 = 0;
              goto LABEL_18;
            }
            v8 = 69LL;
          }
          else
          {
            v8 = 68LL;
          }
        }
        else
        {
          v8 = 65LL;
        }
      }
      else
      {
        v8 = 62LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"internal\\shellcommoncomposable\\inc\\TabbedProjectHelpers.h",
        (const char *)(unsigned int)v7);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v20);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B,
        (__int64)"internal\\shellcommoncomposable\\inc\\TabbedProjectHelpers.h",
        (const char *)(unsigned int)v6);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v19);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38,
      (__int64)"internal\\shellcommoncomposable\\inc\\TabbedProjectHelpers.h",
      (const char *)(unsigned int)ActivationFactory);
  }
LABEL_18:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v21);
  return v5;
}
