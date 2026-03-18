/*
 * XREFs of MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0092BD4
 * Callers:
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0011710 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C00154B4 (-ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C0092BF8 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredArgsKM(
        const char *BucketArg1,
        unsigned int BucketArg2,
        const char *OriginatingBinary)
{
  const char *v3; // [rsp+28h] [rbp-10h]
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  MicrosoftTelemetryAssertTriggeredWorker(
    retaddr,
    BucketArg2,
    OriginatingBinary,
    BucketArg2,
    (unsigned int)OriginatingBinary,
    v3);
}
