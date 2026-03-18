/*
 * XREFs of DxgkReportDeviceDirectedPowerDown @ 0x1C0037500
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C01586C0 (DpiFdoHandleDevicePower.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkReportDeviceDirectedPowerDown(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( *(_QWORD *)(a1 + 2600) )
      return PoFxCompleteDirectedPowerDown();
  }
  return result;
}
