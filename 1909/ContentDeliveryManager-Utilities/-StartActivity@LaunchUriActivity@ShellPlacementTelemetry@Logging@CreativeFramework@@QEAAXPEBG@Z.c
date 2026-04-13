/*
 * XREFs of ?StartActivity@LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG@Z @ 0x180025FC4
 * Callers:
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@W4EventNotificationType@2@@Z @ 0x18002A010 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800243F4 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x18002518C (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180030BD0 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 */

void __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::LaunchUriActivity::StartActivity(
        CreativeFramework::Logging::ShellPlacementTelemetry::LaunchUriActivity *this,
        const unsigned __int16 *a2)
{
  __int64 v4; // rbx
  const struct _TlgProvider_t *v5; // rax
  RTL_SRWLOCK *v6; // rcx
  const struct _TlgProvider_t *v7; // rax
  const struct _TlgProvider_t *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  const GUID *v11; // r9
  PSRWLOCK SRWLock[2]; // [rsp+38h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  __int64 *v14; // [rsp+68h] [rbp+7h]
  __int64 v15; // [rsp+70h] [rbp+Fh]
  PSRWLOCK *v16; // [rsp+78h] [rbp+17h]
  __int64 v17; // [rsp+80h] [rbp+1Fh]
  const unsigned __int16 *v18; // [rsp+88h] [rbp+27h]
  int v19; // [rsp+90h] [rbp+2Fh]
  int v20; // [rsp+94h] [rbp+33h]

  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    this,
    SRWLock);
  v4 = *((_QWORD *)this + 6);
  v5 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
  if ( *(_DWORD *)v5 > 5u
    && (*((_QWORD *)v5 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v5 + 3) & 0x200000000000LL) == *((_QWORD *)v5 + 3) )
  {
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  }
  else
  {
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_QWORD *)(v4 + 16) = 0LL;
  }
  v6 = SRWLock[0];
  *(_DWORD *)v4 = 1;
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  v7 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
  v8 = v7;
  if ( *(_DWORD *)v7 > 5u
    && (*((_QWORD *)v7 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v7 + 3) & 0x200000000000LL) == *((_QWORD *)v7 + 3) )
  {
    v15 = 8LL;
    v14 = &`CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity'::`4'::_TlgActivityPrivacyTag;
    LODWORD(v9) = GetCurrentThreadId();
    v17 = 4LL;
    LODWORD(SRWLock[0]) = v9;
    v16 = SRWLock;
    LODWORD(v9) = 0;
    if ( a2 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( a2[v9] );
    }
    v20 = 0;
    if ( !a2 )
      a2 = &Src;
    v18 = a2;
    v19 = 2 * v9 + 2;
    v10 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v10 + 4)
      || (v11 = (const GUID *)(v10 + 24), !*(_DWORD *)(v10 + 24))
      && !*(_DWORD *)(v10 + 28)
      && !*(_DWORD *)(v10 + 32)
      && !*(_DWORD *)(v10 + 36) )
    {
      v11 = 0LL;
    }
    TlgWrite(v8, &unk_18016BF33, (LPCGUID)(v10 + 8), v11, 5u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CreativeFramework::Logging::ShellPlacementTelemetry::LaunchUriActivity *)((char *)this + 8));
}
