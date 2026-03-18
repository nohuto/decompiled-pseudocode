/*
 * XREFs of PipFreeBindingId @ 0x140784534
 * Callers:
 *     PipDeleteBindingIds @ 0x1407844F0 (PipDeleteBindingIds.c)
 *     PipDeleteBindingId @ 0x14085E240 (PipDeleteBindingId.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 */

void __fastcall PipFreeBindingId(UNICODE_STRING *P)
{
  RtlFreeAnsiString(P + 1);
  ExFreePoolWithTag(P, 0x53706E50u);
}
