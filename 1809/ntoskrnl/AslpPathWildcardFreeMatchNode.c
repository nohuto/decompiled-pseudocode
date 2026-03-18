/*
 * XREFs of AslpPathWildcardFreeMatchNode @ 0x1408EBB0C
 * Callers:
 *     AslPathWildcardFindFirst @ 0x1408EA508 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1408EAAE4 (AslPathWildcardFindNext.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1408EB810 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeFindContext @ 0x1408EBA2C (AslpPathWildcardFreeFindContext.c)
 * Callees:
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
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
