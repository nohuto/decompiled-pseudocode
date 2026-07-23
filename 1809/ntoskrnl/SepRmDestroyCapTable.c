/*
 * XREFs of SepRmDestroyCapTable @ 0x1408A610C
 * Callers:
 *     SepBuildCapPolicyTable @ 0x140181A18 (SepBuildCapPolicyTable.c)
 *     SepRmDereferenceCapTable @ 0x1402FEF34 (SepRmDereferenceCapTable.c)
 * Callees:
 *     RtlEnumerateEntryHashTable @ 0x1400D9B40 (RtlEnumerateEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x1400D9CE0 (RtlRemoveEntryHashTable.c)
 *     RtlInitEnumerationHashTable @ 0x1400DA300 (RtlInitEnumerationHashTable.c)
 *     RtlDeleteHashTable @ 0x14012ADC0 (RtlDeleteHashTable.c)
 *     RtlEndEnumerationHashTable @ 0x14012F830 (RtlEndEnumerationHashTable.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall SepRmDestroyCapTable(_RTL_DYNAMIC_HASH_TABLE *P)
{
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v2; // rax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v3; // rdi
  void *v4; // rcx
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-38h] BYREF

  memset(&Enumerator, 0, sizeof(Enumerator));
  RtlInitEnumerationHashTable(P, &Enumerator);
  while ( 1 )
  {
    v2 = RtlEnumerateEntryHashTable(P, &Enumerator);
    v3 = v2;
    if ( !v2 )
      break;
    RtlRemoveEntryHashTable(P, v2, 0LL);
    v3[1].Linkage.Blink = 0LL;
    ExFreePoolWithTag(v3, 0x70536553u);
  }
  RtlEndEnumerationHashTable(P, &Enumerator);
  RtlDeleteHashTable(P);
  v4 = *(void **)&P[1].DivisorMask;
  if ( v4 )
    ExFreePoolWithTag(v4, 0x70536553u);
  ExFreePoolWithTag(P, 0x70536553u);
}
