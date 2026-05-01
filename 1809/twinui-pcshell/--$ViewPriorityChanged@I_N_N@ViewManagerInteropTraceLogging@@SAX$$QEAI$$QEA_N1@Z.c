/*
 * XREFs of ??$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z @ 0x180020998
 * Callers:
 *     _lambda_c3b823257698a8a46ce2aa70921db56d_::operator() @ 0x18001E6B0 (_lambda_c3b823257698a8a46ce2aa70921db56d_--operator().c)
 *     _lambda_dd3f6d7ea91d00747dcff202126691de_::operator() @ 0x18001E8CC (_lambda_dd3f6d7ea91d00747dcff202126691de_--operator().c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

ULONG __fastcall ViewManagerInteropTraceLogging::ViewPriorityChanged<unsigned int,bool,bool>(
        int *a1,
        __int64 a2,
        __int64 a3)
{
  ULONG result; // eax
  __int64 v7; // r10
  int v8; // eax
  REGHANDLE v9; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-29h] BYREF
  int v11; // [rsp+3Ch] [rbp-25h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-21h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-9h] BYREF
  void *v15; // [rsp+68h] [rbp+7h]
  int v16; // [rsp+70h] [rbp+Fh]
  int v17; // [rsp+74h] [rbp+13h]
  int *v18; // [rsp+78h] [rbp+17h]
  int v19; // [rsp+80h] [rbp+1Fh]
  int v20; // [rsp+84h] [rbp+23h]
  __int64 v21; // [rsp+88h] [rbp+27h]
  int v22; // [rsp+90h] [rbp+2Fh]
  int v23; // [rsp+94h] [rbp+33h]
  __int64 v24; // [rsp+98h] [rbp+37h]
  int v25; // [rsp+A0h] [rbp+3Fh]
  int v26; // [rsp+A4h] [rbp+43h]

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
  v7 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v7 > 5u )
  {
    v8 = *a1;
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v11 = v8;
    v18 = &v11;
    v19 = 4;
    v21 = a2;
    v22 = 1;
    v24 = a3;
    v25 = 1;
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v7 + 8);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18045EF22 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v9 = *(_QWORD *)(v7 + 32);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v15 = &unk_18045EF2D;
    v17 = 1;
    UserData.Reserved = 2;
    v16 = 64;
    return EventWriteTransfer(v9, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return result;
}
