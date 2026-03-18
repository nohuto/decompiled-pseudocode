/*
 * XREFs of Controller_QueryControllerCapabilitiesFromACPI @ 0x1C000FC60
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0063470 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     Controller_ExecuteDSM @ 0x1C00603A8 (Controller_ExecuteDSM.c)
 */

void __fastcall Controller_QueryControllerCapabilitiesFromACPI(__int64 a1)
{
  int v2; // eax

  if ( !*(_DWORD *)(a1 + 628) && (Controller_ExecuteDSM(a1, &GUID_USB_ACPI_DSM, 0LL) & 1) != 0 )
  {
    v2 = Controller_ExecuteDSM(a1, &GUID_USB_ACPI_DSM, 0LL);
    if ( v2 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 128) + 64LL) = v2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4u, 4u, 0xF4u, (__int64)&Context.Logger + 4);
      *(_DWORD *)(a1 + 628) = 1;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2u, 4u, 0xF3u, (__int64)&Context.Logger + 4);
    }
  }
}
