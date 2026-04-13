/*
 * XREFs of ?StartActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG0I@Z @ 0x180025204
 * Callers:
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@W4EventNotificationType@2@@Z @ 0x180029720 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180023D54 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x180024AD4 (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002FD40 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 */

void __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity(
        CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4)
{
  __int64 v7; // r14
  RTL_SRWLOCK *v8; // rcx
  const struct _TlgProvider_t *v9; // r14
  DWORD CurrentThreadId; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  bool v13; // zf
  __int64 v14; // r8
  const GUID *v15; // r9
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  PSRWLOCK *v18; // [rsp+60h] [rbp-19h]
  __int64 v19; // [rsp+68h] [rbp-11h]
  const unsigned __int16 *v20; // [rsp+70h] [rbp-9h]
  int v21; // [rsp+78h] [rbp-1h]
  int v22; // [rsp+7Ch] [rbp+3h]
  const unsigned __int16 *v23; // [rsp+80h] [rbp+7h]
  int v24; // [rsp+88h] [rbp+Fh]
  int v25; // [rsp+8Ch] [rbp+13h]
  int *v26; // [rsp+90h] [rbp+17h]
  __int64 v27; // [rsp+98h] [rbp+1Fh]
  int v28; // [rsp+F8h] [rbp+7Fh] BYREF

  v28 = a4;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    this,
    SRWLock);
  v7 = *((_QWORD *)this + 6);
  if ( *(_DWORD *)CreativeFramework::Logging::ShellPlacementLogging::Provider() <= 5u )
    *(_QWORD *)(v7 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v7 + 8));
  v8 = SRWLock[0];
  *(_DWORD *)v7 = 1;
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  v9 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
  if ( *(_DWORD *)v9 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v19 = 4LL;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v18 = SRWLock;
    LODWORD(v11) = 0;
    if ( a2 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a2[v11] );
    }
    v22 = 0;
    v21 = 2 * v11 + 2;
    if ( !a2 )
      a2 = &Src;
    LODWORD(v12) = 0;
    v20 = a2;
    v13 = a3 == 0LL;
    if ( a3 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a3[v12] );
      v13 = a3 == 0LL;
    }
    v25 = 0;
    v24 = 2 * v12 + 2;
    if ( v13 )
      a3 = &Src;
    v23 = a3;
    v26 = &v28;
    v27 = 4LL;
    v14 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v14 + 4)
      || (v15 = (const GUID *)(v14 + 24), !*(_DWORD *)(v14 + 24))
      && !*(_DWORD *)(v14 + 28)
      && !*(_DWORD *)(v14 + 32)
      && !*(_DWORD *)(v14 + 36) )
    {
      v15 = 0LL;
    }
    TlgWrite(v9, &unk_18016288A, (LPCGUID)(v14 + 8), v15, 6u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity *)((char *)this + 8));
}
