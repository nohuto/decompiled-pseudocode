/*
 * XREFs of RtlpHpMetadataHeapStart @ 0x18004D09C
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x18004CFA0 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RtlpHpMetadataHeapStart(_RTL_RUN_ONCE *a1, void *a2)
{
  if ( a1->Value )
    return 0;
  else
    return RtlRunOnceExecuteOnce(a1 + 1, (PRTL_RUN_ONCE_INIT_FN)RtlpHpMetadataHeapCreate, a2, 0LL);
}
