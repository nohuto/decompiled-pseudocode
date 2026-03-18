/*
 * XREFs of SeReleaseImageValidationContext @ 0x14071EC2C
 * Callers:
 *     MiDeleteControlArea @ 0x1400DF8FC (MiDeleteControlArea.c)
 *     MiValidateSectionCreate @ 0x14065BE44 (MiValidateSectionCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseImageValidationContext(void *a1)
{
  if ( qword_1404364E8 )
    qword_1404364E8();
  else
    ExFreePoolWithTag(a1, 0);
}
