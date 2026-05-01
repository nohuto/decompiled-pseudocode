/*
 * XREFs of ??1?$ActivityData@VStartMenuExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180017520
 * Callers:
 *     ??1StartMenuReposition@StartMenuExperienceTelemetry@@QEAA@XZ @ 0x1800174AC (--1StartMenuReposition@StartMenuExperienceTelemetry@@QEAA@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VStartMenuExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180085CB4 (-reset@-$shared_object@V-$ActivityData@VStartMenuExperienceLogging@@U_TlgReflectorTag_Param0IsPr.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180016B4C (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18003B698 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18012BE64 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<StartMenuExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<StartMenuExperienceLogging,_TlgReflectorTag_Param0IsProviderType>(
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
    if ( InitOnceBeginInitialize(&`StartMenuExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = &qword_1805C2908;
      qword_1805C2908 = &ShellScreenClippingLogging::`vftable';
      qword_1805C2920 = (struct _TlgProvider_t *)&`StartMenuExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b070bc67e2c9c03cf4cc93f221b7b97d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805C2908, qword_1805C2920);
      InitOnceComplete(&`StartMenuExperienceLogging::Instance'::`2'::wrapper, 0, &qword_1805C2908);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), a1 + 8);
  }
  *(_DWORD *)a1 = 3;
}
