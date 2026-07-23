/*
 * XREFs of PnpDiagnosticTrace @ 0x1401372E4
 * Callers:
 *     PnpDiagnosticTraceDriverFullInfo @ 0x1401371FC (PnpDiagnosticTraceDriverFullInfo.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x1401601DC (PnpDiagnosticTraceDeviceOperation.c)
 *     PnpCompleteSystemStartProcess @ 0x14018B314 (PnpCompleteSystemStartProcess.c)
 *     PnpDiagnosticTraceAppVeto @ 0x14028A08C (PnpDiagnosticTraceAppVeto.c)
 *     PiProcessStartSystemDevices @ 0x1407641F8 (PiProcessStartSystemDevices.c)
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 *     IopInitializeSystemDrivers @ 0x1409CBCC4 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x1409CC0BC (IopInitializeBootDrivers.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x1409DB5EC (IopCallBootDriverReinitializationRoutines.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
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
