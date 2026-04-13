/*
 * XREFs of ?PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAVICDPActivityStore@@@Z @ 0x1800479CC
 * Callers:
 *     _lambda_ff7cfae8cddf8b4979caf74bf72ddb07_::operator() @ 0x180046668 (_lambda_ff7cfae8cddf8b4979caf74bf72ddb07_--operator().c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800037EC (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180043F58 (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SetActivityComplete@ActivityWrapper@MobilityExperience@@QEAAXXZ @ 0x180045A64 (-SetActivityComplete@ActivityWrapper@MobilityExperience@@QEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180047ED0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINoti.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180047F70 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBa_ea_180047F70.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C6CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ToastNotification::ActivityToastNotificationCallback::PublishCompletedActivity(
        __int64 a1,
        MobilityExperience::ActivityWrapper *a2,
        __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  void *v10; // rdx
  HANDLE Event; // rdi
  __int64 v12; // r8
  const char *v13; // r9
  void *v14; // rbx
  DWORD LastError; // ebp
  BOOL v16; // eax
  __int64 v17; // r8
  const char *v18; // r9
  wil::details::in1diag3 *v19; // rcx
  __int64 v20; // r12
  __int64 v21; // r15
  __int64 v22; // rbp
  _QWORD *v23; // rdi
  _QWORD *v24; // rax
  _QWORD *v25; // rbx
  DWORD CurrentThreadId; // eax
  __int64 result; // rax
  int v28; // ebx
  __int64 v29; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  int v31; // [rsp+B8h] [rbp+20h]

  MobilityExperience::ActivityWrapper::SetActivityComplete(a2);
  v7 = *((_QWORD *)a2 + 1);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  LOBYTE(v6) = 1;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 128LL))(v7, v6);
  v9 = retaddr;
  if ( v8 < 0 )
    goto LABEL_44;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( !Event )
  {
LABEL_43:
    wil::details::in1diag3::Throw_GetLastError(retaddr, v10, v12, v13);
LABEL_44:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x111,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_45;
  }
  GetLastError();
  v14 = *(void **)(a1 + 80);
  if ( v14 )
  {
    LastError = GetLastError();
    v16 = CloseHandle(v14);
    v19 = retaddr;
    if ( !v16 )
    {
LABEL_45:
      wil::details::in1diag3::_FailFast_GetLastError(v19, (void *)0x90E, v17, v18);
      JUMPOUT(0x180047CBDLL);
    }
    SetLastError(LastError);
  }
  *(_QWORD *)(a1 + 80) = Event;
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::AddRef(a1);
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v20 = a1;
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::AddRef(a1);
  v31 = *(_DWORD *)a2;
  v21 = *((_QWORD *)a2 + 1);
  if ( v21 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v21 + 8LL))(*((_QWORD *)a2 + 1));
  v22 = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v23 = 0LL;
  v24 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v25 = v24;
  if ( v24 )
  {
    *((_DWORD *)v24 + 3) = 1;
    *v24 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v20 = 0LL;
    v24[2] = a1;
    v24[3] = a1;
    *((_DWORD *)v24 + 8) = v31;
    v24[5] = v21;
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
    v22 = 0LL;
    v25[6] = a3;
    *v25 = off_1800D9050;
    v23 = v25;
  }
  CurrentThreadId = GetCurrentThreadId();
  result = SHTaskPoolQueueTask(0LL, 0LL, CurrentThreadId, 0LL, v23, 0LL);
  v28 = result;
  if ( v23 )
    result = (*(__int64 (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
  if ( v22 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v21 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v20 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::Release(v20);
  if ( v28 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x121,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v28);
    goto LABEL_43;
  }
  if ( a3 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
  if ( a1 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::Release(a1);
  v29 = *((_QWORD *)a2 + 1);
  if ( v29 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  return result;
}
