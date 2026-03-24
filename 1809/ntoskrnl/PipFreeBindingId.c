/*
 * XREFs of PipFreeBindingId @ 0x14075D9B4
 * Callers:
 *     PipDeleteBindingIds @ 0x14075D970 (PipDeleteBindingIds.c)
 *     PipDeleteBindingId @ 0x140823DF0 (PipDeleteBindingId.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140623790 (RtlFreeAnsiString.c)
 */

void __fastcall PipFreeBindingId(UNICODE_STRING *P)
{
  RtlFreeAnsiString(P + 1);
  ExFreePoolWithTag(P, 0x53706E50u);
}
