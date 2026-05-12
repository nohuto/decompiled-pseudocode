/*
 * XREFs of RaidAdapterDisableRpmbInterface @ 0x1C0037C0C
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C0073F5C (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0074244 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RaidAdapterDisableRpmbInterface(struct _UNICODE_STRING *a1)
{
  NTSTATUS result; // eax

  if ( a1[356].Buffer )
    return IoSetDeviceInterfaceState(a1 + 356, 0);
  return result;
}
