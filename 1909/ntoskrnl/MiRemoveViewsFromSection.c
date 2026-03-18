/*
 * XREFs of MiRemoveViewsFromSection @ 0x140071720
 * Callers:
 *     MiRemoveMappedPtes @ 0x14005E8F0 (MiRemoveMappedPtes.c)
 *     MmUnmapViewInSystemCache @ 0x140070570 (MmUnmapViewInSystemCache.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140094B04 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiConvertStaticSubsections @ 0x1401254E0 (MiConvertStaticSubsections.c)
 *     MiRemoveSystemCacheReferences @ 0x1402C507C (MiRemoveSystemCacheReferences.c)
 * Callees:
 *     MiInsertUnusedSubsection @ 0x14006FF30 (MiInsertUnusedSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x140071910 (MiDecrementSubsectionViewCount.c)
 */

__int64 __fastcall MiRemoveViewsFromSection(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, unsigned int a3)
{
  ULONG_PTR v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r14
  unsigned __int64 v8; // rax
  unsigned int v10; // ecx

  v5 = BugCheckParameter2;
  v6 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)BugCheckParameter2 + 64LL);
  do
  {
    v6 += MiDecrementSubsectionViewCount(v5);
    if ( v7 && !*(_QWORD *)(v5 + 96) && (*(_BYTE *)(v5 + 34) & 1) == 0 )
      v6 += MiInsertUnusedSubsection(v5);
    if ( a2 )
    {
      v8 = *(unsigned int *)(v5 + 44);
      if ( a2 <= v8 )
        return v6;
      a2 -= v8;
    }
    v5 = *(_QWORD *)(v5 + 16);
    v10 = a3 & 0xFFFFFFF7;
    if ( v7 )
      v10 = a3;
    a3 = v10;
  }
  while ( v5 );
  return v6;
}
