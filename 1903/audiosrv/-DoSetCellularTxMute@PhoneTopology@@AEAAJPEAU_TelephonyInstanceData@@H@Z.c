/*
 * XREFs of ?DoSetCellularTxMute@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x180147D0C
 * Callers:
 *     ?Process@CallTxMuteWorkItem@@UEAAXPEAVPhoneTopology@@@Z @ 0x180148D50 (-Process@CallTxMuteWorkItem@@UEAAXPEAVPhoneTopology@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x1800522DC (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?Lookup@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@QEBA_NIAEAV?$CComPtr@UITelephonyControllerCallInstance@@@2@@Z @ 0x180148B78 (-Lookup@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@V-$.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PhoneTopology::DoSetCellularTxMute(
        PhoneTopology *this,
        struct _TelephonyInstanceData *a2,
        unsigned int a3)
{
  char v5; // al
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // r9
  __int64 v9; // rdx
  const GUID *v10; // r8
  const GUID *v11; // r9
  void *v12; // r8
  const struct _TlgProvider_t *v13; // rcx
  int v14; // eax
  unsigned int v16; // [rsp+30h] [rbp-69h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-61h] BYREF
  int v18; // [rsp+3Ch] [rbp-5Dh] BYREF
  LPVOID Context; // [rsp+40h] [rbp-59h] BYREF
  __int64 v20; // [rsp+48h] [rbp-51h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-49h] BYREF
  char v22; // [rsp+58h] [rbp-41h]
  __int64 v23; // [rsp+60h] [rbp-39h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-29h] BYREF
  char *v25; // [rsp+90h] [rbp-9h]
  int v26; // [rsp+98h] [rbp-1h]
  int v27; // [rsp+9Ch] [rbp+3h]
  int *v28; // [rsp+A0h] [rbp+7h]
  int v29; // [rsp+A8h] [rbp+Fh]
  int v30; // [rsp+ACh] [rbp+13h]
  unsigned int *v31; // [rsp+B0h] [rbp+17h]
  int v32; // [rsp+B8h] [rbp+1Fh]
  int v33; // [rsp+BCh] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v23 = -2LL;
  v16 = a3;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 136));
  v20 = 0LL;
  v5 = ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::Lookup(
         (char *)this + 184,
         *((unsigned int *)a2 + 1),
         &v20);
  v6 = v20;
  if ( !v5 )
  {
    v7 = -2147024809;
    v8 = 2147942487LL;
    v9 = 389LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\phonetopology.cpp",
      (const char *)v8);
    goto LABEL_12;
  }
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0, v12);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
  }
  v13 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v13 > 4u )
  {
    v25 = (char *)a2 + 4;
    v26 = 4;
    v27 = 0;
    v18 = *(_DWORD *)a2;
    v28 = &v18;
    v29 = 4;
    v30 = 0;
    v31 = &v16;
    v32 = 4;
    v33 = 0;
    TlgWrite(v13, &unk_18017D5D1, v10, v11, 5u, &pData);
  }
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, v16);
  v7 = v14;
  if ( v14 < 0 )
  {
    v8 = (unsigned int)v14;
    v9 = 398LL;
    goto LABEL_10;
  }
  v7 = 0;
LABEL_12:
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v22 )
    LeaveCriticalSection(lpCriticalSection);
  return v7;
}
