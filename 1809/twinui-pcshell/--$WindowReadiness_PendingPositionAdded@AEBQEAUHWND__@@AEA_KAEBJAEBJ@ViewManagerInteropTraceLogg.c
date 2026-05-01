/*
 * XREFs of ??$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_KAEBJ2@Z @ 0x1800612CC
 * Callers:
 *     ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x180021084 (-PosChanged@WindowReadyState@@QEAAXHH@Z.c)
 *     _lambda_60221e79019ecf56c4402e49e3564341_::operator() @ 0x180021294 (_lambda_60221e79019ecf56c4402e49e3564341_--operator().c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

ULONG __fastcall ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionAdded<HWND__ * const &,unsigned __int64 &,long const &,long const &>(
        __int64 *a1,
        int *a2,
        int *a3,
        int *a4)
{
  ULONG result; // eax
  __int64 v9; // r10
  __int64 v10; // rax
  REGHANDLE v11; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-59h] BYREF
  int v13; // [rsp+3Ch] [rbp-55h] BYREF
  int v14; // [rsp+40h] [rbp-51h] BYREF
  int v15; // [rsp+44h] [rbp-4Dh] BYREF
  LPVOID Context; // [rsp+48h] [rbp-49h] BYREF
  __int64 v17; // [rsp+50h] [rbp-41h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-29h] BYREF
  void *v20; // [rsp+78h] [rbp-19h]
  int v21; // [rsp+80h] [rbp-11h]
  int v22; // [rsp+84h] [rbp-Dh]
  __int64 *v23; // [rsp+88h] [rbp-9h]
  int v24; // [rsp+90h] [rbp-1h]
  int v25; // [rsp+94h] [rbp+3h]
  int *v26; // [rsp+98h] [rbp+7h]
  int v27; // [rsp+A0h] [rbp+Fh]
  int v28; // [rsp+A4h] [rbp+13h]
  int *v29; // [rsp+A8h] [rbp+17h]
  int v30; // [rsp+B0h] [rbp+1Fh]
  int v31; // [rsp+B4h] [rbp+23h]
  int *v32; // [rsp+B8h] [rbp+27h]
  int v33; // [rsp+C0h] [rbp+2Fh]
  int v34; // [rsp+C4h] [rbp+33h]

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
  v9 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v9 > 5u )
  {
    v10 = *a1;
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v17 = v10;
    v23 = &v17;
    v13 = *a2;
    v26 = &v13;
    v14 = *a3;
    v29 = &v14;
    v15 = *a4;
    v32 = &v15;
    v24 = 8;
    v27 = 4;
    v30 = 4;
    v33 = 4;
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v9 + 8);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18045FB3C - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v11 = *(_QWORD *)(v9 + 32);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v20 = &unk_18045FB47;
    UserData.Reserved = 2;
    v21 = 85;
    v22 = 1;
    return EventWriteTransfer(v11, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
  return result;
}
