/*
 * XREFs of ObOpenObjectByPointerWithTag @ 0x14089DDF0
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x140281A68 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ObOpenObjectByPointer @ 0x1405D0390 (ObOpenObjectByPointer.c)
 */

NTSTATUS __stdcall ObOpenObjectByPointerWithTag(
        PVOID Object,
        ULONG HandleAttributes,
        PACCESS_STATE PassedAccessState,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        ULONG Tag,
        PHANDLE Handle)
{
  return ObOpenObjectByPointer(
           Object,
           HandleAttributes,
           PassedAccessState,
           DesiredAccess,
           ObjectType,
           AccessMode,
           Handle);
}
