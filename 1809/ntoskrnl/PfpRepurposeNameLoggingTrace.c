/*
 * XREFs of PfpRepurposeNameLoggingTrace @ 0x140669AF4
 * Callers:
 *     PfTFreeTraceDump @ 0x1400D89C0 (PfTFreeTraceDump.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x1400E2660 (PfFbBufferListInsertInFree.c)
 */

void __fastcall PfpRepurposeNameLoggingTrace(PVOID P)
{
  PfFbBufferListInsertInFree(
    (_SLIST_ENTRY *)&stru_14043BC20,
    (struct _SLIST_ENTRY *)P,
    *((_DWORD *)P + 13),
    *((_DWORD *)P + 14),
    1);
}
