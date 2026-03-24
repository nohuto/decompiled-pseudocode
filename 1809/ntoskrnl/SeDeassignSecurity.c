/*
 * XREFs of SeDeassignSecurity @ 0x1406ADB90
 * Callers:
 *     SepDeleteAccessState @ 0x14004D950 (SepDeleteAccessState.c)
 *     CmpCreateChild @ 0x1405AB7A4 (CmpCreateChild.c)
 *     ObpAssignSecurity @ 0x1405CAFE8 (ObpAssignSecurity.c)
 *     ObInsertObjectEx @ 0x14062D080 (ObInsertObjectEx.c)
 *     CmpCreateHiveRootCell @ 0x14075BB98 (CmpCreateHiveRootCell.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall SeDeassignSecurity(PSECURITY_DESCRIPTOR *SecurityDescriptor)
{
  PSECURITY_DESCRIPTOR v2; // rcx

  v2 = *SecurityDescriptor;
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  *SecurityDescriptor = 0LL;
  return 0;
}
