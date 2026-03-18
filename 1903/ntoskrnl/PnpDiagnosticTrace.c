/*
 * XREFs of PnpDiagnosticTrace @ 0x140153D94
 * Callers:
 *     PnpDiagnosticTraceDriverFullInfo @ 0x140153B74 (PnpDiagnosticTraceDriverFullInfo.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x140153CB0 (PnpDiagnosticTraceDeviceOperation.c)
 *     PnpCompleteSystemStartProcess @ 0x1401947F4 (PnpCompleteSystemStartProcess.c)
 *     PnpDiagnosticTraceAppVeto @ 0x1402A0210 (PnpDiagnosticTraceAppVeto.c)
 *     PiProcessStartSystemDevices @ 0x140789BA8 (PiProcessStartSystemDevices.c)
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x140A0F640 (IopCallBootDriverReinitializationRoutines.c)
 *     IopInitializeSystemDrivers @ 0x140A10210 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x140A10470 (IopInitializeBootDrivers.c)
 * Callees:
 *     EtwWriteEx @ 0x140036300 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 */

NTSTATUS __fastcall PnpDiagnosticTrace(
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  REGHANDLE v3; // rbx

  v3 = PnpEtwHandle;
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, EventDescriptor) )
    return EtwWriteEx(v3, EventDescriptor, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
  else
    return 0;
}
