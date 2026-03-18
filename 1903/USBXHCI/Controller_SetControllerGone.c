/*
 * XREFs of Controller_SetControllerGone @ 0x1C00102A4
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0001890 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C000A900 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_DisableController @ 0x1C000E1E4 (Controller_DisableController.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0012B90 (Controller_WdfEvtDeviceD0Entry.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0022B40 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0024AC0 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0025520 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C00259C0 (RootHub_UcxEvtSetPortFeature.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     Device_IsRemovable @ 0x1C000272C (Device_IsRemovable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000E974 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 */

void __fastcall Controller_SetControllerGone(_QWORD *a1, char a2)
{
  __int64 v4; // rax
  bool IsRemovable; // al
  bool v6; // di
  int v7; // edx
  int v8; // r8d

  v4 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         *a1,
         off_1C00563D8);
  IsRemovable = Device_IsRemovable(v4);
  v6 = IsRemovable;
  if ( a2 && !*((_BYTE *)a1 + 397) )
  {
    if ( IsRemovable )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(a1[9], 4u, 4u, 0xCBu, (__int64)&Context.Logger + 4);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(a1[9], 2u, 4u, 0xCAu, (__int64)&Context.Logger + 4);
      Controller_HwVerifierBreakIfEnabled(
        a1,
        0LL,
        0LL,
        64LL,
        "A register read returned all FFs. Controller is considered physically removed",
        0LL,
        0LL);
    }
  }
  *((_BYTE *)a1 + 397) = 1;
  if ( a2 )
  {
    v7 = 16;
    v8 = 0;
  }
  else
  {
    v7 = 8;
    v8 = !v6 ? 0x100D : 0;
  }
  Controller_ReportFatalError((__int64)a1, v7, v8, 0LL, 0LL, 0LL);
}
