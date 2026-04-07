/*
 * XREFs of ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x180009948
 * Callers:
 *     ??$?0$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180009894 (--$-0$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x180009D00 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000A54C (-LockExclusive@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18000A60C (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x18000AA7C (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18004F7B8 (-zInternalRelatedId@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Para.c)
 */

void __fastcall WindowFrameLoggingTelemetry::CloneWindow::StartActivity(WindowFrameLoggingTelemetry::CloneWindow *this)
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

  wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(this, SRWLock);
  v2 = *((_QWORD *)this + 6);
  if ( **(_DWORD **)(wil::details::static_lazy<WindowFrameLogging>::get(
                       v3,
                       lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)
                   + 8) > 5u )
  {
    EtwEventActivityIdControl(3LL, v2 + 8);
  }
  else
  {
    *(_QWORD *)(v2 + 8) = 0LL;
    *(_QWORD *)(v2 + 16) = 0LL;
  }
  v4 = SRWLock[0];
  *(_DWORD *)v2 = 1;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  v5 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<WindowFrameLogging>::get(
                                           v4,
                                           lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v5 > 5u )
  {
    v13 = 0;
    v11 = &`AnimationClockLoggingTelemetry::TriggerClock::StopActivity'::`28'::_TlgActivityPrivacyTag;
    v12 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v16 = 0;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v14 = SRWLock;
    v15 = 4;
    v7 = (const GUID *)wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    TlgWrite(v5, &unk_1800C8CE8, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v7, cData, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((WindowFrameLoggingTelemetry::CloneWindow *)((char *)this + 8));
}
