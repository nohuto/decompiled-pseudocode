/*
 * XREFs of PipFreeBindingId @ 0x140786894
 * Callers:
 *     PipDeleteBindingIds @ 0x140786850 (PipDeleteBindingIds.c)
 *     PipDeleteBindingId @ 0x14085D940 (PipDeleteBindingId.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 */

void __fastcall PipFreeBindingId(UNICODE_STRING *P)
{
  RtlFreeAnsiString(P + 1);
  ExFreePoolWithTag(P, 0x53706E50u);
}
