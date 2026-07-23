/*
 * XREFs of SepRmDestroyCapTable @ 0x1408E370C
 * Callers:
 *     SepBuildCapPolicyTable @ 0x14019AD38 (SepBuildCapPolicyTable.c)
 *     SepRmDereferenceCapTable @ 0x14031CF78 (SepRmDereferenceCapTable.c)
 * Callees:
 *     RtlEnumerateEntryHashTable @ 0x140085D40 (RtlEnumerateEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x140085E50 (RtlRemoveEntryHashTable.c)
 *     RtlInitEnumerationHashTable @ 0x140086080 (RtlInitEnumerationHashTable.c)
 *     RtlEndEnumerationHashTable @ 0x1401322F0 (RtlEndEnumerationHashTable.c)
 *     RtlDeleteHashTable @ 0x1401749B0 (RtlDeleteHashTable.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
