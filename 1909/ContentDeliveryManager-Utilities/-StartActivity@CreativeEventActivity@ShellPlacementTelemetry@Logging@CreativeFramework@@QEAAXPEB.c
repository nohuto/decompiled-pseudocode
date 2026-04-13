/*
 * XREFs of ?StartActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG0I@Z @ 0x180025924
 * Callers:
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@W4EventNotificationType@2@@Z @ 0x18002A010 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800243F4 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x18002518C (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180030BD0 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 */

void __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity(
        CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4)
{
  __int64 v7; // r14
  const struct _TlgProvider_t *v8; // rax
  GUID *v9; // rdx
  RTL_SRWLOCK *v10; // rcx
  const struct _TlgProvider_t *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  bool v14; // zf
  __int64 v15; // r8
  const GUID *v16; // r9
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  __int64 *v19; // [rsp+60h] [rbp-29h]
  __int64 v20; // [rsp+68h] [rbp-21h]
  PSRWLOCK *v21; // [rsp+70h] [rbp-19h]
  __int64 v22; // [rsp+78h] [rbp-11h]
  const unsigned __int16 *v23; // [rsp+80h] [rbp-9h]
  int v24; // [rsp+88h] [rbp-1h]
  int v25; // [rsp+8Ch] [rbp+3h]
  const unsigned __int16 *v26; // [rsp+90h] [rbp+7h]
  int v27; // [rsp+98h] [rbp+Fh]
  int v28; // [rsp+9Ch] [rbp+13h]
  int *v29; // [rsp+A0h] [rbp+17h]
  __int64 v30; // [rsp+A8h] [rbp+1Fh]
  int v31; // [rsp+108h] [rbp+7Fh] BYREF

  v31 = a4;
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    this,
    SRWLock);
  v7 = *((_QWORD *)this + 6);
  v8 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
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
  v11 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
  if ( *(_DWORD *)v11 > 5u )
  {
    v20 = 8LL;
    v19 = &`CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity'::`4'::_TlgActivityPrivacyTag;
    LODWORD(v12) = GetCurrentThreadId();
    v22 = 4LL;
    LODWORD(SRWLock[0]) = v12;
    v21 = SRWLock;
    LODWORD(v12) = 0;
    if ( a2 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a2[v12] );
    }
    v25 = 0;
    v24 = 2 * v12 + 2;
    if ( !a2 )
      a2 = &Src;
    LODWORD(v13) = 0;
    v23 = a2;
    v14 = a3 == 0LL;
    if ( a3 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a3[v13] );
      v14 = a3 == 0LL;
    }
    v28 = 0;
    v27 = 2 * v13 + 2;
    if ( v14 )
      a3 = &Src;
    v26 = a3;
    v29 = &v31;
    v30 = 4LL;
    v15 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v15 + 4)
      || (v16 = (const GUID *)(v15 + 24), !*(_DWORD *)(v15 + 24))
      && !*(_DWORD *)(v15 + 28)
      && !*(_DWORD *)(v15 + 32)
      && !*(_DWORD *)(v15 + 36) )
    {
      v16 = 0LL;
    }
    TlgWrite(v11, &unk_18016C016, (LPCGUID)(v15 + 8), v16, 7u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity *)((char *)this + 8));
}
