/*
 * XREFs of ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x18001E254
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180023A10 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x180020094 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180022984 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180065968 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$WindowEventDispatcher_PendingActivationPropertySetAdded@AEAPEAUIPropertySet@Collections@Foundation@Windows@@@ViewManagerInteropTabTraceLogging@@SAXAEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180071D7C (--$WindowEventDispatcher_PendingActivationPropertySetAdded@AEAPEAUIPropertySet@Collections@Found.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_7cb52cc91a5a866bcb2f7ec0d39eb038___ @ 0x18007ACAC (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_7cb52cc91a5a866bcb2f7ec0d39eb038___.c)
 *     ??$_Buynode@AEBV?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@?$_List_buy@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAU?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@1@PEAU21@0AEBV?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18007AF14 (--$_Buynode@AEBV-$com_ptr_t@V-$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@.c)
 *     ??$PendingActivationAdd@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x18007E3D8 (--$PendingActivationAdd@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z.c)
 *     ??$CreateRefCountedObj@UPendingActivationData@WindowEventDispatcher@@@@YA?AV?$ComPtr@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@@WRL@Microsoft@@XZ @ 0x18007E9E8 (--$CreateRefCountedObj@UPendingActivationData@WindowEventDispatcher@@@@YA-AV-$ComPtr@V-$CRefCoun.c)
 *     ?SetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@AEBU_GUID@@@Z @ 0x18007F9A0 (-SetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropert.c)
 *     ?GetActivationId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@PEA_K@Z @ 0x18007FA58 (-GetActivationId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@She.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800FA588 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?QueuePendingActivationForDestruction@WindowEventDispatcher@@AEAAX_K@Z @ 0x18022A26C (-QueuePendingActivationForDestruction@WindowEventDispatcher@@AEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall WindowEventDispatcher::QueuePendingActivation(
        RTL_SRWLOCK *this,
        struct IWindowWrapperInternal *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        char a4)
{
  _QWORD *v8; // rax
  const char *v9; // r9
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r14
  unsigned __int64 *v13; // r8
  int ActivationId; // eax
  const unsigned __int16 *v15; // rax
  int v16; // eax
  PVOID Ptr; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  const struct _GUID *v20; // r8
  HWND v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rsi
  LPVOID v24; // rcx
  __int64 v25; // rbx
  int v26; // edx
  int v27; // ecx
  int v28; // r9d
  PVOID v29; // rbx
  __int64 *v30; // r14
  __int64 v31; // rcx
  __int64 v32; // rdx
  char *v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rcx
  int ppv; // [rsp+28h] [rbp-59h]
  LPVOID *ppva; // [rsp+28h] [rbp-59h]
  LPVOID v38; // [rsp+38h] [rbp-49h] BYREF
  __int64 v39; // [rsp+40h] [rbp-41h] BYREF
  DWORD dwProcessId; // [rsp+48h] [rbp-39h] BYREF
  __int64 v41; // [rsp+50h] [rbp-31h] BYREF
  _QWORD *v42; // [rsp+58h] [rbp-29h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v43; // [rsp+60h] [rbp-21h] BYREF
  RTL_SRWLOCK *v44; // [rsp+68h] [rbp-19h] BYREF
  __int64 v45[3]; // [rsp+70h] [rbp-11h] BYREF
  GUID v46; // [rsp+88h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v45[2] = -2LL;
  v43 = a3;
  v8 = (_QWORD *)CreateRefCountedObj<WindowEventDispatcher::PendingActivationData>(&v39);
  v10 = (_QWORD *)*v8;
  *v8 = 0LL;
  v42 = v10;
  v11 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( !v10 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x855,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      v9);
    __debugbreak();
  }
  v12 = v10[4];
  v10[4] = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a3 + 8LL))(a3);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v39 = v10[4];
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v39);
  ActivationId = Windows::Internal::Shell::Desktop::ViewManagerInterop::GetActivationId(
                   (Windows::Internal::Shell::Desktop::ViewManagerInterop *)&v39,
                   (struct Windows::Internal::ShellHelpers::PropertySetHelper *)(v10 + 1),
                   v13);
  if ( ActivationId < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x85C,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)ActivationId,
      ppv);
    __debugbreak();
  }
  v15 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)a2 + 256LL))(a2);
  if ( v15 )
    v16 = Windows::Internal::String::_InitializeHelper((Windows::Internal::String *)(v10 + 2), v15);
  else
    v16 = -2147467261;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x85E,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v16,
      ppv);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    goto LABEL_20;
  }
  Ptr = this[42].Ptr;
  v41 = 0LL;
  if ( (*(int (__fastcall **)(PVOID, __int64 *))(*(_QWORD *)Ptr + 48LL))(Ptr, &v41) >= 0 )
  {
    v46 = GUID_NULL;
    if ( (*(int (__fastcall **)(__int64, GUID *))(*(_QWORD *)v41 + 32LL))(v41, &v46) >= 0 )
      Windows::Internal::Shell::Desktop::ViewManagerInterop::SetActivationVirtualDesktopId(
        (Windows::Internal::Shell::Desktop::ViewManagerInterop *)&v39,
        (struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v46,
        v20);
  }
  if ( a4 )
  {
    AcquireSRWLockShared(this + 58);
    *(_QWORD *)&v46.Data1 = this + 58;
    v21 = (HWND)(*(int (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)a2 + 240LL))(a2);
    if ( this != (RTL_SRWLOCK *)-464LL )
      ReleaseSRWLockShared(this + 58);
    v38 = 0LL;
    dwProcessId = 0;
    if ( !GetWindowThreadProcessId(v21, &dwProcessId) )
      goto LABEL_27;
    v38 = 0LL;
LABEL_20:
    if ( CoCreateInstance(&CLSID_OSTaskCompletion, 0LL, 1u, &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558, &v38) >= 0
      && (*(int (__fastcall **)(LPVOID, _QWORD, __int64))(*(_QWORD *)v38 + 24LL))(v38, dwProcessId, 0x100000LL) >= 0 )
    {
      v23 = v10[3];
      v24 = v38;
      v10[3] = v38;
      if ( v24 )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v24 + 8LL))(v24);
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      LOBYTE(v22) = 3;
      wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v24, v22);
      v25 = v10[1];
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        &v46,
        this);
      v44 = this;
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        v45,
        *(_QWORD *)&v46.Data1);
      v45[1] = v25;
      Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_7cb52cc91a5a866bcb2f7ec0d39eb038___(
        v27,
        v26,
        HIDWORD(this[61].Ptr),
        v28,
        (__int64)ppva,
        (__int64)&v44);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v45);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v46);
    }
LABEL_27:
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v38);
  }
  LOBYTE(v18) = 3;
  wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v19, v18);
  AcquireSRWLockExclusive(this + 58);
  v38 = &this[58];
  v29 = this[62].Ptr;
  v30 = (__int64 *)*((_QWORD *)v29 + 1);
  v32 = std::_List_buy<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>>::_Buynode<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy> const &>(
          v31,
          v29,
          v30,
          &v42);
  v33 = (char *)this[63].Ptr;
  if ( v33 == (char *)0xAAAAAAAAAAAAAA9LL )
    std::_Xlength_error("list<T> too long");
  this[63].Ptr = v33 + 1;
  *((_QWORD *)v29 + 1) = v32;
  *v30 = v32;
  v34 = (__int64)v42;
  *(_QWORD *)&v46.Data1 = WindowsGetStringRawBuffer((HSTRING)v42[2], 0LL);
  ViewManagerInteropTraceLogging::PendingActivationAdd<unsigned __int64 &,unsigned short const *>(v34 + 8, &v46);
  ViewManagerInteropTabTraceLogging::WindowEventDispatcher_PendingActivationPropertySetAdded<Windows::Foundation::Collections::IPropertySet * &>(&v43);
  while ( this[63].Ptr > (PVOID)0x80 )
    WindowEventDispatcher::QueuePendingActivationForDestruction(
      (WindowEventDispatcher *)this,
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this[62].Ptr + 16LL) + 8LL));
  if ( this != (RTL_SRWLOCK *)-464LL )
    ReleaseSRWLockExclusive(this + 58);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v41);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v42);
}
