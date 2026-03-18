/*
 * XREFs of SepRmDestroyCapTable @ 0x1408A4ECC
 * Callers:
 *     SepBuildCapPolicyTable @ 0x1401818B8 (SepBuildCapPolicyTable.c)
 *     SepRmDereferenceCapTable @ 0x1402FEC44 (SepRmDereferenceCapTable.c)
 * Callees:
 *     RtlEnumerateEntryHashTable @ 0x1400D9AA0 (RtlEnumerateEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x1400D9C40 (RtlRemoveEntryHashTable.c)
 *     RtlInitEnumerationHashTable @ 0x1400DA260 (RtlInitEnumerationHashTable.c)
 *     RtlDeleteHashTable @ 0x14012ACD0 (RtlDeleteHashTable.c)
 *     RtlEndEnumerationHashTable @ 0x14012F740 (RtlEndEnumerationHashTable.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall SepRmDestroyCapTable(struct _RTL_DYNAMIC_HASH_TABLE *P)
{
  struct _RTL_DYNAMIC_HASH_TABLE_ENTRY *v2; // rax
  struct _RTL_DYNAMIC_HASH_TABLE_ENTRY *v3; // rdi
  void *v4; // rcx
  struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-38h] BYREF

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
