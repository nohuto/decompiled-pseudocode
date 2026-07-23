/*
 * XREFs of RtlpHpMetadataHeapStart @ 0x140110158
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x140110058 (RtlpHpMetadataAlloc.c)
 *     RtlHpHeapManagerStart @ 0x14017A0DC (RtlHpHeapManagerStart.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x14061A280 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS __fastcall RtlpHpMetadataHeapStart(_RTL_RUN_ONCE *a1, void *a2)
{
  if ( a1->Value )
    return 0;
  else
    return RtlRunOnceExecuteOnce(a1 + 1, RtlpHpMetadataHeapCreate, a2, 0LL);
}
