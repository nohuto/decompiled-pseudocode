/*
 * XREFs of SeReleaseImageValidationContext @ 0x14071EA80
 * Callers:
 *     MiDeleteControlArea @ 0x140094D1C (MiDeleteControlArea.c)
 *     MiValidateSectionCreate @ 0x140652E10 (MiValidateSectionCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseImageValidationContext(void *a1)
{
  if ( qword_14040DDC8 )
    qword_14040DDC8();
  else
    ExFreePoolWithTag(a1, 0);
}
