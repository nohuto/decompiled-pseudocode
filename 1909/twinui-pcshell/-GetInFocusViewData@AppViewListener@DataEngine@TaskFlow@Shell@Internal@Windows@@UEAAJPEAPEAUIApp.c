/*
 * XREFs of ?GetInFocusViewData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAPEAUIAppViewExecutionData@23456@@Z @ 0x180217D90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ @ 0x1800A5264 (--B-$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception.c)
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x1800A5478 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 *     ?copy_to@?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXAEBU_GUID@@PEAPEAX@Z @ 0x1800A6374 (-copy_to@-$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exc.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::GetInFocusViewData(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *this,
        struct Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewExecutionData **a2)
{
  __int64 v4; // rdi
  int (__fastcall *v5)(__int64); // rbx
  __int64 v6; // rdx
  const char *v7; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 (__fastcall ***v10)(ApplicationViewHelpers *, GUID *, __int64 *); // [rsp+50h] [rbp+8h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, GUID *); // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  v4 = *((_QWORD *)this + 9);
  v5 = *(int (__fastcall **)(__int64))(*(_QWORD *)v4 + 72LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  try
  {
    if ( v5(v4) >= 0 )
    {
      Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState(
        (__int64)this - 24,
        (__int64 *)&v11,
        2,
        v10);
      if ( wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewExecutionData,wil::err_exception_policy>::operator bool(&v11) )
        wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewExecutionData,wil::err_exception_policy>::copy_to(
          &v11,
          v6,
          a2);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v11);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6A,
                           (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
                           v7);
  }
  return result;
}
