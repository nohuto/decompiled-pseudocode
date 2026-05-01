/*
 * XREFs of ?StartActivity@TouchKeyboardExperienceManagerDelayedInitialization@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x180334BB8
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180331F00 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008FB54 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?LockExclusive@?$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800985C8 (-LockExclusive@-$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorT.c)
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AB40C (-EnsureWatchingCurrentThread@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BA.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180332E58 (-Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x18033AEA4 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDelayedInitialization::StartActivity(
        TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDelayedInitialization *this)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  RTL_SRWLOCK *v4; // rcx
  const struct _TlgProvider_t *v5; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v7; // rax
  UINT32 cData; // edx
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  void *v11; // [rsp+60h] [rbp-38h]
  int v12; // [rsp+68h] [rbp-30h]
  int v13; // [rsp+6Ch] [rbp-2Ch]
  PSRWLOCK *v14; // [rsp+70h] [rbp-28h]
  int v15; // [rsp+78h] [rbp-20h]
  int v16; // [rsp+7Ch] [rbp-1Ch]

  wil::ActivityBase<AppUsageTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v2 = *((_QWORD *)this + 6);
  if ( *(_DWORD *)TouchKeyboardExperienceTraceLogging::Provider(v3) <= 5u )
  {
    *(_QWORD *)(v2 + 8) = 0LL;
    *(_QWORD *)(v2 + 16) = 0LL;
  }
  else
  {
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  }
  v4 = SRWLock[0];
  *(_DWORD *)v2 = 1;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  v5 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                                           v4,
                                           lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v5 > 5u )
  {
    v13 = 0;
    v11 = &`TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDelayedInitialization::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v12 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v16 = 0;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v14 = SRWLock;
    v15 = 4;
    v7 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v5, &unk_1804FF683, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v7, cData, &pData);
  }
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
