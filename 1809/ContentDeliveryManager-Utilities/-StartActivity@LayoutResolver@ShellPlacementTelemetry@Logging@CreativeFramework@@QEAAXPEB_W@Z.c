/*
 * XREFs of ?StartActivity@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEB_W@Z @ 0x18009C8AC
 * Callers:
 *     ?ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z @ 0x18009DB58 (-ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180023D54 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x180024AD4 (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002FD40 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 */

void __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::StartActivity(
        CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *this,
        const wchar_t *a2)
{
  __int64 v4; // rbx
  const struct _TlgProvider_t *v5; // rax
  RTL_SRWLOCK *v6; // rcx
  const struct _TlgProvider_t *v7; // rax
  const struct _TlgProvider_t *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  const GUID *v11; // r9
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  PSRWLOCK *v14; // [rsp+60h] [rbp-48h]
  __int64 v15; // [rsp+68h] [rbp-40h]
  const wchar_t *v16; // [rsp+70h] [rbp-38h]
  int v17; // [rsp+78h] [rbp-30h]
  int v18; // [rsp+7Ch] [rbp-2Ch]

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v4 = *((_QWORD *)this + 6);
  v5 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
  if ( *(_DWORD *)v5 > 5u
    && (*((_QWORD *)v5 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v5 + 3) & 0x400000000000LL) == *((_QWORD *)v5 + 3) )
  {
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  }
  else
  {
    *(_QWORD *)(v4 + 8) = 0LL;
  }
  v6 = SRWLock[0];
  *(_DWORD *)v4 = 1;
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  v7 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
  v8 = v7;
  if ( *(_DWORD *)v7 > 5u
    && (*((_QWORD *)v7 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v7 + 3) & 0x400000000000LL) == *((_QWORD *)v7 + 3) )
  {
    LODWORD(SRWLock[0]) = GetCurrentThreadId();
    v15 = 4LL;
    v14 = SRWLock;
    LODWORD(v9) = 0;
    if ( a2 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( a2[v9] );
    }
    v18 = 0;
    if ( !a2 )
      a2 = &Src;
    v16 = a2;
    v17 = 2 * v9 + 2;
    v10 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v10 + 4)
      || (v11 = (const GUID *)(v10 + 24), !*(_DWORD *)(v10 + 24))
      && !*(_DWORD *)(v10 + 28)
      && !*(_DWORD *)(v10 + 32)
      && !*(_DWORD *)(v10 + 36) )
    {
      v11 = 0LL;
    }
    TlgWrite(v8, &unk_180165972, (LPCGUID)(v10 + 8), v11, 4u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *)((char *)this + 8));
}
