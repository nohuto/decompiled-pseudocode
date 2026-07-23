/*
 * XREFs of RtlRunOnceInitialize @ 0x1406DB410
 * Callers:
 *     RtlpHpHeapCreate @ 0x140140BE0 (RtlpHpHeapCreate.c)
 *     RtlHpHeapManagerInitialize @ 0x1401708D0 (RtlHpHeapManagerInitialize.c)
 *     DbgkpInitializePhase0 @ 0x1409AFA9C (DbgkpInitializePhase0.c)
 *     PspInitPhase0 @ 0x1409B20C8 (PspInitPhase0.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlRunOnceInitialize(PRTL_RUN_ONCE RunOnce)
{
  RunOnce->Value = 0LL;
}
