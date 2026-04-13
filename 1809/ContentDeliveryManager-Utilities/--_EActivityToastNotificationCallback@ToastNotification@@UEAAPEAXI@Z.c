/*
 * XREFs of ??_EActivityToastNotificationCallback@ToastNotification@@UEAAPEAXI@Z @ 0x18004AD60
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800037EC (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180049EE4 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23_ea_180049EE4.c)
 */

ToastNotification::ActivityToastNotificationCallback *__fastcall ToastNotification::ActivityToastNotificationCallback::`vector deleting destructor'(
        ToastNotification::ActivityToastNotificationCallback *this,
        char a2)
{
  void *v4; // rcx
  __int64 v5; // r8
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (void *)*((_QWORD *)this + 10);
  if ( v4 && !CloseHandle(v4) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x90E, v5, v6);
    JUMPOUT(0x18004ADB6LL);
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
