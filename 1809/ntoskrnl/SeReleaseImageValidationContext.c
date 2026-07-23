/*
 * XREFs of SeReleaseImageValidationContext @ 0x14071FD20
 * Callers:
 *     MiDeleteControlArea @ 0x140094C5C (MiDeleteControlArea.c)
 *     MiValidateSectionCreate @ 0x140653FD0 (MiValidateSectionCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseImageValidationContext(void *a1)
{
  if ( qword_14040EE28 )
    qword_14040EE28();
  else
    ExFreePoolWithTag(a1, 0);
}
