/*
 * XREFs of ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@Z @ 0x18001E258
 * Callers:
 *     ?v_OnViewVisibilityChanged@WindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18001DC00 (-v_OnViewVisibilityChanged@WindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18001DD00 (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 *     _lambda_1caa3a1ae57858b5006e6ce489e60a5a_::operator() @ 0x18001DF84 (_lambda_1caa3a1ae57858b5006e6ce489e60a5a_--operator().c)
 *     ?HandlePresentationReadinessChange@WindowWrapperBase@@UEAAX_K@Z @ 0x18001E140 (-HandlePresentationReadinessChange@WindowWrapperBase@@UEAAX_K@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

ULONG __fastcall ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
        __int64 *a1,
        int *a2,
        int *a3)
{
  ULONG result; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int16 *v9; // rax
  REGHANDLE v10; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-49h] BYREF
  int v12; // [rsp+3Ch] [rbp-45h] BYREF
  int v13; // [rsp+40h] [rbp-41h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-39h] BYREF
  unsigned int v15; // [rsp+50h] [rbp-31h]
  __int64 v16; // [rsp+58h] [rbp-29h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-9h] BYREF
  void *v19; // [rsp+88h] [rbp+7h]
  int v20; // [rsp+90h] [rbp+Fh]
  int v21; // [rsp+94h] [rbp+13h]
  __int64 *v22; // [rsp+98h] [rbp+17h]
  int v23; // [rsp+A0h] [rbp+1Fh]
  int v24; // [rsp+A4h] [rbp+23h]
  int *v25; // [rsp+A8h] [rbp+27h]
  int v26; // [rsp+B0h] [rbp+2Fh]
  int v27; // [rsp+B4h] [rbp+33h]
  int *v28; // [rsp+B8h] [rbp+37h]
  int v29; // [rsp+C0h] [rbp+3Fh]
  int v30; // [rsp+C4h] [rbp+43h]

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
  v7 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v7 > 5u )
  {
    v8 = *a1;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v16 = v8;
    v22 = &v16;
    v12 = *a2;
    v25 = &v12;
    v13 = *a3;
    v28 = &v13;
    v23 = 8;
    v26 = 4;
    v29 = 4;
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v9 = *(unsigned __int16 **)(v7 + 8);
    v10 = *(_QWORD *)(v7 + 32);
    UserData.Ptr = (ULONGLONG)v9;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *v9;
    v19 = &unk_1804FB55B;
    UserData.Reserved = 2;
    v20 = 66;
    v21 = 1;
    v15 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    return EventWriteTransfer(v10, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return result;
}
