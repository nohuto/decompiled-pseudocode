/*
 * XREFs of ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x180158AC4
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e___::Invoke @ 0x180158AA0 (CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e___--Invoke.c)
 * Callees:
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x1800293E0 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60_____lambda_5f803f865b4b07caa2d72f9fc7ffab60___ @ 0x180157EC8 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5f803f865b4b0.c)
 *     ??0ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@AEBU01@@Z @ 0x1801580D4 (--0ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@AEBU01@@Z.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x18015826C (--0Iterator@-$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V-$ComPtr@UIApplicationVie.c)
 *     ?ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z @ 0x1801586D4 (-ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18015882C (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V-$ComPtr@U.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ @ 0x180158A7C (-InternalRelease@-$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveAt@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K@Z @ 0x180158F20 (-RemoveAt@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDe.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications(
        ApplicationViewManagerVisibilityDebouncer *this)
{
  struct IObjectArray *v2; // rdi
  ULONGLONG TickCount64; // rbx
  int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // r14d
  volatile signed __int32 **v9; // rax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rcx
  DWORD CurrentThreadId; // eax
  int v13; // edi
  struct IObjectArray *v15; // [rsp+30h] [rbp-59h] BYREF
  int v16; // [rsp+38h] [rbp-51h] BYREF
  struct IApplicationView *v17; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v18; // [rsp+48h] [rbp-41h]
  __int64 v19; // [rsp+50h] [rbp-39h] BYREF
  __int64 v20; // [rsp+58h] [rbp-31h]
  unsigned int v21; // [rsp+60h] [rbp-29h] BYREF
  __int64 v22; // [rsp+68h] [rbp-21h]
  __int64 v23; // [rsp+70h] [rbp-19h]
  ApplicationViewManagerVisibilityDebouncer *v24; // [rsp+78h] [rbp-11h] BYREF
  ApplicationViewManagerVisibilityDebouncer *v25; // [rsp+80h] [rbp-9h] BYREF
  int v26; // [rsp+88h] [rbp-1h] BYREF
  __int64 v27; // [rsp+90h] [rbp+7h]
  __int64 v28; // [rsp+98h] [rbp+Fh]
  __int64 v29; // [rsp+A0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]
  struct IObjectArray *v31; // [rsp+F0h] [rbp+67h] BYREF
  volatile signed __int32 *v32; // [rsp+F8h] [rbp+6Fh] BYREF
  ApplicationViewManagerVisibilityDebouncer *v33; // [rsp+100h] [rbp+77h] BYREF
  __int64 v34; // [rsp+108h] [rbp+7Fh] BYREF

  v29 = -2LL;
  v31 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
  AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)this + 15, &v31);
  if ( !*((_QWORD *)this + 10) )
    goto LABEL_27;
  v2 = v31;
  while ( 1 )
  {
    TickCount64 = GetTickCount64();
    ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::ApplicationViewManagerNotification(
      (ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)&v17,
      *((const struct ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification **)this + 9));
    if ( v18 == 1 )
      break;
LABEL_6:
    v15 = v2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
    v16 = 0;
    v4 = ((__int64 (__fastcall *)(struct IObjectArray *, int *))v2->lpVtbl->GetCount)(v2, &v16);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10,
        (__int64)"internal\\shell\\private\\inc\\objectarrayadapter.h",
        (const char *)(unsigned int)v4);
    details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::Iterator(
      (__int64)&v21,
      (__int64)&v15,
      0);
    details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::Iterator(
      (__int64)&v26,
      (__int64)&v15,
      v16);
    while ( v21 != v26 || v23 != v28 )
    {
      v5 = v22;
      v34 = v22;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v34);
      (*(void (__fastcall **)(__int64, struct IApplicationView *, _QWORD, __int64))(*(_QWORD *)v5 + 24LL))(
        v5,
        v17,
        v18,
        v19);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      ++v21;
      details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::GetCurrentObject(&v21);
    }
    v6 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v7 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::RemoveAt(
      (char *)this + 72,
      0LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
    if ( !*((_QWORD *)this + 10) )
      goto LABEL_27;
  }
  if ( TickCount64 >= v20 + 50 )
  {
    ApplicationViewManagerVisibilityDebouncer::ClearCachedAppView((RTL_SRWLOCK *)this, (struct IUnknown *)v17);
    goto LABEL_6;
  }
  if ( *((_QWORD *)this + 22) )
  {
LABEL_26:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
LABEL_27:
    v13 = 0;
    goto LABEL_28;
  }
  v8 = v20 - TickCount64;
  v33 = this;
  _InterlockedIncrement((volatile signed __int32 *)this + 17);
  v24 = this;
  v25 = this;
  _InterlockedIncrement((volatile signed __int32 *)this + 17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 22);
  v9 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60_____lambda_5f803f865b4b07caa2d72f9fc7ffab60___(
         &v32,
         &v24);
  v10 = *v9;
  *v9 = 0LL;
  v11 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v11);
  }
  CurrentThreadId = GetCurrentThreadId();
  v13 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, (unsigned int)(v8 + 50), v10, (char *)this + 176);
  if ( v10 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
  Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease((__int64 *)&v25);
  if ( v13 >= 0 )
  {
    Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease((__int64 *)&v33);
    goto LABEL_26;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x128,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
    (const char *)(unsigned int)v13);
  Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease((__int64 *)&v33);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
LABEL_28:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
  return (unsigned int)v13;
}
