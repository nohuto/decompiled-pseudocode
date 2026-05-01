/*
 * XREFs of ??$WindowReadiness_PendingPositionRemoved@AEBQEAUHWND__@@AEA_K@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_K@Z @ 0x18006EADC
 * Callers:
 *     ?HandlePresentationReadinessChange@WindowWrapperBase@@UEAAX_K@Z @ 0x18001E140 (-HandlePresentationReadinessChange@WindowWrapperBase@@UEAAX_K@Z.c)
 *     ?HandleShellHook@WindowReadyState@@QEAAX_K@Z @ 0x1802C3924 (-HandleShellHook@WindowReadyState@@QEAAX_K@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

ULONG __fastcall ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionRemoved<HWND__ * const &,unsigned __int64 &>(
        __int64 *a1,
        int *a2)
{
  ULONG result; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int16 *v7; // rax
  REGHANDLE v8; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-29h] BYREF
  int v10; // [rsp+3Ch] [rbp-25h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-21h] BYREF
  unsigned int v12; // [rsp+48h] [rbp-19h]
  __int64 v13; // [rsp+50h] [rbp-11h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp+7h] BYREF
  void *v16; // [rsp+78h] [rbp+17h]
  int v17; // [rsp+80h] [rbp+1Fh]
  int v18; // [rsp+84h] [rbp+23h]
  __int64 *v19; // [rsp+88h] [rbp+27h]
  int v20; // [rsp+90h] [rbp+2Fh]
  int v21; // [rsp+94h] [rbp+33h]
  int *v22; // [rsp+98h] [rbp+37h]
  int v23; // [rsp+A0h] [rbp+3Fh]
  int v24; // [rsp+A4h] [rbp+43h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805C2318;
    qword_1805C2318[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2330 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2318, qword_1805C2330);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_1805C2318);
  }
  result = (unsigned int)Context;
  v5 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u )
  {
    v6 = *a1;
    v21 = 0;
    v24 = 0;
    v13 = v6;
    v19 = &v13;
    v10 = *a2;
    v22 = &v10;
    v20 = 8;
    v23 = 4;
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v7 = *(unsigned __int16 **)(v5 + 8);
    v8 = *(_QWORD *)(v5 + 32);
    UserData.Ptr = (ULONGLONG)v7;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *v7;
    v16 = &unk_1804FB507;
    UserData.Reserved = 2;
    v17 = 72;
    v18 = 1;
    v12 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    return EventWriteTransfer(v8, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return result;
}
