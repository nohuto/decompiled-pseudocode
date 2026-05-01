/*
 * XREFs of ?StartActivity@UpdateAppView@AppUsageTelemetry@@QEAAXI@Z @ 0x1800A8650
 * Callers:
 *     ??$Start@AEAW4ViewState@AppLimits@FamilySafety@Internal@Windows@@@UpdateAppView@AppUsageTelemetry@@SA?AV01@AEAW4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800A6D68 (--$Start@AEAW4ViewState@AppLimits@FamilySafety@Internal@Windows@@@UpdateAppView@AppUsageTelemetr.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x1800484B4 (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?LockExclusive@?$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180090A94 (-LockExclusive@-$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorT.c)
 *     ?Provider@AppUsageTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x1800A4000 (-Provider@AppUsageTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?_TlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x1801200DC (-_TlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 */

void __fastcall AppUsageTelemetry::UpdateAppView::StartActivity(AppUsageTelemetry::UpdateAppView *this, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  const struct _TlgProvider_t *v5; // rax
  RTL_SRWLOCK *v6; // rcx
  const struct _TlgProvider_t *v7; // rax
  const struct _TlgProvider_t *v8; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v10; // r8
  const GUID *v11; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+38h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  void *v14; // [rsp+68h] [rbp+17h]
  int v15; // [rsp+70h] [rbp+1Fh]
  int v16; // [rsp+74h] [rbp+23h]
  PSRWLOCK *v17; // [rsp+78h] [rbp+27h]
  int v18; // [rsp+80h] [rbp+2Fh]
  int v19; // [rsp+84h] [rbp+33h]
  int *v20; // [rsp+88h] [rbp+37h]
  int v21; // [rsp+90h] [rbp+3Fh]
  int v22; // [rsp+94h] [rbp+43h]
  int v23; // [rsp+C0h] [rbp+6Fh] BYREF

  v23 = a2;
  wil::ActivityBase<AppUsageTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v3 = *((_QWORD *)this + 6);
  v5 = AppUsageTelemetry::Provider(v4);
  if ( TraceLoggingProviderEnabled(v5, 5u, 0x400000000000uLL) )
  {
    EventActivityIdControl(3u, (LPGUID)(v3 + 8));
  }
  else
  {
    *(_QWORD *)(v3 + 8) = 0LL;
    *(_QWORD *)(v3 + 16) = 0LL;
  }
  v6 = SRWLock[0];
  *(_DWORD *)v3 = 1;
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  v7 = AppUsageTelemetry::Provider((__int64)v6);
  v8 = v7;
  if ( *(_DWORD *)v7 > 5u && TlgKeywordOn(v7, 0x400000000000uLL) )
  {
    v16 = 0;
    v14 = &`AppUsageTelemetry::UpdateAppView::Stop'::`10'::_TlgActivityPrivacyTag;
    v15 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v19 = 0;
    v22 = 0;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v17 = SRWLock;
    v20 = &v23;
    v18 = 4;
    v21 = 4;
    v10 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v10 + 4) || _TlgGuidIsZero((const struct _GUID *)(v10 + 24)) )
      v11 = 0LL;
    TlgWrite(v8, &unk_1804E36B3, (LPCGUID)(v10 + 8), v11, 5u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((AppUsageTelemetry::UpdateAppView *)((char *)this + 8));
}
