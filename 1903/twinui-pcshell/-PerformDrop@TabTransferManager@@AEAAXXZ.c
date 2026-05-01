/*
 * XREFs of ?PerformDrop@TabTransferManager@@AEAAXXZ @ 0x18025858C
 * Callers:
 *     ?AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z @ 0x180256DAC (-AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UITabDragHandler@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UITabDragHandler@@Uerr_exception_policy@wil@@@1@XZ @ 0x180099D40 (--$query@UITabDragHandler@@@-$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA-A.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x180121284 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180141028 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x180143530 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ?TryGetApplicationViewTabManager@@YA?AV?$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate@Tabs@ComposableShell@Internal@Windows@@@@PEAUHWND__@@PEBD@Z @ 0x18023FD1C (-TryGetApplicationViewTabManager@@YA-AV-$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate.c)
 *     ?TryGetApplicationViewTabManager@@YA?AV?$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate@Tabs@ComposableShell@Internal@Windows@@@@PEAUIApplicationView@@PEBD@Z @ 0x18023FDC4 (-TryGetApplicationViewTabManager@@YA-AV-$com_ptr_with_timeout@UIApplicationViewTabM_ea_18023FDC4.c)
 *     ??$TabTransferManager_SetTransferState@I@TabViewManagerTraceLogging@@SAX$$QEAI@Z @ 0x180255A78 (--$TabTransferManager_SetTransferState@I@TabViewManagerTraceLogging@@SAX$$QEAI@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall TabTransferManager::PerformDrop(TabTransferManager *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int128 *, __int64 *); // rbx
  int v4; // eax
  __int64 v5; // rax
  bool v6; // al
  __int64 *v7; // rcx
  void *v8; // rbx
  __int64 (__fastcall *v9)(void *, _QWORD, char *, char *); // rsi
  int v10; // eax
  __int64 *v11; // rbx
  __int64 v12; // rax
  int v13; // eax
  __int64 *v14; // rbx
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  __int128 v18; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v19[24]; // [rsp+50h] [rbp-20h] BYREF
  __int64 *v20; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 *v22; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+38h] BYREF
  __int64 *v24; // [rsp+B0h] [rbp+40h] BYREF

  LODWORD(v22) = 16;
  TabViewManagerTraceLogging::TabTransferManager_SetTransferState<unsigned int>((unsigned int *)&v22);
  *((_DWORD *)this + 71) |= 0x10u;
  v23 = 0LL;
  v2 = *((_QWORD *)this + 9);
  v3 = *(__int64 (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v2 + 96LL);
  v18 = *((_OWORD *)this + 12);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v23);
  v4 = v3(v2, &v18, &v23);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      329LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  if ( !v23 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      330LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
      (const char *)0x80070490LL);
    __debugbreak();
  }
  v5 = *((_QWORD *)this + 28) - *(_QWORD *)&GUID_NULL.Data1;
  if ( !v5 )
    v5 = *((_QWORD *)this + 29) - *(_QWORD *)GUID_NULL.Data4;
  v6 = v5 == 0;
  if ( !*((_BYTE *)this + 252) )
  {
    v7 = (__int64 *)((char *)this + 264);
LABEL_9:
    wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(v7, *((_QWORD *)this + 32));
    goto LABEL_31;
  }
  if ( !v6 )
  {
    wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::query<ITabDragHandler>(
      (struct IWeakReference **)this + 8,
      (void **)&v22);
    v8 = v22;
    v9 = *(__int64 (__fastcall **)(void *, _QWORD, char *, char *))(*v22 + 48);
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 33);
    v10 = v9(v8, *((_QWORD *)this + 32), (char *)this + 224, (char *)this + 264);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        348LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
        (const char *)(unsigned int)v10);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v22);
  }
  if ( !*((_QWORD *)this + 33) )
  {
    v7 = (__int64 *)((char *)this + 264);
    if ( !*((_BYTE *)this + 253) )
      goto LABEL_9;
    wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(v7, *((_QWORD *)this + 34));
    TryGetApplicationViewTabManager(&v22, (HWND)*((int *)this + 70), "PerformDrop_NotifyDefaultTabChanged");
    v11 = v22;
    if ( v22 )
    {
      CRPCTimeout::CRPCTimeout((CRPCTimeout *)v19, 0);
      v20 = v11;
      v12 = *v11;
      v18 = *((_OWORD *)this + 12);
      v13 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v12 + 56))(v11, &v18);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x170,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
          (const char *)(unsigned int)v13);
      CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v19);
      v11 = v22;
    }
    if ( v11 )
      (*(void (__fastcall **)(__int64 *))(*v11 + 16))(v11);
  }
  LODWORD(v22) = 256;
  TabViewManagerTraceLogging::TabTransferManager_SetTransferState<unsigned int>((unsigned int *)&v22);
  *((_DWORD *)this + 71) |= 0x100u;
  TryGetApplicationViewTabManager(
    &v24,
    *((__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64 *))this + 33),
    "OnTabTransferReceiving");
  v14 = v24;
  if ( v24 )
  {
    CRPCTimeout::CRPCTimeout((CRPCTimeout *)v19, 0);
    v20 = v14;
    v15 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64 **))(*v14 + 80))(v14, 1LL, v23, &v22);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        391LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
        (const char *)(unsigned int)v15);
    CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v19);
    if ( (_BYTE)v22 )
    {
      v16 = *(_QWORD *)this;
      v18 = *((_OWORD *)this + 12);
      v17 = (*(__int64 (__fastcall **)(TabTransferManager *, __int128 *))(v16 + 72))(this, &v18);
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          396LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
          (const char *)(unsigned int)v17);
        __debugbreak();
      }
    }
    v14 = v24;
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64 *))(*v14 + 16))(v14);
LABEL_31:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v23);
}
