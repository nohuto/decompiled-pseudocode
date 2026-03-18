/*
 * XREFs of SeDeassignSecurity @ 0x1406D1200
 * Callers:
 *     SepDeleteAccessState @ 0x14003ADF0 (SepDeleteAccessState.c)
 *     ObpAssignSecurity @ 0x1405C8F20 (ObpAssignSecurity.c)
 *     ObInsertObjectEx @ 0x1405D9D60 (ObInsertObjectEx.c)
 *     CmpCreateChild @ 0x140634398 (CmpCreateChild.c)
 *     CmpCreateHiveRootCell @ 0x1407882E0 (CmpCreateHiveRootCell.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
