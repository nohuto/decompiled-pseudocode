/*
 * XREFs of ?OnPublishComplete@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBU_GUID@@@Z @ 0x180047C80
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800036FC (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall ToastNotification::ActivityToastNotificationCallback::OnPublishComplete(
        HANDLE *this,
        const struct _GUID *a2)
{
  __int64 v2; // r8
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this[3]) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x8E6, v2, v3);
    JUMPOUT(0x180047CA8LL);
  }
  return 0LL;
}
