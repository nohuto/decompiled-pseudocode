/*
 * XREFs of ?StartActivity@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_W0PEBD@Z @ 0x1800638C4
 * Callers:
 *     ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x180065F40 (-GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Se.c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001FE2C (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800243F4 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180030BD0 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::StartActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *this,
        const wchar_t *a2,
        const wchar_t *a3,
        const char *a4)
{
  __int64 v8; // r15
  const struct _TlgProvider_t *v9; // rax
  GUID *v10; // rdx
  RTL_SRWLOCK *v11; // rcx
  const struct _TlgProvider_t *v12; // r15
  DWORD CurrentThreadId; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  bool v16; // zf
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r8
  const GUID *v20; // r9
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  __int64 *v23; // [rsp+60h] [rbp-29h]
  __int64 v24; // [rsp+68h] [rbp-21h]
  PSRWLOCK *v25; // [rsp+70h] [rbp-19h]
  __int64 v26; // [rsp+78h] [rbp-11h]
  const wchar_t *v27; // [rsp+80h] [rbp-9h]
  int v28; // [rsp+88h] [rbp-1h]
  int v29; // [rsp+8Ch] [rbp+3h]
  const wchar_t *v30; // [rsp+90h] [rbp+7h]
  int v31; // [rsp+98h] [rbp+Fh]
  int v32; // [rsp+9Ch] [rbp+13h]
  const char *v33; // [rsp+A0h] [rbp+17h]
  int v34; // [rsp+A8h] [rbp+1Fh]
  int v35; // [rsp+ACh] [rbp+23h]

  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v8 = *((_QWORD *)this + 6);
  v9 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  v10 = (GUID *)(v8 + 8);
  if ( *(_DWORD *)v9 <= 5u )
  {
    *(_QWORD *)&v10->Data1 = 0LL;
    *(_QWORD *)(v8 + 16) = 0LL;
  }
  else
  {
    EventActivityIdControl(3u, v10);
  }
  v11 = SRWLock[0];
  *(_DWORD *)v8 = 1;
  if ( v11 )
    ReleaseSRWLockExclusive(v11);
  v12 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  if ( *(_DWORD *)v12 > 5u )
  {
    v24 = 8LL;
    v23 = &`CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity'::`4'::_TlgActivityPrivacyTag;
    CurrentThreadId = GetCurrentThreadId();
    v26 = 4LL;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v25 = SRWLock;
    LODWORD(v14) = 0;
    if ( a2 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a2[v14] );
    }
    v29 = 0;
    v28 = 2 * v14 + 2;
    if ( !a2 )
      a2 = &Src;
    LODWORD(v15) = 0;
    v27 = a2;
    v16 = a3 == 0LL;
    if ( a3 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a3[v15] );
      v16 = a3 == 0LL;
    }
    v17 = 2 * v15 + 2;
    v32 = 0;
    if ( v16 )
      a3 = &Src;
    v31 = v17;
    v30 = a3;
    LODWORD(v18) = 0;
    if ( a4 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a4[v18] );
    }
    v35 = 0;
    if ( !a4 )
      a4 = (const char *)&word_1800FD7D0;
    v34 = v18 + 1;
    v33 = a4;
    v19 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v19 + 4)
      || (v20 = (const GUID *)(v19 + 24), !*(_DWORD *)(v19 + 24))
      && !*(_DWORD *)(v19 + 28)
      && !*(_DWORD *)(v19 + 32)
      && !*(_DWORD *)(v19 + 36) )
    {
      v20 = 0LL;
    }
    TlgWrite(v12, &unk_18016E37C, (LPCGUID)(v19 + 8), v20, 7u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *)((char *)this + 8));
}
