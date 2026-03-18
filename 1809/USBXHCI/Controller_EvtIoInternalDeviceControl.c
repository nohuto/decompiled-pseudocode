/*
 * XREFs of Controller_EvtIoInternalDeviceControl @ 0x1C000C070
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Controller_ReportFatalError @ 0x1C000DAAC (Controller_ReportFatalError.c)
 */

__int64 __fastcall Controller_EvtIoInternalDeviceControl(__int64 a1, IRP *a2)
{
  unsigned int LowPart; // ebx
  __int64 v5; // rbp
  unsigned int v6; // ebx

  LowPart = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v5 = *(_QWORD *)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     a1,
                     off_1C004F3B0)
                 + 8);
  if ( LowPart == 2232247 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v5 + 72), 4u, 4u, 0xC9u, (__int64)&Context.Logger + 4);
    v6 = 0;
    Controller_ReportFatalError(v5, 2, 4159, 0, 0LL, 0LL);
    a2->IoStatus.Status = 0;
    IofCompleteRequest(a2, 0);
  }
  else
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return (*(unsigned int (__fastcall **)(unsigned __int64, __int64, IRP *))(WdfFunctions_01023 + 272))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a1,
             a2);
  }
  return v6;
}
