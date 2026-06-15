/*
 * XREFs of ?DoSetCellularRxMute@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x1801475E0
 * Callers:
 *     ?Process@CallHoldWorkItem@@UEAAXPEAVPhoneTopology@@@Z @ 0x180148860 (-Process@CallHoldWorkItem@@UEAAXPEAVPhoneTopology@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180058C3C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?Lookup@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@QEBA_NIAEAV?$CComPtr@UITelephonyControllerCallInstance@@@2@@Z @ 0x1801486C8 (-Lookup@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@V-$.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PhoneTopology::DoSetCellularRxMute(
        PhoneTopology *this,
        struct _TelephonyInstanceData *a2,
        unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  char v6; // al
  __int64 v7; // rbx
  unsigned int v8; // edi
  struct _RTL_CRITICAL_SECTION *v9; // rcx
  int v10; // eax
  const GUID *v11; // r8
  const GUID *v12; // r9
  void *v13; // r8
  const struct _TlgProvider_t *v14; // rcx
  int v15; // eax
  unsigned int v17; // [rsp+38h] [rbp-69h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-61h] BYREF
  char v19; // [rsp+48h] [rbp-59h]
  WINBOOL fPending; // [rsp+50h] [rbp-51h] BYREF
  int v21; // [rsp+54h] [rbp-4Dh] BYREF
  __int64 v22; // [rsp+58h] [rbp-49h] BYREF
  LPCRITICAL_SECTION v23; // [rsp+60h] [rbp-41h] BYREF
  char v24; // [rsp+68h] [rbp-39h]
  __int64 v25; // [rsp+70h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-29h] BYREF
  char *v27; // [rsp+98h] [rbp-9h]
  int v28; // [rsp+A0h] [rbp-1h]
  int v29; // [rsp+A4h] [rbp+3h]
  int *v30; // [rsp+A8h] [rbp+7h]
  int v31; // [rsp+B0h] [rbp+Fh]
  int v32; // [rsp+B4h] [rbp+13h]
  unsigned int *v33; // [rsp+B8h] [rbp+17h]
  int v34; // [rsp+C0h] [rbp+1Fh]
  int v35; // [rsp+C4h] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v25 = -2LL;
  v17 = a3;
  v22 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 136);
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 136));
  v6 = ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::Lookup(
         (char *)this + 184,
         *((unsigned int *)a2 + 1),
         &v22);
  v7 = v22;
  if ( !v6 )
  {
    v8 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x106,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\phonetopology.cpp",
      (const char *)0x80070057LL);
    if ( !v19 )
      goto LABEL_20;
    v9 = lpCriticalSection;
LABEL_16:
    LeaveCriticalSection(v9);
    goto LABEL_20;
  }
  if ( v19 )
    LeaveCriticalSection(lpCriticalSection);
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 24LL))(v7, v17);
  v8 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10A,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\phonetopology.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_20;
  }
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>((__int64)&v23, v5);
  lpCriticalSection = 0LL;
  if ( InitOnceBeginInitialize(
         &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper,
         0,
         &fPending,
         (LPVOID *)&lpCriticalSection)
    && fPending )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)&qword_1801B7588;
    qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v13);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
  }
  v14 = *(const struct _TlgProvider_t **)&lpCriticalSection->LockCount;
  if ( *(_DWORD *)v14 > 4u )
  {
    v27 = (char *)a2 + 4;
    v28 = 4;
    v29 = 0;
    v21 = *(_DWORD *)a2;
    v30 = &v21;
    v31 = 4;
    v32 = 0;
    v33 = &v17;
    v34 = 4;
    v35 = 0;
    TlgWrite(v14, &unk_18017C5E2, v11, v12, 5u, &pData);
  }
  v15 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 32LL))(v7, v17);
  v8 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x116,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\phonetopology.cpp",
      (const char *)(unsigned int)v15);
    if ( !v24 )
      goto LABEL_20;
    v9 = v23;
    goto LABEL_16;
  }
  if ( v24 )
    LeaveCriticalSection(v23);
  v8 = 0;
LABEL_20:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
