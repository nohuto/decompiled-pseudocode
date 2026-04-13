/*
 * XREFs of ?StartActivity@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_WIPEBD@Z @ 0x180077ED4
 * Callers:
 *     ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x180078BB0 (-RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCr.c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001F80C (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180023D54 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002FD40 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::StartActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule *this,
        const wchar_t *a2,
        int a3,
        const char *a4)
{
  __int64 v7; // r14
  RTL_SRWLOCK *v8; // rcx
  const struct _TlgProvider_t *v9; // r14
  DWORD CurrentThreadId; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  const GUID *v14; // r9
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  PSRWLOCK *v17; // [rsp+60h] [rbp-19h]
  __int64 v18; // [rsp+68h] [rbp-11h]
  const wchar_t *v19; // [rsp+70h] [rbp-9h]
  int v20; // [rsp+78h] [rbp-1h]
  int v21; // [rsp+7Ch] [rbp+3h]
  int *v22; // [rsp+80h] [rbp+7h]
  __int64 v23; // [rsp+88h] [rbp+Fh]
  const char *v24; // [rsp+90h] [rbp+17h]
  int v25; // [rsp+98h] [rbp+1Fh]
  int v26; // [rsp+9Ch] [rbp+23h]
  int v27; // [rsp+F0h] [rbp+77h] BYREF

  v27 = a3;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v7 = *((_QWORD *)this + 6);
  if ( *(_DWORD *)ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider() <= 5u )
    *(_QWORD *)(v7 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v7 + 8));
  v8 = SRWLock[0];
  *(_DWORD *)v7 = 1;
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  v9 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  if ( *(_DWORD *)v9 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v18 = 4LL;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v17 = SRWLock;
    LODWORD(v11) = 0;
    if ( a2 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a2[v11] );
    }
    v21 = 0;
    v23 = 4LL;
    if ( !a2 )
      a2 = &Src;
    v20 = 2 * v11 + 2;
    v22 = &v27;
    LODWORD(v12) = 0;
    v19 = a2;
    if ( a4 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a4[v12] );
    }
    v26 = 0;
    if ( !a4 )
      a4 = (const char *)&word_1800F8406;
    v25 = v12 + 1;
    v24 = a4;
    v13 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v13 + 4)
      || (v14 = (const GUID *)(v13 + 24), !*(_DWORD *)(v13 + 24))
      && !*(_DWORD *)(v13 + 28)
      && !*(_DWORD *)(v13 + 32)
      && !*(_DWORD *)(v13 + 36) )
    {
      v14 = 0LL;
    }
    TlgWrite(v9, &unk_180164F22, (LPCGUID)(v13 + 8), v14, 6u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule *)((char *)this + 8));
}
