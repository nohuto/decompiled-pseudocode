/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x14002BAD8
 * Callers:
 *     _lambda_60fdbaca8c2c9d0ff58a3f8d500584e0_::operator() @ 0x140029EA8 (_lambda_60fdbaca8c2c9d0ff58a3f8d500584e0_--operator().c)
 *     ?Run@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x14002B858 (-Run@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z.c)
 *     ?CMModulesNotificationCallback@AudioDeviceBroker@Internal@Devices@Media@Windows@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x140046B90 (-CMModulesNotificationCallback@AudioDeviceBroker@Internal@Devices@Media@Windows@@CAKPEAUHCMNOTIF.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x140028DA8 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  __int64 v2; // r8
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x8E6, v2, v3);
    __debugbreak();
  }
}
