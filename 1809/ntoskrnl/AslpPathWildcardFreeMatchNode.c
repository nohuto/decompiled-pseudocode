/*
 * XREFs of AslpPathWildcardFreeMatchNode @ 0x1408EBAEC
 * Callers:
 *     AslPathWildcardFindFirst @ 0x1408EA4E8 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1408EAAC4 (AslPathWildcardFindNext.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1408EB7F0 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeFindContext @ 0x1408EBA0C (AslpPathWildcardFreeFindContext.c)
 * Callees:
 *     ZwClose @ 0x1401B8370 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall AslpPathWildcardFreeMatchNode(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( a1 )
  {
    v2 = (void *)a1[3];
    if ( v2 )
    {
      ZwClose(v2);
      a1[3] = 0LL;
    }
    v3 = (void *)a1[1];
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0x74705041u);
      a1[1] = 0LL;
    }
    a1[2] = 0LL;
  }
}
