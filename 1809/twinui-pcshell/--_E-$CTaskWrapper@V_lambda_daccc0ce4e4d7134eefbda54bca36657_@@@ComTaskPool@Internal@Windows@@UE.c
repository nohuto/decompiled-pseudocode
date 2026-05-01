/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_daccc0ce4e4d7134eefbda54bca36657_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180041360
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18001BEE0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003EA40 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180067710 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800EA3D0 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 */

char *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_daccc0ce4e4d7134eefbda54bca36657_>::`vector deleting destructor'(
        char *a1,
        char a2)
{
  __int64 v4; // rcx
  HANDLE ProcessHeap; // rax
  WINBOOL fPending; // [rsp+60h] [rbp+8h] BYREF
  char v8; // [rsp+68h] [rbp+10h]
  LPVOID Context; // [rsp+70h] [rbp+18h] BYREF

  *((_QWORD *)a1 + 6) = &CFramePresentationTelemetry::PresentWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy((_QWORD *)a1 + 6);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 352);
  wil::details::shared_buffer::reset((LPVOID *)a1 + 41);
  if ( a1[168] )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, *((LPVOID *)a1 + 20));
    a1[168] = 0;
  }
  *((_QWORD *)a1 + 20) = 0LL;
  if ( *((_DWORD *)a1 + 26) == 1 )
  {
    *((_DWORD *)a1 + 26) = 2;
    v8 = 0;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_18050F7D0;
      qword_18050F7D0[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F7E8 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F7D0, qword_18050F7E8);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18050F7D0);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), a1 + 112);
  }
  *((_DWORD *)a1 + 26) = 3;
  if ( *((_DWORD *)a1 + 20) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 56));
  v4 = *((_QWORD *)a1 + 4);
  if ( v4 )
  {
    *((_QWORD *)a1 + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 16);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x168);
  return a1;
}
