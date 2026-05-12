/*
 * XREFs of RaDriverUnload @ 0x1C00381B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037958 (WPP_SF_q.c)
 *     RaDeleteDriver @ 0x1C0073958 (RaDeleteDriver.c)
 *     WppCleanupKm @ 0x1C0073A4C (WppCleanupKm.c)
 */

__int64 __fastcall RaDriverUnload(PDRIVER_OBJECT DriverObject)
{
  PVOID DriverObjectExtension; // rax

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xAu,
      (__int64)&WPP_0ece2f36f1a933110a118c5b83c83ab6_Traceguids,
      DriverObject);
  }
  WppCleanupKm();
  DriverObjectExtension = IoGetDriverObjectExtension(DriverObject, DriverEntry);
  RaDeleteDriver(DriverObjectExtension);
  return 0LL;
}
