/*
 * XREFs of ?StartActivity@TakeForeground@Win32BackedViewHostItemTelemetry@@QEAAXI@Z @ 0x180232A8C
 * Callers:
 *     ?TakeForeground@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAW4ForegroundPolicyResult@ComposableShell@45@@Z @ 0x180234080 (-TakeForeground@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAW4Foreground.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180037490 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008FB54 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180150C54 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?get@?$static_lazy@VWin32BackedViewHostItemTelemetryProvider@@@details@wil@@QEAAPEAVWin32BackedViewHostItemTelemetryProvider@@P6AXXZ@Z @ 0x1802364E8 (-get@-$static_lazy@VWin32BackedViewHostItemTelemetryProvider@@@details@wil@@QEAAPEAVWin32BackedV.c)
 */

void __fastcall Win32BackedViewHostItemTelemetry::TakeForeground::StartActivity(
        Win32BackedViewHostItemTelemetry::TakeForeground *this,
        int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  RTL_SRWLOCK *v5; // rcx
  const struct _TlgProvider_t *v6; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v8; // rax
  PSRWLOCK SRWLock[2]; // [rsp+38h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  void *v11; // [rsp+68h] [rbp+17h]
  int v12; // [rsp+70h] [rbp+1Fh]
  int v13; // [rsp+74h] [rbp+23h]
  PSRWLOCK *v14; // [rsp+78h] [rbp+27h]
  int v15; // [rsp+80h] [rbp+2Fh]
  int v16; // [rsp+84h] [rbp+33h]
  int *v17; // [rsp+88h] [rbp+37h]
  int v18; // [rsp+90h] [rbp+3Fh]
  int v19; // [rsp+94h] [rbp+43h]
  int v20; // [rsp+C0h] [rbp+6Fh] BYREF

  v20 = a2;
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v3 = *((_QWORD *)this + 6);
  if ( **(_DWORD **)(wil::details::static_lazy<Win32BackedViewHostItemTelemetryProvider>::get(
                       v4,
                       lambda_ec1d4b054d630c017dce9880fb168525_::_lambda_invoker_cdecl_)
                   + 8) <= 4u )
  {
    *(_QWORD *)(v3 + 8) = 0LL;
    *(_QWORD *)(v3 + 16) = 0LL;
  }
  else
  {
    EventActivityIdControl(3u, (LPGUID)(v3 + 8));
  }
  v5 = SRWLock[0];
  *(_DWORD *)v3 = 1;
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  v6 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<Win32BackedViewHostItemTelemetryProvider>::get(
                                           v5,
                                           lambda_ec1d4b054d630c017dce9880fb168525_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v6 > 4u )
  {
    v13 = 0;
    v11 = &`Win32BackedViewHostItemTelemetry::PortFromHolographic::StopActivity'::`10'::_TlgActivityPrivacyTag;
    v12 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v16 = 0;
    v19 = 0;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v14 = SRWLock;
    v17 = &v20;
    v15 = 4;
    v18 = 4;
    v8 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v6, &unk_1804F0A6C, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v8, 5u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((Win32BackedViewHostItemTelemetry::TakeForeground *)((char *)this + 8));
}
