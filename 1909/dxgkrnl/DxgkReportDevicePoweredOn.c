/*
 * XREFs of DxgkReportDevicePoweredOn @ 0x1C003752C
 * Callers:
 *     DpiRequestDevicePowerState @ 0x1C004AAD8 (DpiRequestDevicePowerState.c)
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C004AFD4 (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkReportDevicePoweredOn(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 2600);
    if ( v1 )
      return PoFxReportDevicePoweredOn(v1);
  }
  return result;
}
