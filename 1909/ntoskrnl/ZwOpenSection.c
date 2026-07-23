/*
 * XREFs of ZwOpenSection @ 0x1401C1330
 * Callers:
 *     NtGetNlsSectionPtr @ 0x140620430 (NtGetNlsSectionPtr.c)
 *     EmpMapPhysicalAddress @ 0x1409F9864 (EmpMapPhysicalAddress.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A0BE88 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
