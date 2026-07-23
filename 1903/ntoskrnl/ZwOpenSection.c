/*
 * XREFs of ZwOpenSection @ 0x1401C07B0
 * Callers:
 *     NtGetNlsSectionPtr @ 0x14061E910 (NtGetNlsSectionPtr.c)
 *     EmpMapPhysicalAddress @ 0x1409F9954 (EmpMapPhysicalAddress.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A0B95C (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
