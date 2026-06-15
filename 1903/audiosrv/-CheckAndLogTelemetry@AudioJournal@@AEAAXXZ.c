/*
 * XREFs of ?CheckAndLogTelemetry@AudioJournal@@AEAAXXZ @ 0x18004140C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_ef92fad5d387f4ec2c28fdba8b86f656__void_::_Do_call @ 0x180043FF0 (std--_Func_impl_no_alloc__lambda_ef92fad5d387f4ec2c28fdba8b86f656__void_--_Do_call.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180019940 (--3@YAXPEAX@Z.c)
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001ADAC (_TlgKeywordOn.c)
 *     _TlgCreateSz @ 0x18003BAD8 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     _lambda_7e9488ee95e6f7ac44c162998ae46b34_::operator() @ 0x180102A2C (_lambda_7e9488ee95e6f7ac44c162998ae46b34_--operator().c)
 *     ?ResetData@AudioJournal@@AEAAX_N@Z @ 0x18010350C (-ResetData@AudioJournal@@AEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AudioJournal::CheckAndLogTelemetry(AudioJournal *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v3; // eax
  int v4; // r10d
  const CHAR *v5; // rdx
  LPCGUID v6; // r8
  TraceLoggingHProvider v7; // r9
  int v8; // [rsp+38h] [rbp-59h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+40h] [rbp-51h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-49h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-41h] BYREF
  int v12; // [rsp+54h] [rbp-3Dh] BYREF
  LPCSTR psz; // [rsp+58h] [rbp-39h] BYREF
  _QWORD v14[3]; // [rsp+60h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-19h] BYREF
  int *v16; // [rsp+98h] [rbp+7h]
  int v17; // [rsp+A0h] [rbp+Fh]
  int v18; // [rsp+A4h] [rbp+13h]
  int *v19; // [rsp+A8h] [rbp+17h]
  int v20; // [rsp+B0h] [rbp+1Fh]
  int v21; // [rsp+B4h] [rbp+23h]
  struct _FILETIME *p_SystemTimeAsFileTime; // [rsp+B8h] [rbp+27h]
  int v23; // [rsp+C0h] [rbp+2Fh]
  int v24; // [rsp+C4h] [rbp+33h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C8h] [rbp+37h] BYREF

  v14[2] = -2LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  Context = v2;
  if ( *(_BYTE *)this )
  {
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    if ( (__int64)((*(_QWORD *)&SystemTimeAsFileTime - *((_QWORD *)this + 28)) / 0x989680uLL) >= 86400 )
    {
      psz = 0LL;
      v14[0] = this;
      v14[1] = &psz;
      v3 = lambda_7e9488ee95e6f7ac44c162998ae46b34_::operator()(v14);
      SystemTimeAsFileTime = (struct _FILETIME)*((_QWORD *)this + 28);
      v8 = v3;
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = &qword_1801B8588;
        qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
      }
      if ( **((_DWORD **)Context + 1) > 4u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
      {
        v16 = &v8;
        v17 = v4;
        v18 = 0;
        v12 = 1;
        v19 = &v12;
        v20 = v4;
        v21 = 0;
        p_SystemTimeAsFileTime = &SystemTimeAsFileTime;
        v23 = 8;
        v24 = 0;
        v5 = "none";
        if ( v8 >= 0 )
          v5 = psz;
        TlgCreateSz(&pDesc, v5);
        TlgWrite(v7, &unk_180179C90, v6, (LPCGUID)v7, 6u, &pData);
      }
      AudioJournal::ResetData(this, 1);
      if ( psz )
        operator delete((void *)psz);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
