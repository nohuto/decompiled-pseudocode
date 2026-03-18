/*
 * XREFs of ZwOpenSection @ 0x1401B8850
 * Callers:
 *     NtGetNlsSectionPtr @ 0x1406C4E00 (NtGetNlsSectionPtr.c)
 *     EmpMapPhysicalAddress @ 0x1409BDC18 (EmpMapPhysicalAddress.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1409C1D98 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
