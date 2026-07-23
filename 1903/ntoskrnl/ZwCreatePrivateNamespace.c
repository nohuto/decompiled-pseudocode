/*
 * XREFs of ZwCreatePrivateNamespace @ 0x1401C1750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreatePrivateNamespace(
        PHANDLE NamespaceHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor)
{
  _disable();
  __readeflags();
  return KiServiceInternal(NamespaceHandle);
}
