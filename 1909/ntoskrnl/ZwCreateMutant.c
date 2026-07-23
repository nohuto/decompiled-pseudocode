/*
 * XREFs of ZwCreateMutant @ 0x1401C2230
 * Callers:
 *     BcdInitializeBcdSyncMutant @ 0x140A22664 (BcdInitializeBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateMutant(
        PHANDLE MutantHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN InitialOwner)
{
  _disable();
  __readeflags();
  return KiServiceInternal(MutantHandle);
}
