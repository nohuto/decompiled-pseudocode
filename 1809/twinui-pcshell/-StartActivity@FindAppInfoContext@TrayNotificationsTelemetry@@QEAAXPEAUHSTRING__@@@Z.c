/*
 * XREFs of ?StartActivity@FindAppInfoContext@TrayNotificationsTelemetry@@QEAAXPEAUHSTRING__@@@Z @ 0x1802DB8BC
 * Callers:
 *     ?FindAppInfo@TrayInfoTipAppInfoProvider@SystemTray@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInfo@ApplicationModel@Windows@@@Z @ 0x1802DAF10 (-FindAppInfo@TrayInfoTipAppInfoProvider@SystemTray@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInfo@Applicat.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003EB90 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800834E0 (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?LockExclusive@?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18010B090 (-LockExclusive@-$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?get@?$static_lazy@VTrayNotificationAreaLogging@@@details@wil@@QEAAPEAVTrayNotificationAreaLogging@@P6AXXZ@Z @ 0x1802DBDA8 (-get@-$static_lazy@VTrayNotificationAreaLogging@@@details@wil@@QEAAPEAVTrayNotificationAreaLoggi.c)
 */

void __fastcall TrayNotificationsTelemetry::FindAppInfoContext::StartActivity(
        TrayNotificationsTelemetry::FindAppInfoContext *this,
        HSTRING a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  RTL_SRWLOCK *v6; // rcx
  const struct _TlgProvider_t *v7; // rsi
  DWORD CurrentThreadId; // eax
  const WCHAR *StringRawBuffer; // rbx
  const WCHAR *FileNameW; // rax
  const GUID *v11; // rax
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  PSRWLOCK *v14; // [rsp+60h] [rbp-48h]
  int v15; // [rsp+68h] [rbp-40h]
  int v16; // [rsp+6Ch] [rbp-3Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-38h] BYREF

  wil::ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive((__int64)this, SRWLock);
  v4 = *((_QWORD *)this + 6);
  if ( **(_DWORD **)(wil::details::static_lazy<TrayNotificationAreaLogging>::get(
                       v5,
                       lambda_0975fe2f1555e85eda3261a2a36018a8_::_lambda_invoker_cdecl_)
                   + 8) <= 5u )
    *(_QWORD *)(v4 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  v6 = SRWLock[0];
  *(_DWORD *)v4 = 1;
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  v7 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<TrayNotificationAreaLogging>::get(
                                           v6,
                                           lambda_0975fe2f1555e85eda3261a2a36018a8_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v7 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v16 = 0;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v15 = 4;
    v14 = SRWLock;
    StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
    FileNameW = 0LL;
    if ( StringRawBuffer )
    {
      if ( PathIsFileSpecW(StringRawBuffer) )
        FileNameW = StringRawBuffer;
      else
        FileNameW = PathFindFileNameW(StringRawBuffer);
    }
    TlgCreateWsz(&pDesc, FileNameW);
    v11 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v7, &unk_180464774, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v11, 4u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((TrayNotificationsTelemetry::FindAppInfoContext *)((char *)this + 8));
}
