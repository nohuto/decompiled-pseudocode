/*
 * XREFs of RtlRunOnceInitialize @ 0x1406DA190
 * Callers:
 *     RtlpHpHeapCreate @ 0x140140AC0 (RtlpHpHeapCreate.c)
 *     RtlHpHeapManagerInitialize @ 0x1401707B0 (RtlHpHeapManagerInitialize.c)
 *     DbgkpInitializePhase0 @ 0x1409AEA9C (DbgkpInitializePhase0.c)
 *     PspInitPhase0 @ 0x1409B10C8 (PspInitPhase0.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlRunOnceInitialize(PRTL_RUN_ONCE RunOnce)
{
  RunOnce->Value = 0LL;
}
