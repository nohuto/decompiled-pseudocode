/*
 * XREFs of RtlpHpMetadataHeapStart @ 0x140009ACC
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x1400099CC (RtlpHpMetadataAlloc.c)
 *     RtlHpHeapManagerStart @ 0x140170368 (RtlHpHeapManagerStart.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x14060E910 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS __fastcall RtlpHpMetadataHeapStart(_RTL_RUN_ONCE *a1, void *a2)
{
  if ( a1->Value )
    return 0;
  else
    return RtlRunOnceExecuteOnce(a1 + 1, RtlpHpMetadataHeapCreate, a2, 0LL);
}
