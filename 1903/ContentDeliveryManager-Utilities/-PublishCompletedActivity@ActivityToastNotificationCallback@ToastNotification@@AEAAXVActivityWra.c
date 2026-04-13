/*
 * XREFs of ?PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAVICDPActivityStore@@@Z @ 0x1800489EC
 * Callers:
 *     _lambda_ff7cfae8cddf8b4979caf74bf72ddb07_::operator() @ 0x180047650 (_lambda_ff7cfae8cddf8b4979caf74bf72ddb07_--operator().c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800036FC (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180044E08 (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SetActivityComplete@ActivityWrapper@MobilityExperience@@QEAAXXZ @ 0x180046A1C (-SetActivityComplete@ActivityWrapper@MobilityExperience@@QEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180048F20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINoti.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CABF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
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
  DWORD LastError; // r14d
  BOOL v16; // eax
  __int64 v17; // r8
  const char *v18; // r9
  wil::details::in1diag3 *v19; // rcx
  signed __int64 v20; // rax
  signed __int64 v21; // rtt
  __int64 v22; // r12
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  __int64 v25; // r14
  __int64 v26; // r15
  _QWORD *v27; // rdi
  _QWORD *v28; // rax
  _QWORD *v29; // rbx
  DWORD CurrentThreadId; // eax
  int v31; // ebx
  __int64 result; // rax
  __int64 v33; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  int v35; // [rsp+C8h] [rbp+20h]

  MobilityExperience::ActivityWrapper::SetActivityComplete(a2);
  v7 = *((_QWORD *)a2 + 1);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  LOBYTE(v6) = 1;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 104LL))(v7, v6);
  v9 = retaddr;
  if ( v8 < 0 )
    goto LABEL_46;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( !Event )
  {
LABEL_45:
    wil::details::in1diag3::Throw_GetLastError(retaddr, v10, v12, v13);
LABEL_46:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x111,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_47;
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
LABEL_47:
      wil::details::in1diag3::_FailFast_GetLastError(v19, (void *)0x8F0, v17, v18);
      JUMPOUT(0x180048CFELL);
    }
    SetLastError(LastError);
  }
  *(_QWORD *)(a1 + 80) = Event;
  v20 = *(_QWORD *)(a1 + 72);
  while ( v20 >= 0 )
  {
    v21 = v20;
    v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), v20 + 1, v20);
    if ( v21 == v20 )
      goto LABEL_14;
  }
  _InterlockedIncrement((volatile signed __int32 *)(2 * v20 + 16));
LABEL_14:
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v22 = a1;
  v23 = *(_QWORD *)(a1 + 72);
  while ( v23 >= 0 )
  {
    v24 = v23;
    v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), v23 + 1, v23);
    if ( v24 == v23 )
      goto LABEL_20;
  }
  _InterlockedIncrement((volatile signed __int32 *)(2 * v23 + 16));
LABEL_20:
  v35 = *(_DWORD *)a2;
  v25 = *((_QWORD *)a2 + 1);
  if ( v25 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v25 + 8LL))(*((_QWORD *)a2 + 1));
  v26 = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v27 = 0LL;
  v28 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v29 = v28;
  if ( v28 )
  {
    *((_DWORD *)v28 + 3) = 1;
    *v28 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v22 = 0LL;
    v28[2] = a1;
    v28[3] = a1;
    *((_DWORD *)v28 + 8) = v35;
    v28[5] = v25;
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
    v26 = 0LL;
    v29[6] = a3;
    *v29 = off_1800DD0E0;
    v27 = v29;
  }
  CurrentThreadId = GetCurrentThreadId();
  v31 = SHTaskPoolQueueTask(0LL, 0LL, CurrentThreadId, 0LL, v27, 0LL);
  if ( v27 )
    (*(void (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v22 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::Release(v22);
  if ( v31 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x121,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v31);
    goto LABEL_45;
  }
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
  result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::Release(a1);
  v33 = *((_QWORD *)a2 + 1);
  if ( v33 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  return result;
}
