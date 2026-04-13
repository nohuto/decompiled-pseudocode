/*
 * XREFs of ?StartActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAAXXZ @ 0x18007D5DC
 * Callers:
 *     ?RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ @ 0x18007DB2C (-RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180023E84 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180030790 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     ?Provider@CDMUtilsUnlockLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18007CE5C (-Provider@CDMUtilsUnlockLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 */

void __fastcall CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::StartActivity(
        CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *this)
{
  __int64 v2; // rdi
  RTL_SRWLOCK *v3; // rcx
  const struct _TlgProvider_t *v4; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v6; // r8
  const GUID *v7; // r9
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v10; // [rsp+60h] [rbp-38h]
  int v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+6Ch] [rbp-2Ch]
  PSRWLOCK *v13; // [rsp+70h] [rbp-28h]
  int v14; // [rsp+78h] [rbp-20h]
  int v15; // [rsp+7Ch] [rbp-1Ch]

  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v2 = *((_QWORD *)this + 6);
  if ( *(_DWORD *)CDMUtilsUnlockLogging::Provider() <= 5u )
  {
    *(_QWORD *)(v2 + 8) = 0LL;
    *(_QWORD *)(v2 + 16) = 0LL;
  }
  else
  {
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  }
  v3 = SRWLock[0];
  *(_DWORD *)v2 = 1;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  v4 = CDMUtilsUnlockLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    v12 = 0;
    v10 = &`CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v11 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v15 = 0;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v13 = SRWLock;
    v14 = 4;
    v6 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v6 + 4)
      || (v7 = (const GUID *)(v6 + 24), !*(_DWORD *)(v6 + 24))
      && !*(_DWORD *)(v6 + 28)
      && !*(_DWORD *)(v6 + 32)
      && !*(_DWORD *)(v6 + 36) )
    {
      v7 = 0LL;
    }
    TlgWrite(v4, &unk_18016EDFB, (LPCGUID)(v6 + 8), v7, 4u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *)((char *)this + 8));
}
