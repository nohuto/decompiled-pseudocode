/*
 * XREFs of PnpTraceStartDevice @ 0x1401542FC
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x140145B60 (PnpDeviceCompletionRoutine.c)
 *     PnpStartDeviceNode @ 0x140719E1C (PnpStartDeviceNode.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14005EE50 (RtlImageNtHeader.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x140154350 (PnpDiagnosticTraceDeviceOperation.c)
 */

__int64 __fastcall PnpTraceStartDevice(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 MinorImageVersion; // ax

  LOBYTE(MinorImageVersion) = 0;
  if ( a3 )
    MinorImageVersion = RtlImageNtHeader(*(PVOID *)(a3 + 24))->OptionalHeader.MinorImageVersion;
  PnpDiagnosticTraceDeviceOperation(&KMPnPEvt_DeviceStart_Stop, MinorImageVersion);
  return 0LL;
}
