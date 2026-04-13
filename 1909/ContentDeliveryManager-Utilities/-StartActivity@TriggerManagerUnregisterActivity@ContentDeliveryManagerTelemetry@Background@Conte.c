/*
 * XREFs of ?StartActivity@TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x180062CBC
 * Callers:
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x1800659C4 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001FE2C (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800243F4 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180030BD0 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerUnregisterActivity::StartActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerUnregisterActivity *this,
        const char *a2)
{
  __int64 v4; // rsi
  const struct _TlgProvider_t *v5; // rax
  GUID *v6; // rdx
  RTL_SRWLOCK *v7; // rcx
  const struct _TlgProvider_t *v8; // rsi
  DWORD CurrentThreadId; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  const GUID *v12; // r9
  PSRWLOCK SRWLock[2]; // [rsp+38h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  __int64 *v15; // [rsp+68h] [rbp+17h]
  int v16; // [rsp+70h] [rbp+1Fh]
  int v17; // [rsp+74h] [rbp+23h]
  PSRWLOCK *v18; // [rsp+78h] [rbp+27h]
  int v19; // [rsp+80h] [rbp+2Fh]
  int v20; // [rsp+84h] [rbp+33h]
  const char *v21; // [rsp+88h] [rbp+37h]
  int v22; // [rsp+90h] [rbp+3Fh]
  int v23; // [rsp+94h] [rbp+43h]

  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v4 = *((_QWORD *)this + 6);
  v5 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  v6 = (GUID *)(v4 + 8);
  if ( *(_DWORD *)v5 <= 5u )
  {
    *(_QWORD *)&v6->Data1 = 0LL;
    *(_QWORD *)(v4 + 16) = 0LL;
  }
  else
  {
    EventActivityIdControl(3u, v6);
  }
  v7 = SRWLock[0];
  *(_DWORD *)v4 = 1;
  if ( v7 )
    ReleaseSRWLockExclusive(v7);
  v8 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  if ( *(_DWORD *)v8 > 5u )
  {
    v17 = 0;
    v15 = &`CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v16 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v20 = 0;
    LODWORD(v10) = 0;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v18 = SRWLock;
    v19 = 4;
    if ( a2 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( a2[v10] );
    }
    if ( !a2 )
      a2 = (const char *)&word_1800FD7D0;
    v23 = 0;
    v21 = a2;
    v22 = v10 + 1;
    v11 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v11 + 4)
      || (v12 = (const GUID *)(v11 + 24), !*(_DWORD *)(v11 + 24))
      && !*(_DWORD *)(v11 + 28)
      && !*(_DWORD *)(v11 + 32)
      && !*(_DWORD *)(v11 + 36) )
    {
      v12 = 0LL;
    }
    TlgWrite(v8, &unk_18016E9D0, (LPCGUID)(v11 + 8), v12, 5u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerUnregisterActivity *)((char *)this + 8));
}
