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

__int64 __fastcall sub_18005B814(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned __int8)RtlIsValidIndexHandle(a1 + 16, a2, &v3) )
    return *(_QWORD *)(v3 + 8);
  else
    return 0LL;
}
