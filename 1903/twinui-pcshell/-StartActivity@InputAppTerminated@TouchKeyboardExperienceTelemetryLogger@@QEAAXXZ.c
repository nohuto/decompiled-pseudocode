/*
 * XREFs of ?StartActivity@InputAppTerminated@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x18032564C
 * Callers:
 *     ?OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x18032265C (-OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x1800484B4 (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008D338 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1801316F4 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x18031B654 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::InputAppTerminated::StartActivity(
        TouchKeyboardExperienceTelemetryLogger::InputAppTerminated *this)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  _QWORD *v4; // rax
  RTL_SRWLOCK *v5; // rcx
  _QWORD *v6; // rax
  const struct _TlgProvider_t *v7; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v9; // rax
  UINT32 cData; // edx
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  void *v13; // [rsp+60h] [rbp-38h]
  int v14; // [rsp+68h] [rbp-30h]
  int v15; // [rsp+6Ch] [rbp-2Ch]
  PSRWLOCK *v16; // [rsp+70h] [rbp-28h]
  int v17; // [rsp+78h] [rbp-20h]
  int v18; // [rsp+7Ch] [rbp-1Ch]

  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v2 = *((_QWORD *)this + 6);
  v4 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
         v3,
         (void (__cdecl *)())lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)v4[1], 5u, 0x400000000000uLL) )
  {
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  }
  else
  {
    *(_QWORD *)(v2 + 8) = 0LL;
    *(_QWORD *)(v2 + 16) = 0LL;
  }
  v5 = SRWLock[0];
  *(_DWORD *)v2 = 1;
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  v6 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
         (__int64)v5,
         (void (__cdecl *)())lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  v7 = (const struct _TlgProvider_t *)v6[1];
  if ( *(_DWORD *)v7 > 5u && TlgKeywordOn((TraceLoggingHProvider)v6[1], 0x400000000000uLL) )
  {
    v15 = 0;
    v13 = &`TouchKeyboardExperienceTelemetryLogger::InputAppTerminated::StopActivity'::`28'::_TlgActivityPrivacyTag;
    v14 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v18 = 0;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v16 = SRWLock;
    v17 = 4;
    v9 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v7, &unk_1804DB14E, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v9, cData, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((TouchKeyboardExperienceTelemetryLogger::InputAppTerminated *)((char *)this + 8));
}
