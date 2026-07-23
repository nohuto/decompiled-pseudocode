/*
 * XREFs of PfpRepurposeNameLoggingTrace @ 0x14066E7A4
 * Callers:
 *     PfTFreeTraceDump @ 0x1400D45F4 (PfTFreeTraceDump.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x1400D48F4 (PfFbBufferListInsertInFree.c)
 */

void __fastcall PfpRepurposeNameLoggingTrace(PVOID P)
{
  PfFbBufferListInsertInFree(
    (_SLIST_ENTRY *)&stru_1404673E0,
    (_SLIST_ENTRY *)P,
    *((_DWORD *)P + 13),
    *((_DWORD *)P + 14),
    1);
}
