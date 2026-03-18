/*
 * XREFs of MiDecrementSubsections @ 0x140071860
 * Callers:
 *     MiDeleteVad @ 0x1400550D0 (MiDeleteVad.c)
 *     MiFlushRelease @ 0x1400717B4 (MiFlushRelease.c)
 *     MiAddViewsForSection @ 0x140071DF0 (MiAddViewsForSection.c)
 *     MmPurgeSection @ 0x1400BCD50 (MmPurgeSection.c)
 *     MiDeletePartialVad @ 0x1400E74B8 (MiDeletePartialVad.c)
 *     MiDecrementSubsection @ 0x14012F3F4 (MiDecrementSubsection.c)
 *     MiReleaseFaultCharges @ 0x140133C7C (MiReleaseFaultCharges.c)
 *     MiUpControlAreaRefs @ 0x1402BA560 (MiUpControlAreaRefs.c)
 *     MiUpdateActiveSubsection @ 0x1402C9B68 (MiUpdateActiveSubsection.c)
 * Callees:
 *     MiInsertUnusedSubsection @ 0x14006FF30 (MiInsertUnusedSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x140071910 (MiDecrementSubsectionViewCount.c)
 */

__int64 __fastcall MiDecrementSubsections(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3)
{
  ULONG_PTR v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rbp
  unsigned int v8; // ecx

  v5 = BugCheckParameter2;
  v6 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)BugCheckParameter2 + 64LL);
  do
  {
    if ( *(_QWORD *)(v5 + 8) )
    {
      v6 += MiDecrementSubsectionViewCount(v5);
      if ( v7 )
      {
        if ( !*(_QWORD *)(v5 + 96) && (*(_BYTE *)(v5 + 34) & 1) == 0 )
          v6 += MiInsertUnusedSubsection(v5);
      }
    }
    if ( v5 == a2 )
      break;
    v5 = *(_QWORD *)(v5 + 16);
    v8 = a3 & 0xFFFFFFF7;
    if ( v7 )
      v8 = a3;
    a3 = v8;
  }
  while ( v5 );
  return v6;
}
