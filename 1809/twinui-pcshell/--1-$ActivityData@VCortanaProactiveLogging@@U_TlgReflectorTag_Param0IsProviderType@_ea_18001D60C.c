/*
 * XREFs of ??1?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18001D60C
 * Callers:
 *     ??1?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18001D5CC (--1-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180080974 (-reset@-$shared_object@V-$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag__ea_180080974.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18001BEE0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18002FA48 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ??$_TlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180106E24 (--$_TlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  wil::details::shared_buffer::reset((LPVOID *)(a1 + 224));
  wil::details::StoredCallContextInfo::~StoredCallContextInfo((wil::details::StoredCallContextInfo *)(a1 + 40));
  if ( *(_DWORD *)a1 == 1 )
  {
    Context = 0LL;
    *(_DWORD *)a1 = 2;
    if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_18050F960;
      qword_18050F960[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F978 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F960, qword_18050F978);
      InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_18050F960);
    }
    _TlgWriteActivityAutoStop<70368744177664,5>(*((_QWORD *)Context + 1), a1 + 8);
  }
  *(_DWORD *)a1 = 3;
}
