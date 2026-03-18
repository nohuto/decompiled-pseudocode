/*
 * XREFs of Controller_WdfEvtDeviceReleaseHardware @ 0x1C005C5B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C00028DC (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Controller_IsSecureDevice @ 0x1C000CF68 (Controller_IsSecureDevice.c)
 *     XilDeviceSlot_ReleaseHardware @ 0x1C0013A1C (XilDeviceSlot_ReleaseHardware.c)
 *     Command_ReleaseHardware @ 0x1C0057584 (Command_ReleaseHardware.c)
 *     Interrupter_ReleaseHardware @ 0x1C005F350 (Interrupter_ReleaseHardware.c)
 *     Register_UnmapSecureMmio @ 0x1C0060650 (Register_UnmapSecureMmio.c)
 *     RootHub_ReleaseHardware @ 0x1C0061228 (RootHub_ReleaseHardware.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceReleaseHardware(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx

  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     a1,
                     off_1C004F3B0)
                 + 8);
  WPP_RECORDER_SF_i(*(_QWORD *)(v2 + 72), 4u, 4u, 0x30u, (__int64)&Context.Logger + 4, a1);
  (*(void (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 3056))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    *(_QWORD *)(v2 + 304));
  (*(void (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 3056))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    *(_QWORD *)(v2 + 752));
  (*(void (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 3056))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    *(_QWORD *)(v2 + 440));
  (*(void (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 3056))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    *(_QWORD *)(v2 + 632));
  RootHub_ReleaseHardware(*(_QWORD *)(v2 + 152));
  Command_ReleaseHardware(*(_QWORD *)(v2 + 144));
  XilDeviceSlot_ReleaseHardware(*(_QWORD *)(v2 + 136));
  Interrupter_ReleaseHardware(*(_QWORD *)(v2 + 128));
  v3 = *(_QWORD *)(v2 + 88);
  if ( *(_QWORD *)(v3 + 24) )
  {
    if ( Controller_IsSecureDevice(*(_QWORD *)(v3 + 8)) )
      Register_UnmapSecureMmio(v3);
    MmUnmapIoSpace(*(PVOID *)(v3 + 24), *(unsigned int *)(v3 + 20));
    *(_QWORD *)(v3 + 24) = 0LL;
    *(_QWORD *)(v3 + 32) = 0LL;
    *(_QWORD *)(v3 + 40) = 0LL;
    *(_QWORD *)(v3 + 48) = 0LL;
    *(_QWORD *)(v3 + 56) = 0LL;
    *(_QWORD *)(v3 + 64) = 0LL;
    *(_QWORD *)(v3 + 72) = 0LL;
    *(_BYTE *)(v3 + 16) = 0;
  }
  if ( !*(_BYTE *)(v2 + 16) )
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 1664))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      *(_QWORD *)(v2 + 8));
  return 0LL;
}
