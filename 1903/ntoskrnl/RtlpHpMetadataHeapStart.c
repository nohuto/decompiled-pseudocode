/*
 * XREFs of RtlpHpMetadataHeapStart @ 0x140110A68
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x140110968 (RtlpHpMetadataAlloc.c)
 *     RtlHpHeapManagerStart @ 0x1401799EC (RtlHpHeapManagerStart.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x140618770 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS __fastcall RtlpHpMetadataHeapStart(_RTL_RUN_ONCE *a1, void *a2)
{
  if ( a1->Value )
    return 0;
  else
    return RtlRunOnceExecuteOnce(a1 + 1, RtlpHpMetadataHeapCreate, a2, 0LL);
}
