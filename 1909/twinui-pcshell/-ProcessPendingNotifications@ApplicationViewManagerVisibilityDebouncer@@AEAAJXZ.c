/*
 * XREFs of ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x180177D24
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e___::Invoke @ 0x180177D00 (CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e___--Invoke.c)
 * Callees:
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180032690 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180059100 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18016BCF0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCom_ea_18016BCF0.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18016C074 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonAp.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60_____lambda_5f803f865b4b07caa2d72f9fc7ffab60___ @ 0x180177128 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5f803f865b4b0.c)
 *     ??0ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@AEBU01@@Z @ 0x180177338 (--0ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@AEBU01@@Z.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1801774D0 (--0Iterator@-$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V-$ComPtr@UIApplicationVie.c)
 *     ?ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z @ 0x180177934 (-ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180177A8C (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V-$ComPtr@U.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ @ 0x180177CDC (-InternalRelease@-$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveAt@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K@Z @ 0x180178198 (-RemoveAt@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDe.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications(
        ApplicationViewManagerVisibilityDebouncer *this)
{
  struct IObjectArray *v2; // rdi
  ULONGLONG TickCount64; // rbx
  volatile int *v4; // rdx
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 *v9; // rax
  volatile int *v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rcx
  DWORD CurrentThreadId; // eax
  int v14; // edi
  ApplicationViewManagerVisibilityDebouncer *v16; // [rsp+40h] [rbp-31h] BYREF
  ApplicationViewManagerVisibilityDebouncer *v17; // [rsp+48h] [rbp-29h] BYREF
  unsigned int v18; // [rsp+50h] [rbp-21h] BYREF
  __int64 v19; // [rsp+58h] [rbp-19h]
  __int64 v20; // [rsp+60h] [rbp-11h]
  int v21; // [rsp+68h] [rbp-9h] BYREF
  __int64 v22; // [rsp+70h] [rbp-1h]
  __int64 v23; // [rsp+78h] [rbp+7h]
  struct IApplicationView *v24; // [rsp+80h] [rbp+Fh] BYREF
  unsigned int v25; // [rsp+88h] [rbp+17h]
  __int64 v26[7]; // [rsp+90h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  struct IObjectArray *v28; // [rsp+D8h] [rbp+67h] BYREF
  __int64 v29; // [rsp+E0h] [rbp+6Fh] BYREF
  ApplicationViewManagerVisibilityDebouncer *v30; // [rsp+E8h] [rbp+77h] BYREF

  v28 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
  AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)this + 15, &v28);
  if ( !*((_QWORD *)this + 10) )
    goto LABEL_27;
  v2 = v28;
  while ( 1 )
  {
    TickCount64 = GetTickCount64();
    ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::ApplicationViewManagerNotification(
      (ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)&v24,
      *((const struct ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification **)this + 9));
    if ( v25 == 1 )
      break;
LABEL_6:
    v16 = (ApplicationViewManagerVisibilityDebouncer *)v2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
    LODWORD(v17) = 0;
    v5 = ((__int64 (__fastcall *)(struct IObjectArray *, ApplicationViewManagerVisibilityDebouncer **))v2->lpVtbl->GetCount)(
           v2,
           &v17);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10,
        (__int64)"internal\\shell\\private\\inc\\objectarrayadapter.h",
        (const char *)(unsigned int)v5);
    details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::Iterator(
      (__int64)&v18,
      (__int64)&v16,
      0);
    details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::Iterator(
      (__int64)&v21,
      (__int64)&v16,
      (int)v17);
    while ( v18 != v21 || v20 != v23 )
    {
      v6 = v19;
      v29 = v19;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v29);
      (*(void (__fastcall **)(__int64, struct IApplicationView *, _QWORD, __int64))(*(_QWORD *)v6 + 24LL))(
        v6,
        v24,
        v25,
        v26[0]);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      ++v18;
      details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::GetCurrentObject(&v18);
    }
    v7 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v8 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::RemoveAt(
      (char *)this + 72,
      0LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v26);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    if ( !*((_QWORD *)this + 10) )
      goto LABEL_27;
  }
  if ( TickCount64 >= v26[1] + 50 )
  {
    ApplicationViewManagerVisibilityDebouncer::ClearCachedAppView((RTL_SRWLOCK *)this, (struct IUnknown *)v24);
    goto LABEL_6;
  }
  if ( *((_QWORD *)this + 22) )
  {
LABEL_26:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v26);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
LABEL_27:
    v14 = 0;
    goto LABEL_28;
  }
  v30 = this;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::InternalAddRef(
    (__int64)this,
    v4);
  v16 = this;
  v17 = this;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::AddRef((__int64)this);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 22);
  v9 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60_____lambda_5f803f865b4b07caa2d72f9fc7ffab60___(
         &v29,
         &v16);
  v11 = *v9;
  *v9 = 0LL;
  v12 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v12,
      v10);
  }
  CurrentThreadId = GetCurrentThreadId();
  v14 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease((__int64 *)&v17);
  if ( v14 >= 0 )
  {
    Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease((__int64 *)&v30);
    goto LABEL_26;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x128,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
    (const char *)(unsigned int)v14);
  Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease((__int64 *)&v30);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
LABEL_28:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
  return (unsigned int)v14;
}
