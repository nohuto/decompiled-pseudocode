/*
 * XREFs of PipFreeBindingId @ 0x14075EBA4
 * Callers:
 *     PipDeleteBindingIds @ 0x14075EB60 (PipDeleteBindingIds.c)
 *     PipDeleteBindingId @ 0x140824FF0 (PipDeleteBindingId.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 */

void __fastcall PipFreeBindingId(UNICODE_STRING *P)
{
  RtlFreeAnsiString(P + 1);
  ExFreePoolWithTag(P, 0x53706E50u);
}
