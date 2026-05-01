/*
 * XREFs of _lambda_2de9129cf7ca5d1ddf0542513b424d5e_::operator() @ 0x1802755A4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2de9129cf7ca5d1ddf0542513b424d5e___::Run @ 0x1802781D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2de9129cf7ca5d1ddf0542513b424d5e___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800239D8 (-GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??$query@UITabDragHandler@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UITabDragHandler@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800A6E30 (--$query@UITabDragHandler@@@-$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA-A.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x180140724 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180160640 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x1801628D0 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18024844C (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180258718 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?TryGetApplicationViewTabManager@@YA?AV?$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate@Tabs@ComposableShell@Internal@Windows@@@@PEAUHWND__@@PEBD@Z @ 0x18025F30C (-TryGetApplicationViewTabManager@@YA-AV-$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate.c)
 *     ??1TabViewManager_TabTransferStarted@TabViewManagerTraceLogging@@QEAA@XZ @ 0x180275478 (--1TabViewManager_TabTransferStarted@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ?AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z @ 0x18027630C (-AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z.c)
 *     ?PerformCancel@TabTransferManager@@AEAAX_N@Z @ 0x180277320 (-PerformCancel@TabTransferManager@@AEAAX_N@Z.c)
 *     ?StartActivity@TabViewManager_TabTransferStarted@TabViewManagerTraceLogging@@QEAAXU_GUID@@@Z @ 0x1802789C0 (-StartActivity@TabViewManager_TabTransferStarted@TabViewManagerTraceLogging@@QEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_2de9129cf7ca5d1ddf0542513b424d5e_::operator()(TabTransferManager **a1)
{
  _OWORD *v2; // rsi
  RTL_SRWLOCK *v3; // r14
  struct IApplicationView *v4; // rdx
  int CoreWindowForView; // r15d
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rdx
  void **v9; // rax
  RTL_SRWLOCK *v10; // rbx
  __int64 v11; // rbx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rbx
  TabTransferManager *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  TabTransferManager *v19; // rcx
  __int64 v20; // rax
  char v22; // [rsp+38h] [rbp-D0h] BYREF
  char v23; // [rsp+39h] [rbp-CFh] BYREF
  unsigned __int64 v24; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v26; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v27[5]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v28[40]; // [rsp+98h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+210h] [rbp+108h]

  v27[3] = -2LL;
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v28,
    (__int64)"TabViewManager_TabTransferStarted");
  v28[0] = &TabViewManagerTraceLogging::TabViewManager_TabTransferStarted::`vftable';
  v2 = a1 + 5;
  *(_OWORD *)&v27[1] = *(_OWORD *)(a1 + 5);
  TabViewManagerTraceLogging::TabViewManager_TabTransferStarted::StartActivity(
    (TabViewManagerTraceLogging::TabViewManager_TabTransferStarted *)v28,
    (struct _GUID *)&v27[1]);
  v3 = (RTL_SRWLOCK *)((char *)*a1 + 48);
  AcquireSRWLockExclusive(v3);
  v27[1] = v3;
  if ( *((_DWORD *)*a1 + 71) )
    TabTransferManager::PerformCancel(*a1, 1);
  CoreWindowForView = ApplicationViewHelpers::GetCoreWindowForView(
                        (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a1[8],
                        v4);
  v6 = (*(__int64 (__fastcall **)(TabTransferManager *, _QWORD *))(*(_QWORD *)a1[7] + 48LL))(a1[7], (_QWORD *)*a1 + 26);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 486LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_34;
  }
  v6 = (*(__int64 (__fastcall **)(TabTransferManager *, _QWORD *, _QWORD **))(*(_QWORD *)a1[4] + 104LL))(
         a1[4],
         (_QWORD *)*a1 + 26,
         (_QWORD **)a1 + 5);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 488LL;
    goto LABEL_9;
  }
  v6 = (*(__int64 (__fastcall **)(TabTransferManager *, _QWORD *))(*(_QWORD *)a1[4] + 112LL))(a1[4], (_QWORD *)*a1 + 26);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 489LL;
    goto LABEL_9;
  }
  v24 = 0LL;
  v9 = wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::query<ITabDragHandler>(
         (struct IWeakReference **)*a1 + 8,
         (void **)&v26);
  (*(void (__fastcall **)(void *, TabTransferManager *, unsigned __int64 *))(*(_QWORD *)*v9 + 40LL))(*v9, a1[8], &v24);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v26);
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(
    (__int64 *)*a1 + 32,
    (__int64)a1[8]);
  v10 = (RTL_SRWLOCK *)((char *)*a1 + 56);
  AcquireSRWLockExclusive(v10);
  *((_OWORD *)*a1 + 12) = *v2;
  if ( v10 )
    ReleaseSRWLockExclusive(v10);
  TabTransferManager::AdvanceTransfer(*a1, 1LL);
  v22 = 0;
  TryGetApplicationViewTabManager(&v25, (HWND)CoreWindowForView, "OnTabTransferStarting");
  v11 = v25;
  if ( v25 )
  {
    CRPCTimeout::CRPCTimeout((CRPCTimeout *)&v26, 0);
    v27[0] = v11;
    v7 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 96LL))(v11, &v22);
    CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)&v26);
    if ( v7 < 0 )
    {
      v12 = (unsigned int)v7;
      v13 = 508LL;
LABEL_29:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
        (const char *)v12);
      goto LABEL_32;
    }
    *((_BYTE *)*a1 + 252) = v22 != 0;
    v14 = v24;
    if ( !v22 || v24 <= 1 )
    {
      v22 = 0;
      goto LABEL_25;
    }
    v22 = 1;
    *((_BYTE *)*a1 + 253) = 1;
    v15 = v25;
    CRPCTimeout::CRPCTimeout((CRPCTimeout *)&v26, 0);
    v27[0] = v15;
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, TabTransferManager *, char *))(*(_QWORD *)v15 + 80LL))(
           v15,
           0LL,
           a1[2],
           &v23);
    CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)&v26);
    if ( v7 < 0 )
    {
      v12 = (unsigned int)v7;
      v13 = 518LL;
      goto LABEL_29;
    }
    if ( v23 )
    {
      v16 = *a1;
      v17 = *(_QWORD *)*a1;
      v26 = *v2;
      v18 = (*(__int64 (__fastcall **)(TabTransferManager *, __int128 *))(v17 + 72))(v16, &v26);
      v7 = v18;
      if ( v18 < 0 )
      {
        v13 = 523LL;
LABEL_28:
        v12 = (unsigned int)v18;
        goto LABEL_29;
      }
    }
  }
  if ( v22 )
    goto LABEL_31;
  v14 = v24;
LABEL_25:
  v19 = *a1;
  if ( v14 <= 1 )
  {
    TabTransferManager::AdvanceTransfer(v19, 2LL);
  }
  else
  {
    v20 = *(_QWORD *)v19;
    v26 = *v2;
    v18 = (*(__int64 (__fastcall **)(TabTransferManager *, __int128 *))(v20 + 72))(v19, &v26);
    v7 = v18;
    if ( v18 < 0 )
    {
      v13 = 534LL;
      goto LABEL_28;
    }
  }
LABEL_31:
  wil::ActivityBase<TabShellTelemetryProvider,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v28);
  v7 = 0;
LABEL_32:
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
LABEL_34:
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  TabViewManagerTraceLogging::TabViewManager_TabTransferStarted::~TabViewManager_TabTransferStarted((TabViewManagerTraceLogging::TabViewManager_TabTransferStarted *)v28);
  return (unsigned int)v7;
}
