/*
 * XREFs of ?GetActivationValueSet@TabViewManager@@AEAA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1801DB9E0
 * Callers:
 *     ?TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z @ 0x1801ECEF0 (-TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004D38C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_copy@UIPropertySet@Collections@Foundation@Windows@@AEAPEAUIUnknown@@@wil@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@0@AEAPEAUIUnknown@@@Z @ 0x18008FB08 (--$com_copy@UIPropertySet@Collections@Foundation@Windows@@AEAPEAUIUnknown@@@wil@@YA-AV-$com_ptr_.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$ActivateInstance@UIPropertySet@Collections@Foundation@Windows@@@wil@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1801CDF34 (--$ActivateInstance@UIPropertySet@Collections@Foundation@Windows@@@wil@@YA-AV-$com_ptr_t@UIPrope.c)
 *     _anonymous_namespace_::GetAppViewFileName @ 0x1801DBD50 (_anonymous_namespace_--GetAppViewFileName.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *TabViewManager::GetActivationValueSet(__int64 a1, __int64 *a2, __int64 a3, ...)
{
  int v6; // eax
  __int64 v7; // rax
  void *v8; // rax
  void *v9; // rcx
  void *v10; // rcx
  HRESULT v11; // eax
  void *v12; // rbx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  LPVOID v17; // [rsp+30h] [rbp-50h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-48h] BYREF
  __int64 v19[2]; // [rsp+40h] [rbp-40h] BYREF
  IUnknown *punk[2]; // [rsp+50h] [rbp-30h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-20h] BYREF
  int v22; // [rsp+68h] [rbp-18h]
  _QWORD v23[2]; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]
  __int64 v25; // [rsp+A8h] [rbp+28h] BYREF
  va_list va; // [rsp+A8h] [rbp+28h]
  va_list va1; // [rsp+B0h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v25 = va_arg(va1, _QWORD);
  v23[1] = -2LL;
  v22 = 0;
  if ( !v25 )
  {
    (**(void (__fastcall ***)(__int64, GUID *, __int64 *))a3)(a3, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, v19);
    if ( v19[0] )
    {
      v23[0] = 0LL;
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v19[0] + 24LL))(v19[0], v23);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          2573LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v6);
      v25 = 0LL;
      if ( (int)CoreQueryWindowService(
                  v23[0],
                  &unk_1804774A0,
                  &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
                  (__int64 *)va) >= 0 )
      {
        CoreUnregisterWindowService(v23[0], &unk_1804774A0);
        v7 = v25;
        v25 = 0LL;
        *a2 = v7;
LABEL_8:
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)va);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v19);
        return a2;
      }
      v17 = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        &v17,
        0LL);
      (*(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)a3 + 136LL))(a3, &v17);
      anonymous_namespace_::GetAppViewFileName(&pv, v19[0]);
      v8 = v17;
      if ( v17 || (v9 = pv) != 0LL )
      {
        ppvOut = 0LL;
        punk[0] = 0LL;
        v22 = 8;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)punk);
        (*(void (__fastcall **)(__int64, GUID *, IUnknown **))(*(_QWORD *)(a1 + 8) + 32LL))(
          a1 + 8,
          &GUID_00000000_0000_0000_c000_000000000046,
          punk);
        v10 = ppvOut;
        ppvOut = 0LL;
        if ( v10 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
        v11 = IUnknown_QueryService(punk[0], &stru_1804774B0, &GUID_657a8842_0b5e_40e1_b8cb_9aafacc33aab, &ppvOut);
        if ( v11 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            2598LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v11);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)punk);
        punk[0] = (IUnknown *)v17;
        punk[1] = (IUnknown *)pv;
        v12 = ppvOut;
        v13 = v25;
        v25 = 0LL;
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        v14 = (*(__int64 (__fastcall **)(void *, IUnknown **, GUID *, __int64 *))(*(_QWORD *)v12 + 32LL))(
                v12,
                punk,
                &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
                (__int64 *)va);
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            2599LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v14);
          __debugbreak();
        }
        v15 = v25;
        if ( v25 )
        {
          v25 = 0LL;
          *a2 = v15;
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&ppvOut);
          if ( pv )
            CoTaskMemFree(pv);
          if ( v17 )
            CoTaskMemFree(v17);
          goto LABEL_8;
        }
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&ppvOut);
        v8 = v17;
        v9 = pv;
      }
      if ( v9 )
      {
        CoTaskMemFree(v9);
        v8 = v17;
      }
      if ( v8 )
        CoTaskMemFree(v8);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)va);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v19);
    wil::ActivateInstance<Windows::Foundation::Collections::IPropertySet>((__int64)a2);
    return a2;
  }
  wil::com_copy<Windows::Foundation::Collections::IPropertySet,IUnknown * &>(a2, (__int64 *)va);
  return a2;
}
