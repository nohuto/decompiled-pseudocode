/*
 * XREFs of CAsyncCallbackWithLambda__lambda_829df63d4f4da6954880c71339f9350f___::_scalar_deleting_destructor_ @ 0x180027E00
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18004A8EC (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18006250C (-reset@-$shared_object@V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Para.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18010CC28 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?SetStopResult@?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1801180C4 (-SetStopResult@-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

_QWORD *__fastcall CAsyncCallbackWithLambda__lambda_829df63d4f4da6954880c71339f9350f___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  char *v4; // rbx
  _QWORD *v5; // rsi
  RTL_SRWLOCK *v6; // rbp
  RTL_SRWLOCK *v7; // rbp
  char v8; // r15
  _DWORD *v9; // rcx
  int v11; // eax
  __int64 v12; // rdx
  HANDLE ProcessHeap; // rax
  int v14; // [rsp+20h] [rbp-48h] BYREF
  WINBOOL fPending; // [rsp+24h] [rbp-44h] BYREF
  LPVOID Context[3]; // [rsp+28h] [rbp-40h] BYREF

  Context[1] = (LPVOID)-2LL;
  v4 = (char *)(a1 + 10);
  a1[10] = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  v5 = a1 + 48;
  v6 = (RTL_SRWLOCK *)a1[48];
  if ( !v6 )
    goto LABEL_8;
  v7 = v6 + 31;
  AcquireSRWLockExclusive(v7);
  Context[2] = 0LL;
  if ( *v5 && *(_DWORD *)*v5 == 1 )
  {
    v8 = 1;
  }
  else
  {
    v8 = 0;
    wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v5);
  }
  if ( v7 )
    ReleaseSRWLockExclusive(v7);
  if ( v8 )
  {
LABEL_8:
    v9 = (_DWORD *)*((_QWORD *)v4 + 6);
    if ( *v9 == 1 )
    {
      v11 = v9[21];
      v14 = v11;
      v12 = 2147942974LL;
      if ( v11 < 0 )
        v12 = (unsigned int)v11;
      wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v9,
        v12,
        &v14);
      (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v5);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)(v4 + 280));
  if ( v4[120] )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, *((LPVOID *)v4 + 14));
    v4[120] = 0;
  }
  *((_QWORD *)v4 + 14) = 0LL;
  if ( *((_DWORD *)v4 + 14) == 1 )
  {
    *((_DWORD *)v4 + 14) = 2;
    Context[0] = 0LL;
    if ( InitOnceBeginInitialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &fPending, Context)
      && fPending )
    {
      Context[0] = qword_180599BF8;
      qword_180599BF8[0] = &ShellScreenClippingLogging::`vftable';
      qword_180599C10 = (struct _TlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599BF8, qword_180599C10);
      InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_180599BF8);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context[0] + 1), v4 + 64);
  }
  *((_DWORD *)v4 + 14) = 3;
  if ( *((_DWORD *)v4 + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(v4 + 8));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 9);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 6);
  *((_DWORD *)a1 + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 4);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x188);
  return a1;
}
