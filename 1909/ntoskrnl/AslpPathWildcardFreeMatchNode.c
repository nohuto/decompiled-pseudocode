/*
 * XREFs of AslpPathWildcardFreeMatchNode @ 0x1409282A4
 * Callers:
 *     AslPathWildcardFindFirst @ 0x140926D3C (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x140927324 (AslPathWildcardFindNext.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140927F98 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeFindContext @ 0x1409281CC (AslpPathWildcardFreeFindContext.c)
 * Callees:
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
