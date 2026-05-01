/*
 * XREFs of ?Update@CopyToViewValueSetBase@@UEAAJPEAUIUnknown@@@Z @ 0x180330CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$IterableRangeNoThrow@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@wil@@QEAA@PEAU?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@PEAJ@Z @ 0x18032F23C (--0-$IterableRangeNoThrow@PEAU-$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foun.c)
 *     ??EIterableIteratorNoThrow@?$IterableRangeNoThrow@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@wil@@QEAAAEAV012@XZ @ 0x18032F648 (--EIterableIteratorNoThrow@-$IterableRangeNoThrow@PEAU-$IKeyValuePair@PEAUHSTRING__@@PEAUIInspec.c)
 */

__int64 __fastcall CopyToViewValueSetBase::Update(CopyToViewValueSetBase *this, struct IUnknown *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  __int64 *v7; // rdi
  int v8; // ecx
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v15; // [rsp+30h] [rbp-50h] BYREF
  __int64 v16[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 *v17; // [rsp+48h] [rbp-38h] BYREF
  int v18; // [rsp+50h] [rbp-30h]
  __int64 v19; // [rsp+58h] [rbp-28h] BYREF
  __int64 v20[4]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  char v22; // [rsp+A8h] [rbp+28h] BYREF
  char *v23; // [rsp+B0h] [rbp+30h] BYREF
  HSTRING string; // [rsp+B8h] [rbp+38h] BYREF

  v16[1] = -2LL;
  v16[0] = 0LL;
  v3 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         v16);
  v4 = v3;
  if ( v3 >= 0 )
  {
    wil::IterableRangeNoThrow<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>::IterableRangeNoThrow<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>(
      &v19,
      *((_QWORD *)this + 7),
      &v23);
    v7 = &v19;
    v17 = &v19;
    v8 = (v19 != 0) - 1;
    v18 = v8;
    while ( *(int *)v7[2] >= 0 && v8 != -1 )
    {
      string = 0LL;
      v9 = v7[1];
      WindowsDeleteString(0LL);
      string = 0LL;
      v10 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v9 + 48LL))(v9, &string);
      v4 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x86,
          (__int64)"internal\\shellcommoncomposable\\inc\\tabbedprojecthelpers.h",
          (const char *)(unsigned int)v10);
        goto LABEL_14;
      }
      v11 = v7[1];
      v15 = 0LL;
      v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 56LL))(v11, &v15);
      v4 = v12;
      if ( v12 < 0 )
      {
        v13 = 136LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"internal\\shellcommoncomposable\\inc\\tabbedprojecthelpers.h",
          (const char *)(unsigned int)v12);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v15);
LABEL_14:
        WindowsDeleteString(string);
        string = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v20);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
        goto LABEL_19;
      }
      v12 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, char *))(*(_QWORD *)v16[0] + 80LL))(
              v16[0],
              string,
              v15,
              &v22);
      v4 = v12;
      if ( v12 < 0 )
      {
        v13 = 139LL;
        goto LABEL_12;
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v15);
      WindowsDeleteString(string);
      wil::IterableRangeNoThrow<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>::IterableIteratorNoThrow::operator++(&v17);
      v8 = v18;
      v7 = v17;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v20);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    v4 = (unsigned int)v23;
    if ( (int)v23 >= 0 )
    {
      v4 = 0;
      goto LABEL_19;
    }
    v5 = (unsigned int)v23;
    v6 = 141LL;
  }
  else
  {
    v5 = (unsigned int)v3;
    v6 = 128LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"internal\\shellcommoncomposable\\inc\\tabbedprojecthelpers.h",
    (const char *)v5);
LABEL_19:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v16);
  return v4;
}
