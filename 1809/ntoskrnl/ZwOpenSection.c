/*
 * XREFs of ZwOpenSection @ 0x1401B89D0
 * Callers:
 *     NtGetNlsSectionPtr @ 0x1406C6080 (NtGetNlsSectionPtr.c)
 *     EmpMapPhysicalAddress @ 0x1409BEC18 (EmpMapPhysicalAddress.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1409C2D98 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
