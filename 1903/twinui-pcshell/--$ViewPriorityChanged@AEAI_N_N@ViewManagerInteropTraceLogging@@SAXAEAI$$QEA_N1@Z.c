/*
 * XREFs of ??$ViewPriorityChanged@AEAI_N_N@ViewManagerInteropTraceLogging@@SAXAEAI$$QEA_N1@Z @ 0x180295588
 * Callers:
 *     ?BoostPriority@ViewWrapperBase@@UEAAJXZ @ 0x180297110 (-BoostPriority@ViewWrapperBase@@UEAAJXZ.c)
 *     ?UnboostPriority@ViewWrapperBase@@UEAAJXZ @ 0x18029B4F0 (-UnboostPriority@ViewWrapperBase@@UEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 */

TLG_STATUS __fastcall ViewManagerInteropTraceLogging::ViewPriorityChanged<unsigned int &,bool,bool>(
        int *a1,
        __int64 a2,
        __int64 a3)
{
  TLG_STATUS result; // eax
  const struct _TlgProvider_t *v7; // rcx
  int v8; // eax
  WINBOOL fPending; // [rsp+38h] [rbp-19h] BYREF
  int v10; // [rsp+3Ch] [rbp-15h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  int *v13; // [rsp+68h] [rbp+17h]
  int v14; // [rsp+70h] [rbp+1Fh]
  int v15; // [rsp+74h] [rbp+23h]
  __int64 v16; // [rsp+78h] [rbp+27h]
  int v17; // [rsp+80h] [rbp+2Fh]
  int v18; // [rsp+84h] [rbp+33h]
  __int64 v19; // [rsp+88h] [rbp+37h]
  int v20; // [rsp+90h] [rbp+3Fh]
  int v21; // [rsp+94h] [rbp+43h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180599EB0;
    qword_180599EB0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599EC8 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599EB0, qword_180599EC8);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180599EB0);
  }
  result = (int)Context;
  v7 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v7 > 5u )
  {
    v8 = *a1;
    v15 = 0;
    v18 = 0;
    v21 = 0;
    v10 = v8;
    v13 = &v10;
    v17 = 1;
    v20 = 1;
    v14 = 4;
    v16 = a2;
    v19 = a3;
    return TlgWrite(v7, &unk_1804D42F0, 0LL, 0LL, 5u, &pData);
  }
  return result;
}
