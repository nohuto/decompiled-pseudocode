/*
 * XREFs of ?Update@LaunchNewTabPageService@@UEAAJPEAUIUnknown@@@Z @ 0x180260680
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LaunchNewTabPageService::Update(LaunchNewTabPageService *this, struct IUnknown *a2)
{
  int ActivationFactory; // eax
  unsigned int v5; // ebx
  __int64 v6; // rax
  int v7; // eax
  struct IUnknownVtbl *lpVtbl; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, PVOID, __int64, _BYTE *); // rdi
  HSTRING_HEADER *v13; // rax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, HSTRING_HEADER *, __int64 *); // rdi
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, PVOID, __int64, _BYTE *); // rdi
  HSTRING_HEADER *v19; // rax
  _BYTE v21[8]; // [rsp+38h] [rbp-19h] BYREF
  __int64 v22; // [rsp+40h] [rbp-11h] BYREF
  __int64 v23; // [rsp+48h] [rbp-9h] BYREF
  __int64 v24[3]; // [rsp+50h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+17h] BYREF
  __int64 v26; // [rsp+80h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v24[1] = -2LL;
  v24[0] = 0LL;
  v26 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.PropertyValue",
    0x21u,
    0x20u);
  ActivationFactory = RoGetActivationFactory(v26, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, v24);
  v5 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v22 = 0LL;
    v6 = *(_QWORD *)v24[0];
    *(_OWORD *)&hstringHeader.Reserved.Reserved1 = *((_OWORD *)this + 3);
    v7 = (*(__int64 (__fastcall **)(__int64, HSTRING_HEADER *, __int64 *))(v6 + 160))(v24[0], &hstringHeader, &v22);
    v5 = v7;
    if ( v7 >= 0 )
    {
      lpVtbl = a2->lpVtbl;
      v23 = 0LL;
      v9 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
             a2,
             &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
             &v23);
      v5 = v9;
      if ( v9 >= 0 )
      {
        v11 = v23;
        v12 = *(__int64 (__fastcall **)(__int64, PVOID, __int64, _BYTE *))(*(_QWORD *)v23 + 80LL);
        v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                &hstringHeader,
                (const WCHAR **)off_180487E38);
        v9 = v12(v11, v13[1].Reserved.Reserved1, v22, v21);
        v5 = v9;
        if ( v9 >= 0 )
        {
          *(_OWORD *)&hstringHeader.Reserved.Reserved1 = 0uLL;
          v14 = v24[0];
          v15 = *(__int64 (__fastcall **)(__int64, HSTRING_HEADER *, __int64 *))(*(_QWORD *)v24[0] + 160LL);
          v16 = v22;
          v22 = 0LL;
          if ( v16 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          v9 = v15(v14, &hstringHeader, &v22);
          v5 = v9;
          if ( v9 >= 0 )
          {
            v17 = v23;
            v18 = *(__int64 (__fastcall **)(__int64, PVOID, __int64, _BYTE *))(*(_QWORD *)v23 + 80LL);
            v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                    &hstringHeader,
                    (const WCHAR **)off_180487E28);
            v9 = v18(v17, v19[1].Reserved.Reserved1, v22, v21);
            v5 = v9;
            if ( v9 >= 0 )
            {
              wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v23);
              wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v22);
              v5 = 0;
              goto LABEL_18;
            }
            v10 = 69LL;
          }
          else
          {
            v10 = 68LL;
          }
        }
        else
        {
          v10 = 65LL;
        }
      }
      else
      {
        v10 = 62LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"internal\\shellcommoncomposable\\inc\\TabbedProjectHelpers.h",
        (const char *)(unsigned int)v9);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v23);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B,
        (__int64)"internal\\shellcommoncomposable\\inc\\TabbedProjectHelpers.h",
        (const char *)(unsigned int)v7);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v22);
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
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v24);
  return v5;
}
