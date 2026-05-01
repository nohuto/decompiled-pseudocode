/*
 * XREFs of ?TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@PEAUIUnknown@@PEAUIWin32ApplicationView@@_N@Z @ 0x180053CAC
 * Callers:
 *     ?OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@@Z @ 0x1800537F0 (-OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@@Z.c)
 *     ?_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@_N@Z @ 0x180222FC4 (-_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32.c)
 *     ?GetActivationValueSet@TabViewManager@@AEAA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18024E930 (-GetActivationValueSet@TabViewManager@@AEAA-AV-$com_ptr_t@UIPropertySet@Collections@Foundation@W.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?GetAppViewFileName@Win32ApplicationViewHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIWin32ApplicationView@@@Z @ 0x180053F94 (-GetAppViewFileName@Win32ApplicationViewHelpers@@YA-AV-$unique_any_t@V-$unique_storage@U-$resour.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180054690 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query@UIApplicationView@@AEAPEAUIWinRTApplicationView@@@wil@@YA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIWinRTApplicationView@@@Z @ 0x18008F05C (--$com_query@UIApplicationView@@AEAPEAUIWinRTApplicationView@@@wil@@YA-AV-$com_ptr_t@UIApplicati.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
__int64 *__fastcall Win32ApplicationViewHelpers::TryGetViewPropertySetFromHintsForWin32(
        __int64 *a1,
        IUnknown *a2,
        void *a3)
{
  void *v3; // rbx
  void (__fastcall *v4)(void *, LPVOID *); // rdi
  int v8; // eax
  void *v9; // rcx
  HRESULT v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  void *v14; // rax
  int v16; // [rsp+20h] [rbp-68h]
  LPVOID v17; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+38h] [rbp-50h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-48h] BYREF
  void *v20; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v21[2]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v22[2]; // [rsp+60h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  void *ppvOut; // [rsp+A0h] [rbp+18h] BYREF

  ppvOut = a3;
  v21[1] = -2LL;
  v21[0] = 0LL;
  v8 = (*(__int64 (__fastcall **)(void *, _QWORD *))(*(_QWORD *)a3 + 24LL))(a3, v21);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3E,
      (unsigned int)"internal\\onecoreuapshell\\inc\\win32applicationviewhelpers.h",
      (const char *)(unsigned int)v8,
      v16);
  }
  else
  {
    v18 = 0LL;
    wil::com_query<IApplicationView,IWinRTApplicationView * &>(&v20, &ppvOut);
    v17 = 0LL;
    v3 = v20;
    v4 = *(void (__fastcall **)(void *, LPVOID *))(*(_QWORD *)v20 + 136LL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v17,
      0LL);
    v4(v3, &v17);
    Win32ApplicationViewHelpers::GetAppViewFileName(&pv, a3);
    v9 = v17;
    if ( v17 )
      goto LABEL_3;
  }
  v14 = pv;
  if ( !pv )
    goto LABEL_8;
LABEL_3:
  ppvOut = 0LL;
  v10 = IUnknown_QueryService(a2, &guidService, &GUID_657a8842_0b5e_40e1_b8cb_9aafacc33aab, &ppvOut);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x58,
      (unsigned int)"internal\\onecoreuapshell\\inc\\win32applicationviewhelpers.h",
      (const char *)(unsigned int)v10,
      v16);
  }
  else
  {
    v3 = ppvOut;
    v4 = *(void (__fastcall **)(void *, LPVOID *))(*(_QWORD *)ppvOut + 32LL);
    v22[0] = v17;
    v22[1] = pv;
    v11 = v18;
    v18 = 0LL;
    if ( !v11 )
      goto LABEL_5;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_5:
  v12 = ((__int64 (__fastcall *)(void *, _QWORD *, GUID *, __int64 *))v4)(
          v3,
          v22,
          &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
          &v18);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x59,
      (unsigned int)"internal\\onecoreuapshell\\inc\\win32applicationviewhelpers.h",
      (const char *)(unsigned int)v12,
      v16);
  }
  else
  {
    v13 = v18;
    if ( !v18 )
    {
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&ppvOut);
      v9 = v17;
      v14 = pv;
LABEL_8:
      if ( v14 )
      {
        CoTaskMemFree(v14);
        v9 = v17;
      }
      if ( v9 )
        CoTaskMemFree(v9);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v20);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v18);
      *a1 = 0LL;
      return a1;
    }
  }
  v18 = 0LL;
  *a1 = v13;
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&ppvOut);
  if ( pv )
    CoTaskMemFree(pv);
  if ( v17 )
    CoTaskMemFree(v17);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v20);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v18);
  return a1;
}
