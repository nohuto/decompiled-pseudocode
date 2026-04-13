/*
 * XREFs of ?StartActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAAXU_GUID@@PEBGPEBD@Z @ 0x1800449F4
 * Callers:
 *     _lambda_ff7cfae8cddf8b4979caf74bf72ddb07_::operator() @ 0x180046668 (_lambda_ff7cfae8cddf8b4979caf74bf72ddb07_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ @ 0x18000A60C (-Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180023D54 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002FD40 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 */

void __fastcall MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::StartActivity(
        MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *this,
        struct _GUID *a2,
        const unsigned __int16 *a3,
        const char *a4)
{
  __int64 v8; // rsi
  const struct _TlgProvider_t *v9; // rax
  RTL_SRWLOCK *v10; // rcx
  const struct _TlgProvider_t *v11; // rax
  const struct _TlgProvider_t *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  const GUID *v16; // r9
  PSRWLOCK SRWLock[2]; // [rsp+38h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  PSRWLOCK *v19; // [rsp+68h] [rbp-19h]
  __int64 v20; // [rsp+70h] [rbp-11h]
  struct _GUID *v21; // [rsp+78h] [rbp-9h]
  __int64 v22; // [rsp+80h] [rbp-1h]
  const unsigned __int16 *v23; // [rsp+88h] [rbp+7h]
  int v24; // [rsp+90h] [rbp+Fh]
  int v25; // [rsp+94h] [rbp+13h]
  const char *v26; // [rsp+98h] [rbp+17h]
  int v27; // [rsp+A0h] [rbp+1Fh]
  int v28; // [rsp+A4h] [rbp+23h]

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
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
    LODWORD(v13) = GetCurrentThreadId();
    v20 = 4LL;
    LODWORD(SRWLock[0]) = v13;
    v19 = SRWLock;
    LODWORD(v13) = 0;
    v21 = a2;
    v22 = 16LL;
    if ( a3 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a3[v13] );
    }
    v25 = 0;
    v24 = 2 * v13 + 2;
    if ( !a3 )
      a3 = &Src;
    LODWORD(v14) = 0;
    v23 = a3;
    if ( a4 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a4[v14] );
    }
    v28 = 0;
    if ( !a4 )
      a4 = (const char *)&word_1800F8406;
    v27 = v14 + 1;
    v26 = a4;
    v15 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v15 + 4)
      || (v16 = (const GUID *)(v15 + 24), !*(_DWORD *)(v15 + 24))
      && !*(_DWORD *)(v15 + 28)
      && !*(_DWORD *)(v15 + 32)
      && !*(_DWORD *)(v15 + 36) )
    {
      v16 = 0LL;
    }
    TlgWrite(v12, &unk_18016343E, (LPCGUID)(v15 + 8), v16, 6u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *)((char *)this + 8));
}
