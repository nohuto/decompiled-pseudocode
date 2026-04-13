/*
 * XREFs of ?StartActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAAXU_GUID@@PEBGPEBD@Z @ 0x180045C8C
 * Callers:
 *     _lambda_ff7cfae8cddf8b4979caf74bf72ddb07_::operator() @ 0x1800479C0 (_lambda_ff7cfae8cddf8b4979caf74bf72ddb07_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ @ 0x18000A7AC (-Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800243F4 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180030BD0 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 */

void __fastcall MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::StartActivity(
        MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *this,
        struct _GUID *a2,
        const unsigned __int16 *a3,
        const char *a4)
{
  __int64 v8; // rbx
  const struct _TlgProvider_t *v9; // rax
  RTL_SRWLOCK *v10; // rcx
  const struct _TlgProvider_t *v11; // rax
  const struct _TlgProvider_t *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  const GUID *v16; // r9
  PSRWLOCK SRWLock[2]; // [rsp+38h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-49h] BYREF
  __int64 *v19; // [rsp+68h] [rbp-29h]
  __int64 v20; // [rsp+70h] [rbp-21h]
  PSRWLOCK *v21; // [rsp+78h] [rbp-19h]
  __int64 v22; // [rsp+80h] [rbp-11h]
  struct _GUID *v23; // [rsp+88h] [rbp-9h]
  __int64 v24; // [rsp+90h] [rbp-1h]
  const unsigned __int16 *v25; // [rsp+98h] [rbp+7h]
  int v26; // [rsp+A0h] [rbp+Fh]
  int v27; // [rsp+A4h] [rbp+13h]
  const char *v28; // [rsp+A8h] [rbp+17h]
  int v29; // [rsp+B0h] [rbp+1Fh]
  int v30; // [rsp+B4h] [rbp+23h]

  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v8 = *((_QWORD *)this + 6);
  v9 = MobilityExperience::Telemetry::MobilityExperienceLogging::Provider();
  if ( *(_DWORD *)v9 > 5u
    && (*((_QWORD *)v9 + 2) & 0x800000000000LL) != 0
    && (*((_QWORD *)v9 + 3) & 0x800000000000LL) == *((_QWORD *)v9 + 3) )
  {
    EventActivityIdControl(3u, (LPGUID)(v8 + 8));
  }
  else
  {
    *(_QWORD *)(v8 + 8) = 0LL;
    *(_QWORD *)(v8 + 16) = 0LL;
  }
  v10 = SRWLock[0];
  *(_DWORD *)v8 = 1;
  if ( v10 )
    ReleaseSRWLockExclusive(v10);
  v11 = MobilityExperience::Telemetry::MobilityExperienceLogging::Provider();
  v12 = v11;
  if ( *(_DWORD *)v11 > 5u
    && (*((_QWORD *)v11 + 2) & 0x800000000000LL) != 0
    && (*((_QWORD *)v11 + 3) & 0x800000000000LL) == *((_QWORD *)v11 + 3) )
  {
    v20 = 8LL;
    v19 = &`CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity'::`4'::_TlgActivityPrivacyTag;
    LODWORD(v13) = GetCurrentThreadId();
    v22 = 4LL;
    LODWORD(SRWLock[0]) = v13;
    v21 = SRWLock;
    LODWORD(v13) = 0;
    v23 = a2;
    v24 = 16LL;
    if ( a3 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a3[v13] );
    }
    v27 = 0;
    v26 = 2 * v13 + 2;
    if ( !a3 )
      a3 = &Src;
    LODWORD(v14) = 0;
    v25 = a3;
    if ( a4 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a4[v14] );
    }
    v30 = 0;
    if ( !a4 )
      a4 = (const char *)&word_1800FD7D0;
    v29 = v14 + 1;
    v28 = a4;
    v15 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v15 + 4)
      || (v16 = (const GUID *)(v15 + 24), !*(_DWORD *)(v15 + 24))
      && !*(_DWORD *)(v15 + 28)
      && !*(_DWORD *)(v15 + 32)
      && !*(_DWORD *)(v15 + 36) )
    {
      v16 = 0LL;
    }
    TlgWrite(v12, &unk_18016CADF, (LPCGUID)(v15 + 8), v16, 7u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *)((char *)this + 8));
}
