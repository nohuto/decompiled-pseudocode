/*
 * XREFs of SeDeassignSecurity @ 0x1406AEE30
 * Callers:
 *     SepDeleteAccessState @ 0x14004D950 (SepDeleteAccessState.c)
 *     CmpCreateChild @ 0x1405AC7A4 (CmpCreateChild.c)
 *     ObpAssignSecurity @ 0x1405CBFE8 (ObpAssignSecurity.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 *     CmpCreateHiveRootCell @ 0x14075CD88 (CmpCreateHiveRootCell.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
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
