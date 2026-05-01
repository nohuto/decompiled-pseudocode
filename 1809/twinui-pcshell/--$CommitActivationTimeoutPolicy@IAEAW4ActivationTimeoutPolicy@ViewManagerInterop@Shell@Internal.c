/*
 * XREFs of ??$CommitActivationTimeoutPolicy@IAEAW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180020BB0
 * Callers:
 *     _lambda_cb9480a65b67d34783b381c09999efdd_::operator() @ 0x180020B14 (_lambda_cb9480a65b67d34783b381c09999efdd_--operator().c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

ULONG __fastcall ViewManagerInteropTraceLogging::CommitActivationTimeoutPolicy<unsigned int,enum Windows::Internal::Shell::ViewManagerInterop::ActivationTimeoutPolicy &>(
        int *a1,
        int *a2)
{
  ULONG result; // eax
  __int64 v5; // r10
  int v6; // eax
  REGHANDLE v7; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-29h] BYREF
  int v9; // [rsp+3Ch] [rbp-25h] BYREF
  int v10; // [rsp+40h] [rbp-21h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-19h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp+7h] BYREF
  void *v14; // [rsp+78h] [rbp+17h]
  int v15; // [rsp+80h] [rbp+1Fh]
  int v16; // [rsp+84h] [rbp+23h]
  int *v17; // [rsp+88h] [rbp+27h]
  int v18; // [rsp+90h] [rbp+2Fh]
  int v19; // [rsp+94h] [rbp+33h]
  int *v20; // [rsp+98h] [rbp+37h]
  int v21; // [rsp+A0h] [rbp+3Fh]
  int v22; // [rsp+A4h] [rbp+43h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18050FB08;
    qword_18050FB08 = &ShellScreenClippingLogging::`vftable';
    qword_18050FB20 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050FB08, qword_18050FB20);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &qword_18050FB08);
  }
  result = (unsigned int)Context;
  v5 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u )
  {
    v6 = *a1;
    v19 = 0;
    v22 = 0;
    v9 = v6;
    v17 = &v9;
    v10 = *a2;
    v20 = &v10;
    v18 = 4;
    v21 = 4;
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v5 + 8);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18045EFC2 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v7 = *(_QWORD *)(v5 + 32);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v14 = &unk_18045EFCD;
    UserData.Reserved = 2;
    v15 = 74;
    v16 = 1;
    return EventWriteTransfer(v7, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return result;
}
