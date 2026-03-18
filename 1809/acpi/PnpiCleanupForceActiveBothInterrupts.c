/*
 * XREFs of PnpiCleanupForceActiveBothInterrupts @ 0x1C002DFBC
 * Callers:
 *     ACPIInitResetDeviceExtension @ 0x1C002DD7C (ACPIInitResetDeviceExtension.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C00545E8 (ACPIInitDeleteDeviceExtension.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C00B00EC (PnpiUpdateForceActiveBothInterrupts.c)
 * Callees:
 *     <none>
 */

void __fastcall PnpiCleanupForceActiveBothInterrupts(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 648);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x44706341u);
    *(_QWORD *)(a1 + 648) = 0LL;
  }
  *(_DWORD *)(a1 + 656) = -1;
}
