/*
 * XREFs of ?StartActivity@ShowFlyoutActivity@MeetNowTelemetry@@QEAAX_N@Z @ 0x180092D18
 * Callers:
 *     ?ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_N@Z @ 0x180092B88 (-ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_N@Z.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x1800484B4 (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?LockExclusive@?$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180090A94 (-LockExclusive@-$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorT.c)
 *     ?Provider@MeetNowTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18009217C (-Provider@MeetNowTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?_TlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x1801200DC (-_TlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 */

void __fastcall MeetNowTelemetry::ShowFlyoutActivity::StartActivity(
        MeetNowTelemetry::ShowFlyoutActivity *this,
        char a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  const struct _TlgProvider_t *v6; // rax
  RTL_SRWLOCK *v7; // rcx
  const struct _TlgProvider_t *v8; // rax
  const struct _TlgProvider_t *v9; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v11; // r8
  const GUID *v12; // rcx
  char v13; // [rsp+38h] [rbp-19h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  void *v16; // [rsp+68h] [rbp+17h]
  int v17; // [rsp+70h] [rbp+1Fh]
  int v18; // [rsp+74h] [rbp+23h]
  PSRWLOCK *p_SRWLock; // [rsp+78h] [rbp+27h]
  int v20; // [rsp+80h] [rbp+2Fh]
  int v21; // [rsp+84h] [rbp+33h]
  char *v22; // [rsp+88h] [rbp+37h]
  int v23; // [rsp+90h] [rbp+3Fh]
  int v24; // [rsp+94h] [rbp+43h]

  wil::ActivityBase<AppUsageTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v4 = *((_QWORD *)this + 6);
  v6 = MeetNowTelemetryLogging::Provider(v5);
  if ( TraceLoggingProviderEnabled(v6, 5u, 0x400000000000uLL) )
  {
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  }
  else
  {
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_QWORD *)(v4 + 16) = 0LL;
  }
  v7 = SRWLock;
  *(_DWORD *)v4 = 1;
  if ( v7 )
    ReleaseSRWLockExclusive(v7);
  v8 = MeetNowTelemetryLogging::Provider((__int64)v7);
  v9 = v8;
  if ( *(_DWORD *)v8 > 5u && TlgKeywordOn(v8, 0x400000000000uLL) )
  {
    v18 = 0;
    v16 = &`MeetNowTelemetry::ShowFlyoutActivity::StopActivity'::`10'::_TlgActivityPrivacyTag;
    v17 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v21 = 0;
    v24 = 0;
    LODWORD(SRWLock) = CurrentThreadId;
    p_SRWLock = &SRWLock;
    v22 = &v13;
    v20 = 4;
    v13 = a2;
    v23 = 1;
    v11 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v11 + 4) || _TlgGuidIsZero((const struct _GUID *)(v11 + 24)) )
      v12 = 0LL;
    TlgWrite(v9, &unk_1804C5092, (LPCGUID)(v11 + 8), v12, 5u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((MeetNowTelemetry::ShowFlyoutActivity *)((char *)this + 8));
}
