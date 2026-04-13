/*
 * XREFs of ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002EEF8
 * Callers:
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@W4EventNotificationType@2@@Z @ 0x180029AC0 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180002E60 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180023D7C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x180024C1C (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180030790 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_.c)
 *     ?ReportStopActivity@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180030828 (-ReportStopActivity@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CB119 (memset_0.c)
 */

int __fastcall wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
        CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity *this)
{
  __int64 v2; // rax
  int v3; // esi
  RTL_SRWLOCK *v4; // rcx
  int v5; // esi
  const struct _TlgProvider_t *v6; // rax
  const struct _TlgProvider_t *v7; // rdi
  DWORD CurrentThreadId; // eax
  const struct _TlgProvider_t *v9; // rbx
  const struct _TlgProvider_t **v10; // rcx
  const struct wil::FailureInfo *v11; // rdx
  int v13; // [rsp+38h] [rbp-69h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-61h] BYREF
  __int64 v15; // [rsp+48h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-49h] BYREF
  __int64 *v17; // [rsp+78h] [rbp-29h]
  int v18; // [rsp+80h] [rbp-21h]
  int v19; // [rsp+84h] [rbp-1Dh]
  int *v20; // [rsp+88h] [rbp-19h]
  int v21; // [rsp+90h] [rbp-11h]
  int v22; // [rsp+94h] [rbp-Dh]
  PSRWLOCK *p_SRWLock; // [rsp+98h] [rbp-9h]
  int v24; // [rsp+A0h] [rbp-1h]
  int v25; // [rsp+A4h] [rbp+3h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    this,
    &SRWLock);
  v2 = *((_QWORD *)this + 6);
  v3 = *(_DWORD *)(v2 + 72);
  if ( v3 < 1 )
  {
    memset_0(&pData, 0, 0x90uLL);
    wil::details::WilFailFast((wil::details *)&pData, v11);
  }
  if ( *(int *)(v2 + 76) >= 0 )
    *(_DWORD *)(v2 + 76) = 0;
  v4 = SRWLock;
  v5 = v3 - 1;
  *(_DWORD *)(v2 + 72) = v5;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( v5 )
  {
    v6 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
    v7 = v6;
    if ( *(_DWORD *)v6 > 5u )
    {
      v19 = 0;
      v13 = 0;
      v22 = 0;
      v17 = &v15;
      v20 = &v13;
      v15 = 0x1000000LL;
      v18 = 8;
      v21 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v25 = 0;
      LODWORD(SRWLock) = CurrentThreadId;
      p_SRWLock = &SRWLock;
      v24 = 4;
      LODWORD(v6) = TlgWrite(v7, &unk_18016B9CA, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &pData);
    }
  }
  else
  {
    LODWORD(v6) = wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(this);
  }
  if ( *((_DWORD *)this + 8) )
  {
    v9 = (CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity *)((char *)this + 8);
    if ( *((_DWORD *)v9 + 6) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3A9,
        (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        (const char *)0x8007029CLL);
    *((_DWORD *)v9 + 6) = 0;
    v10 = *(const struct _TlgProvider_t ***)v9;
    while ( 1 )
    {
      v6 = *v10;
      if ( !*v10 )
        break;
      if ( v6 == v9 )
      {
        v6 = (const struct _TlgProvider_t *)*((_QWORD *)v9 + 2);
        *v10 = v6;
        break;
      }
      v10 = (const struct _TlgProvider_t **)((char *)v6 + 16);
      *(_QWORD *)v9 = (char *)v6 + 16;
    }
    *(_QWORD *)v9 = 0LL;
  }
  return (int)v6;
}
