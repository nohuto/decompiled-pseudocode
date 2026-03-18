/*
 * XREFs of RtlRunOnceInitialize @ 0x140719510
 * Callers:
 *     RtlpHpHeapCreate @ 0x140159604 (RtlpHpHeapCreate.c)
 *     RtlHpHeapManagerInitialize @ 0x140179F60 (RtlHpHeapManagerInitialize.c)
 *     DbgkpInitializePhase0 @ 0x140A02230 (DbgkpInitializePhase0.c)
 *     PspInitPhase0 @ 0x140A0457C (PspInitPhase0.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlRunOnceInitialize(PRTL_RUN_ONCE RunOnce)
{
  RunOnce->Value = 0LL;
}
