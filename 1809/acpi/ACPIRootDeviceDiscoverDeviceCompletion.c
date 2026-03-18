/*
 * XREFs of ACPIRootDeviceDiscoverDeviceCompletion @ 0x1C005C920
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C00195FC (WPP_RECORDER_SF_qD.c)
 */

LONG __fastcall ACPIRootDeviceDiscoverDeviceCompletion(__int64 a1, int a2, __int64 a3)
{
  if ( a2 >= 0 && a3 )
  {
    *(_QWORD *)a1 = a3;
    *(_DWORD *)(a1 + 16) = a2;
    WPP_RECORDER_SF_qD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x1Fu,
      (__int64)&WPP_07ea04bf8856319f8bf6d44d5c5f0bbf_Traceguids,
      a3,
      a2);
  }
  return KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
}
