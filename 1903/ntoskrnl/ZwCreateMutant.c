/*
 * XREFs of ZwCreateMutant @ 0x1401C16B0
 * Callers:
 *     BcdInitializeBcdSyncMutant @ 0x140A22584 (BcdInitializeBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateMutant(
        PHANDLE MutantHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN InitialOwner)
{
  _disable();
  __readeflags();
  return KiServiceInternal(MutantHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
