/*
 * XREFs of ExCleanupSessionHeapManager @ 0x140154554
 * Callers:
 *     ExInitializeSessionHeapManager @ 0x1401701B8 (ExInitializeSessionHeapManager.c)
 *     MiDereferenceSessionFinal @ 0x1406E1858 (MiDereferenceSessionFinal.c)
 * Callees:
 *     RtlpHpHeapDestroy @ 0x1401545C4 (RtlpHpHeapDestroy.c)
 *     RtlHpHeapManagerCleanup @ 0x140154AF4 (RtlHpHeapManagerCleanup.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void ExCleanupSessionHeapManager()
{
  _QWORD *v0; // rbx
  __int64 v1; // rcx
  __int64 v2; // rcx

  if ( (unsigned int)ExpHeapBackedPoolEnabledState >= 2 )
  {
    v0 = *(_QWORD **)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3424);
    v1 = v0[1563];
    if ( v1 )
      RtlpHpHeapDestroy(v1);
    v2 = v0[1564];
    if ( v2 )
      RtlpHpHeapDestroy(v2);
    RtlHpHeapManagerCleanup(v0);
    ExFreePoolWithTag(v0, 0x65537048u);
  }
}
