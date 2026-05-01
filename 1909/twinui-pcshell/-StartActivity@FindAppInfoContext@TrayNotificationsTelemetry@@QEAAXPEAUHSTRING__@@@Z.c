/*
 * XREFs of ?StartActivity@FindAppInfoContext@TrayNotificationsTelemetry@@QEAAXPEAUHSTRING__@@@Z @ 0x18035C188
 * Callers:
 *     ?FindAppInfo@TrayInfoTipAppInfoProvider@SystemTray@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInfo@ApplicationModel@Windows@@@Z @ 0x18035B760 (-FindAppInfo@TrayInfoTipAppInfoProvider@SystemTray@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInfo@Applicat.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180037490 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008FB54 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180150C54 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?get@?$static_lazy@VTrayNotificationAreaLogging@@@details@wil@@QEAAPEAVTrayNotificationAreaLogging@@P6AXXZ@Z @ 0x18035C6F8 (-get@-$static_lazy@VTrayNotificationAreaLogging@@@details@wil@@QEAAPEAVTrayNotificationAreaLoggi.c)
 */

void __fastcall TrayNotificationsTelemetry::FindAppInfoContext::StartActivity(
        TrayNotificationsTelemetry::FindAppInfoContext *this,
        HSTRING a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  RTL_SRWLOCK *v6; // rcx
  const struct _TlgProvider_t *v7; // rsi
  DWORD CurrentThreadId; // eax
  const WCHAR *StringRawBuffer; // rdi
  const WCHAR *FileNameW; // rax
  const GUID *v11; // rax
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  __int64 *v14; // [rsp+60h] [rbp+7h]
  int v15; // [rsp+68h] [rbp+Fh]
  int v16; // [rsp+6Ch] [rbp+13h]
  PSRWLOCK *v17; // [rsp+70h] [rbp+17h]
  int v18; // [rsp+78h] [rbp+1Fh]
  int v19; // [rsp+7Ch] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+27h] BYREF

  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v4 = *((_QWORD *)this + 6);
  if ( **(_DWORD **)(wil::details::static_lazy<TrayNotificationAreaLogging>::get(
                       v5,
                       lambda_0975fe2f1555e85eda3261a2a36018a8_::_lambda_invoker_cdecl_)
                   + 8) <= 5u )
  {
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_QWORD *)(v4 + 16) = 0LL;
  }
  else
  {
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  }
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
    v16 = 0;
    v14 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v15 = 8;
    CurrentThreadId = GetCurrentThreadId();
    v19 = 0;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v18 = 4;
    v17 = SRWLock;
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
    v11 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v7, &unk_1805037D2, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v11, 5u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((TrayNotificationsTelemetry::FindAppInfoContext *)((char *)this + 8));
}
