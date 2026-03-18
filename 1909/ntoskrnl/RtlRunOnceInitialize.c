/*
 * XREFs of RtlRunOnceInitialize @ 0x14071B300
 * Callers:
 *     RtlpHpHeapCreate @ 0x140159CA4 (RtlpHpHeapCreate.c)
 *     RtlHpHeapManagerInitialize @ 0x14017A650 (RtlHpHeapManagerInitialize.c)
 *     DbgkpInitializePhase0 @ 0x140A0274C (DbgkpInitializePhase0.c)
 *     PspInitPhase0 @ 0x140A04A98 (PspInitPhase0.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlRunOnceInitialize(PRTL_RUN_ONCE RunOnce)
{
  RunOnce->Value = 0LL;
}
