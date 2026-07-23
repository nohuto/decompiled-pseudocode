/*
 * XREFs of sub_18005B814 @ 0x18005B814
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x18005B020 (RtlDeleteAtomFromAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x18005B120 (RtlQueryAtomInAtomTable.c)
 *     RtlLookupAtomInAtomTable @ 0x18005B540 (RtlLookupAtomInAtomTable.c)
 *     sub_18005B680 @ 0x18005B680 (sub_18005B680.c)
 *     RtlPinAtomInAtomTable @ 0x1800E8860 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlIsValidIndexHandle @ 0x18005B850 (RtlIsValidIndexHandle.c)
 */

_RTL_HANDLE_TABLE_ENTRY *__fastcall sub_18005B814(__int64 a1, ULONG a2)
{
  PRTL_HANDLE_TABLE_ENTRY Handle; // [rsp+30h] [rbp+8h] BYREF

  if ( RtlIsValidIndexHandle((PRTL_HANDLE_TABLE)(a1 + 16), a2, &Handle) )
    return Handle[1].NextFree;
  else
    return 0LL;
}
