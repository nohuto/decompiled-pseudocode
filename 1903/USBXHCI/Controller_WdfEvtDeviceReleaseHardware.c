/*
 * XREFs of Controller_WdfEvtDeviceReleaseHardware @ 0x1C0063E20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C0002D84 (WPP_RECORDER_SF_i.c)
 *     Etw_ReportControllerHealthWithPortError @ 0x1C0006820 (Etw_ReportControllerHealthWithPortError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Controller_IsSecureDevice @ 0x1C000F418 (Controller_IsSecureDevice.c)
 *     XilDeviceSlot_ReleaseHardware @ 0x1C0016574 (XilDeviceSlot_ReleaseHardware.c)
 *     Command_ReleaseHardware @ 0x1C005E5E0 (Command_ReleaseHardware.c)
 *     Interrupter_ReleaseHardware @ 0x1C00670B4 (Interrupter_ReleaseHardware.c)
 *     Register_UnmapSecureMmio @ 0x1C006861C (Register_UnmapSecureMmio.c)
 *     RootHub_ReleaseHardware @ 0x1C00692DC (RootHub_ReleaseHardware.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceReleaseHardware(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rbx
  void *v5; // r8

  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     a1,
                     off_1C00563D8)
                 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_i(*(_QWORD *)(v2 + 72), 4u, 4u, 0x32u, (__int64)&Context.Logger + 4, a1);
  (*(void (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 3056))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    *(_QWORD *)(v2 + 368));
  (*(void (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 3056))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    *(_QWORD *)(v2 + 816));
  (*(void (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 3056))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    *(_QWORD *)(v2 + 504));
  (*(void (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 3056))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    *(_QWORD *)(v2 + 696));
  v3 = *(_QWORD *)(v2 + 832);
  if ( v3 )
  {
    SleepstudyHelper_UnregisterComponent();
    *(_QWORD *)(v2 + 832) = 0LL;
  }
  if ( *(_BYTE *)(v2 + 472) )
  {
    Etw_ReportControllerHealthWithPortError(v3, v2, 0, 0LL);
    *(_BYTE *)(v2 + 472) = 0;
  }
  RootHub_ReleaseHardware(*(_QWORD *)(v2 + 152));
  Command_ReleaseHardware(*(_QWORD *)(v2 + 144));
  XilDeviceSlot_ReleaseHardware(*(_QWORD *)(v2 + 136));
  Interrupter_ReleaseHardware(*(_QWORD *)(v2 + 128));
  v4 = *(_QWORD *)(v2 + 88);
  if ( *(_QWORD *)(v4 + 24) )
  {
    if ( Controller_IsSecureDevice(*(_QWORD *)(v4 + 8)) )
    {
      Register_UnmapSecureMmio(v4);
      v5 = *(void **)(v4 + 24);
    }
    MmUnmapIoSpace(v5, *(unsigned int *)(v4 + 20));
    *(_BYTE *)(v4 + 16) = 0;
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_QWORD *)(v4 + 32) = 0LL;
    *(_QWORD *)(v4 + 40) = 0LL;
    *(_QWORD *)(v4 + 48) = 0LL;
    *(_QWORD *)(v4 + 56) = 0LL;
    *(_QWORD *)(v4 + 64) = 0LL;
    *(_QWORD *)(v4 + 72) = 0LL;
  }
  if ( !*(_BYTE *)(v2 + 16) )
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 1664))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      *(_QWORD *)(v2 + 8));
  return 0LL;
}
