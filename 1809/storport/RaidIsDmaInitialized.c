/*
 * XREFs of RaidIsDmaInitialized @ 0x1C006E904
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C001E9EC (RaidAdapterCompleteInitialization.c)
 *     StorPortGetUncachedExtension @ 0x1C001FF10 (StorPortGetUncachedExtension.c)
 *     RaidInitializePerfOpts @ 0x1C0024F68 (RaidInitializePerfOpts.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidIsDmaInitialized(_QWORD *a1)
{
  return a1 && *a1 != 0LL;
}
