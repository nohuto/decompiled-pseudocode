/*
 * XREFs of Controller_SetControllerGone @ 0x1C000DC30
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0001870 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C0008950 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_DisableController @ 0x1C000BE88 (Controller_DisableController.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0010120 (Controller_WdfEvtDeviceD0Entry.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C001EF80 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0020A50 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C00213C0 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C00217F0 (RootHub_UcxEvtSetPortFeature.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000C5B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C000DAAC (Controller_ReportFatalError.c)
 */

void __fastcall Controller_SetControllerGone(__int64 a1, char a2)
{
  if ( a2 && !*(_BYTE *)(a1 + 333) )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2u, 4u, 0xC8u, (__int64)&Context.Logger + 4);
    Controller_HwVerifierBreakIfEnabled(
      (_QWORD *)a1,
      0LL,
      0LL,
      64LL,
      "A register read returned all FFs. Controller is considered physically removed",
      0LL,
      0LL);
  }
  *(_BYTE *)(a1 + 333) = 1;
  Controller_ReportFatalError(a1, a2 != 0 ? 16 : 8, a2 == 0 ? 0x100D : 0, 0LL, 0LL, 0LL);
}
