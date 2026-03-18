/*
 * XREFs of _ACPIInternalError @ 0x1C004F114
 * Callers:
 *     ACPIRootInitialize @ 0x1C0090730 (ACPIRootInitialize.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0097C44 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     AcpiArblibScoreRequirement @ 0x1C00ACEE0 (AcpiArblibScoreRequirement.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn ACPIInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA3u, 1uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
