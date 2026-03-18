/*
 * XREFs of UsbhUnregisterPowerCallback @ 0x1C005DC28
 * Callers:
 *     UsbhUninitialize @ 0x1C00413F0 (UsbhUninitialize.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 */

int __fastcall UsbhUnregisterPowerCallback(__int64 a1)
{
  PVOID *v2; // rax
  PVOID *v3; // rbx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x16u,
      (__int64)&WPP_6537bd90cc633d3fee9c1c75382d5cc0_Traceguids);
  v2 = (PVOID *)FdoExt(a1);
  v3 = v2;
  if ( *((_DWORD *)v2 + 1310) )
  {
    LODWORD(v2) = PoUnregisterPowerSettingCallback(v2[656]);
    if ( (int)v2 >= 0 )
      *((_DWORD *)v3 + 1310) = 0;
  }
  return (int)v2;
}
