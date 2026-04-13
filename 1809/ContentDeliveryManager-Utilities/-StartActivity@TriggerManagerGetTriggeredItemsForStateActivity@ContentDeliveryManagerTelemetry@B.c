/*
 * XREFs of ?StartActivity@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_W0PEBD@Z @ 0x180061E7C
 * Callers:
 *     ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x180064440 (-GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Se.c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001F80C (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180023D54 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002FD40 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::StartActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *this,
        const wchar_t *a2,
        const wchar_t *a3,
        const char *a4)
{
  _DWORD *v8; // r15
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
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  PSRWLOCK *v23; // [rsp+60h] [rbp-19h]
  __int64 v24; // [rsp+68h] [rbp-11h]
  const wchar_t *v25; // [rsp+70h] [rbp-9h]
  int v26; // [rsp+78h] [rbp-1h]
  int v27; // [rsp+7Ch] [rbp+3h]
  const wchar_t *v28; // [rsp+80h] [rbp+7h]
  int v29; // [rsp+88h] [rbp+Fh]
  int v30; // [rsp+8Ch] [rbp+13h]
  const char *v31; // [rsp+90h] [rbp+17h]
  int v32; // [rsp+98h] [rbp+1Fh]
  int v33; // [rsp+9Ch] [rbp+23h]

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v8 = (_DWORD *)*((_QWORD *)this + 6);
  v9 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  v10 = (GUID *)(v8 + 2);
  if ( *(_DWORD *)v9 <= 5u )
    *(_QWORD *)&v10->Data1 = 0LL;
  else
    EventActivityIdControl(3u, v10);
  v11 = SRWLock[0];
  *v8 = 1;
  if ( v11 )
    ReleaseSRWLockExclusive(v11);
  v12 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  if ( *(_DWORD *)v12 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v24 = 4LL;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v23 = SRWLock;
    LODWORD(v14) = 0;
    if ( a2 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a2[v14] );
    }
    v27 = 0;
    v26 = 2 * v14 + 2;
    if ( !a2 )
      a2 = &Src;
    LODWORD(v15) = 0;
    v25 = a2;
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
    v30 = 0;
    if ( v16 )
      a3 = &Src;
    v29 = v17;
    v28 = a3;
    LODWORD(v18) = 0;
    if ( a4 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a4[v18] );
    }
    v33 = 0;
    if ( !a4 )
      a4 = (const char *)&word_1800F8406;
    v32 = v18 + 1;
    v31 = a4;
    v19 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v19 + 4)
      || (v20 = (const GUID *)(v19 + 24), !*(_DWORD *)(v19 + 24))
      && !*(_DWORD *)(v19 + 28)
      && !*(_DWORD *)(v19 + 32)
      && !*(_DWORD *)(v19 + 36) )
    {
      v20 = 0LL;
    }
    TlgWrite(v12, &unk_1801647E6, (LPCGUID)(v19 + 8), v20, 6u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *)((char *)this + 8));
}
