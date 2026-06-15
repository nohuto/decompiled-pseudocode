/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x140013B50
 * Callers:
 *     _lambda_d1de4b53b525fd4013d62472baaa2c14_::operator() @ 0x14001367C (_lambda_d1de4b53b525fd4013d62472baaa2c14_--operator().c)
 *     ?WinMain@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z @ 0x140013FDC (-WinMain@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z.c)
 *     ?CMModulesNotificationCallback@AudioDeviceBroker@Internal@Devices@Media@Windows@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x140049140 (-CMModulesNotificationCallback@AudioDeviceBroker@Internal@Devices@Media@Windows@@CAKPEAUHCMNOTIF.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x140030918 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  unsigned int v2; // r8d
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x904, v2, v3);
    __debugbreak();
  }
}
