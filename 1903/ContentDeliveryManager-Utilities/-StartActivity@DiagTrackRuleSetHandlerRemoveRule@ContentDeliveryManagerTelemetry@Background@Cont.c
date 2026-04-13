/*
 * XREFs of ?StartActivity@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_WIPEBD@Z @ 0x18007989C
 * Callers:
 *     ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x18007A5E0 (-RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCr.c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001F98C (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180023E84 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180030790 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::StartActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule *this,
        const wchar_t *a2,
        int a3,
        const char *a4)
{
  __int64 v7; // r14
  const struct _TlgProvider_t *v8; // rax
  GUID *v9; // rdx
  RTL_SRWLOCK *v10; // rcx
  const struct _TlgProvider_t *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r8
  const GUID *v15; // r9
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  __int64 *v18; // [rsp+60h] [rbp-29h]
  __int64 v19; // [rsp+68h] [rbp-21h]
  PSRWLOCK *v20; // [rsp+70h] [rbp-19h]
  __int64 v21; // [rsp+78h] [rbp-11h]
  const wchar_t *v22; // [rsp+80h] [rbp-9h]
  int v23; // [rsp+88h] [rbp-1h]
  int v24; // [rsp+8Ch] [rbp+3h]
  int *v25; // [rsp+90h] [rbp+7h]
  __int64 v26; // [rsp+98h] [rbp+Fh]
  const char *v27; // [rsp+A0h] [rbp+17h]
  int v28; // [rsp+A8h] [rbp+1Fh]
  int v29; // [rsp+ACh] [rbp+23h]
  int v30; // [rsp+100h] [rbp+77h] BYREF

  v30 = a3;
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v7 = *((_QWORD *)this + 6);
  v8 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  v9 = (GUID *)(v7 + 8);
  if ( *(_DWORD *)v8 <= 5u )
  {
    *(_QWORD *)&v9->Data1 = 0LL;
    *(_QWORD *)(v7 + 16) = 0LL;
  }
  else
  {
    EventActivityIdControl(3u, v9);
  }
  v10 = SRWLock[0];
  *(_DWORD *)v7 = 1;
  if ( v10 )
    ReleaseSRWLockExclusive(v10);
  v11 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  if ( *(_DWORD *)v11 > 5u )
  {
    v19 = 8LL;
    v18 = &`CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity'::`4'::_TlgActivityPrivacyTag;
    LODWORD(v12) = GetCurrentThreadId();
    v21 = 4LL;
    LODWORD(SRWLock[0]) = v12;
    v20 = SRWLock;
    LODWORD(v12) = 0;
    if ( a2 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a2[v12] );
    }
    v24 = 0;
    v23 = 2 * v12 + 2;
    v26 = 4LL;
    v25 = &v30;
    if ( !a2 )
      a2 = &Src;
    LODWORD(v13) = 0;
    v22 = a2;
    if ( a4 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a4[v13] );
    }
    v29 = 0;
    if ( !a4 )
      a4 = (const char *)&word_1800FD1E0;
    v28 = v13 + 1;
    v27 = a4;
    v14 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v14 + 4)
      || (v15 = (const GUID *)(v14 + 24), !*(_DWORD *)(v14 + 24))
      && !*(_DWORD *)(v14 + 28)
      && !*(_DWORD *)(v14 + 32)
      && !*(_DWORD *)(v14 + 36) )
    {
      v15 = 0LL;
    }
    TlgWrite(v11, &unk_18016E600, (LPCGUID)(v14 + 8), v15, 7u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule *)((char *)this + 8));
}
