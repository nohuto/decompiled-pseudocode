/*
 * XREFs of RtlpAtomMapAtomToHandleEntry @ 0x180073694
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x180072E60 (RtlDeleteAtomFromAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x180072F60 (RtlQueryAtomInAtomTable.c)
 *     RtlLookupAtomInAtomTable @ 0x1800733C0 (RtlLookupAtomInAtomTable.c)
 *     RtlpHashStringToAtom @ 0x180073500 (RtlpHashStringToAtom.c)
 *     RtlPinAtomInAtomTable @ 0x1800EB850 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlIsValidIndexHandle @ 0x1800736D0 (RtlIsValidIndexHandle.c)
 */

_RTL_HANDLE_TABLE_ENTRY *__fastcall RtlpAtomMapAtomToHandleEntry(__int64 a1, ULONG a2)
{
  PRTL_HANDLE_TABLE_ENTRY Handle; // [rsp+30h] [rbp+8h] BYREF

  if ( RtlIsValidIndexHandle((PRTL_HANDLE_TABLE)(a1 + 16), a2, &Handle) )
    return Handle[1].NextFree;
  else
    return 0LL;
}
