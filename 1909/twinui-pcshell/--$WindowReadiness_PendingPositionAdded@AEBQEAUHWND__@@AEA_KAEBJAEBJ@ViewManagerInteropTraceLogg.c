/*
 * XREFs of ??$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_KAEBJ2@Z @ 0x18006D758
 * Callers:
 *     _lambda_1caa3a1ae57858b5006e6ce489e60a5a_::operator() @ 0x18001DF84 (_lambda_1caa3a1ae57858b5006e6ce489e60a5a_--operator().c)
 *     ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x18001E9C4 (-PosChanged@WindowReadyState@@QEAAXHH@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

ULONG __fastcall ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionAdded<HWND__ * const &,unsigned __int64 &,long const &,long const &>(
        __int64 *a1,
        int *a2,
        int *a3,
        int *a4)
{
  ULONG result; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int16 *v11; // rax
  REGHANDLE v12; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-69h] BYREF
  int v14; // [rsp+3Ch] [rbp-65h] BYREF
  int v15; // [rsp+40h] [rbp-61h] BYREF
  int v16; // [rsp+44h] [rbp-5Dh] BYREF
  LPVOID Context; // [rsp+48h] [rbp-59h] BYREF
  unsigned int v18; // [rsp+50h] [rbp-51h]
  __int64 v19; // [rsp+58h] [rbp-49h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-29h] BYREF
  void *v22; // [rsp+88h] [rbp-19h]
  int v23; // [rsp+90h] [rbp-11h]
  int v24; // [rsp+94h] [rbp-Dh]
  __int64 *v25; // [rsp+98h] [rbp-9h]
  int v26; // [rsp+A0h] [rbp-1h]
  int v27; // [rsp+A4h] [rbp+3h]
  int *v28; // [rsp+A8h] [rbp+7h]
  int v29; // [rsp+B0h] [rbp+Fh]
  int v30; // [rsp+B4h] [rbp+13h]
  int *v31; // [rsp+B8h] [rbp+17h]
  int v32; // [rsp+C0h] [rbp+1Fh]
  int v33; // [rsp+C4h] [rbp+23h]
  int *v34; // [rsp+C8h] [rbp+27h]
  int v35; // [rsp+D0h] [rbp+2Fh]
  int v36; // [rsp+D4h] [rbp+33h]

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
  v9 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v9 > 5u )
  {
    v10 = *a1;
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v36 = 0;
    v19 = v10;
    v25 = &v19;
    v14 = *a2;
    v28 = &v14;
    v15 = *a3;
    v31 = &v15;
    v16 = *a4;
    v34 = &v16;
    v26 = 8;
    v29 = 4;
    v32 = 4;
    v35 = 4;
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v11 = *(unsigned __int16 **)(v9 + 8);
    v12 = *(_QWORD *)(v9 + 32);
    UserData.Ptr = (ULONGLONG)v11;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *v11;
    v22 = &unk_1804FB4A6;
    UserData.Reserved = 2;
    v23 = 85;
    v24 = 1;
    v18 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    return EventWriteTransfer(v12, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
  return result;
}
