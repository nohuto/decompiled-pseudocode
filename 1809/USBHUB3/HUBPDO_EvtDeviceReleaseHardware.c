/*
 * XREFs of HUBPDO_EvtDeviceReleaseHardware @ 0x1C006EE00
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq @ 0x1C000175C (McTemplateK0pq.c)
 *     McTemplateK0p @ 0x1C0006450 (McTemplateK0p.c)
 *     DereferenceDeviceResetInterface @ 0x1C003B3A0 (DereferenceDeviceResetInterface.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     HUBREG_DeleteUxdSettings @ 0x1C00766AC (HUBREG_DeleteUxdSettings.c)
 *     HUBWNF_PublishUsbPartnerDualRoleFeatures @ 0x1C007A1C4 (HUBWNF_PublishUsbPartnerDualRoleFeatures.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceReleaseHardware(__int64 a1)
{
  struct _MCGEN_TRACE_CONTEXT *v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rbx
  struct _MCGEN_TRACE_CONTEXT *v5; // rcx
  __int64 v6; // rdi
  int v7; // eax

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005F040);
  v4 = *(_QWORD *)(v3 + 24);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p(v2, &USBHUB3_ETW_EVENT_DEVICE_RELEASE_HARDWARE_START, 0LL, *(_QWORD *)(v4 + 24));
  if ( *(_QWORD *)(v3 + 392) )
  {
    SleepstudyHelper_UnregisterComponent();
    *(_QWORD *)(v3 + 392) = 0LL;
  }
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005F040);
  *(_BYTE *)v6 = 1;
  _InterlockedAnd((volatile signed __int32 *)(v4 + 1636), 0xFFFFBFFF);
  v7 = *(_DWORD *)(v6 + 32);
  if ( (v7 & 0x400) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v6 + 32), 0xFFFFFBFF);
  }
  else
  {
    if ( (v7 & 0x800) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v6 + 32), 0xFFFFF7FF);
      HUBREG_DeleteUxdSettings(*(_QWORD *)(v6 + 24), 1LL);
    }
    if ( (*(_DWORD *)(v4 + 1632) & 0x40000) != 0 )
    {
      HUBWNF_PublishUsbPartnerDualRoleFeatures(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 1416LL), 0LL, 0LL);
      _InterlockedAnd((volatile signed __int32 *)(v4 + 1632), 0xFFFBFFFF);
    }
    if ( (*(_DWORD *)(v4 + 1644) & 0x4000000) != 0 )
      DereferenceDeviceResetInterface((_QWORD *)(v6 + 456));
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0pq(v5, &USBHUB3_ETW_EVENT_DEVICE_RELEASE_HARDWARE_COMPLETE, 0LL, *(_QWORD *)(v4 + 24), 0);
  return 0LL;
}
