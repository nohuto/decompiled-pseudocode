/*
 * XREFs of ?SendLampStateUpdate@HidLampRangeUpdateReportBuilder@@QEAAJXZ @ 0x1800B65D8
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x1800AE894 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z @ 0x1800B53B8 (-SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z.c)
 */

__int64 __fastcall HidLampRangeUpdateReportBuilder::SendLampStateUpdate(const WCHAR **this)
{
  int updated; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = HidLampArrayDevice::SendLampRangeUpdateReport(
              this[5],
              (const struct LampRangeUpdateDeviceReport *)((char *)this + 20));
  v2 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x77,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamprangeupdatereportbuilder.cpp",
    (const char *)(unsigned int)updated);
  return v2;
}
