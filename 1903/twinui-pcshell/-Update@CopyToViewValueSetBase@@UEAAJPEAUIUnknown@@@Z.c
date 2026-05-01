/*
 * XREFs of ?Update@CopyToViewValueSetBase@@UEAAJPEAUIUnknown@@@Z @ 0x180390E40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$iterable_range_nothrow@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@wil@@QEAA@PEAU?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@PEAJ@Z @ 0x18038F630 (--0-$iterable_range_nothrow@PEAU-$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Fo.c)
 *     ??Eiterable_iterator_nothrow@?$iterable_range_nothrow@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@wil@@QEAAAEAV012@XZ @ 0x18038F8BC (--Eiterable_iterator_nothrow@-$iterable_range_nothrow@PEAU-$IKeyValuePair@PEAUHSTRING__@@PEAUIIn.c)
 */

__int64 __fastcall CopyToViewValueSetBase::Update(CopyToViewValueSetBase *this, struct IUnknown *a2)
{
  struct IUnknownVtbl *lpVtbl; // rax
  int v4; // eax
  unsigned int v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  __int64 *v8; // rsi
  int v9; // edx
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, HSTRING *); // rbx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v16; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 *v18; // [rsp+48h] [rbp-38h] BYREF
  int v19; // [rsp+50h] [rbp-30h]
  __int64 v20; // [rsp+58h] [rbp-28h] BYREF
  __int64 v21[4]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  char v23; // [rsp+A8h] [rbp+28h] BYREF
  char *v24; // [rsp+B0h] [rbp+30h] BYREF
  HSTRING string; // [rsp+B8h] [rbp+38h] BYREF

  v17[1] = -2LL;
  lpVtbl = a2->lpVtbl;
  v17[0] = 0LL;
  v4 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a2,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         v17);
  v5 = v4;
  if ( v4 >= 0 )
  {
    wil::iterable_range_nothrow<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>::iterable_range_nothrow<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>(
      &v20,
      *((_QWORD *)this + 7),
      &v24);
    v8 = &v20;
    v18 = &v20;
    v9 = (v20 != 0) - 1;
    v19 = v9;
    while ( *(int *)v8[2] >= 0 && v9 != -1 )
    {
      string = 0LL;
      v10 = v8[1];
      v11 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v10 + 48LL);
      WindowsDeleteString(0LL);
      string = 0LL;
      v12 = v11(v10, &string);
      v5 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x86,
          (__int64)"internal\\shellcommoncomposable\\inc\\tabbedprojecthelpers.h",
          (const char *)(unsigned int)v12);
        goto LABEL_14;
      }
      v16 = 0LL;
      v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8[1] + 56LL))(v8[1], &v16);
      v5 = v13;
      if ( v13 < 0 )
      {
        v14 = 136LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (__int64)"internal\\shellcommoncomposable\\inc\\tabbedprojecthelpers.h",
          (const char *)(unsigned int)v13);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v16);
LABEL_14:
        WindowsDeleteString(string);
        string = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
        goto LABEL_19;
      }
      v13 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, char *))(*(_QWORD *)v17[0] + 80LL))(
              v17[0],
              string,
              v16,
              &v23);
      v5 = v13;
      if ( v13 < 0 )
      {
        v14 = 139LL;
        goto LABEL_12;
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v16);
      WindowsDeleteString(string);
      wil::iterable_range_nothrow<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>::iterable_iterator_nothrow::operator++(&v18);
      v9 = v19;
      v8 = v18;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    v5 = (unsigned int)v24;
    if ( (int)v24 >= 0 )
    {
      v5 = 0;
      goto LABEL_19;
    }
    v6 = (unsigned int)v24;
    v7 = 141LL;
  }
  else
  {
    v6 = (unsigned int)v4;
    v7 = 128LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"internal\\shellcommoncomposable\\inc\\tabbedprojecthelpers.h",
    (const char *)v6);
LABEL_19:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v17);
  return v5;
}
