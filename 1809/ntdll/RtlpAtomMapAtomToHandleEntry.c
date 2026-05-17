/*
 * XREFs of RtlpAtomMapAtomToHandleEntry @ 0x180073684
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x180072E60 (RtlDeleteAtomFromAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x180072F60 (RtlQueryAtomInAtomTable.c)
 *     RtlLookupAtomInAtomTable @ 0x1800733B0 (RtlLookupAtomInAtomTable.c)
 *     RtlpHashStringToAtom @ 0x1800734F0 (RtlpHashStringToAtom.c)
 *     RtlPinAtomInAtomTable @ 0x1800EB850 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlIsValidIndexHandle @ 0x1800736C0 (RtlIsValidIndexHandle.c)
 */

__int64 __fastcall RtlpAtomMapAtomToHandleEntry(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned __int8)RtlIsValidIndexHandle(a1 + 16, a2, &v3) )
    return *(_QWORD *)(v3 + 8);
  else
    return 0LL;
}
