/*
 * XREFs of RtlpHpMetadataHeapStart @ 0x180064718
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x18006461C (RtlpHpMetadataAlloc.c)
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
