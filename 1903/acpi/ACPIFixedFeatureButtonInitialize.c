/*
 * XREFs of ACPIFixedFeatureButtonInitialize @ 0x1C00062B4
 * Callers:
 *     ACPIRootInitialize @ 0x1C0090730 (ACPIRootInitialize.c)
 * Callees:
 *     ACPIBuildFixedButtonExtension @ 0x1C0006314 (ACPIBuildFixedButtonExtension.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C000CD58 (ACPIInitReferenceDeviceExtension.c)
 */

void ACPIFixedFeatureButtonInitialize()
{
  KIRQL v0; // al
  KIRQL v1; // bl
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v4 = 0LL;
  v1 = v0;
  if ( (int)ACPIBuildFixedButtonExtension(v2, &v4) >= 0 && v4 )
    ACPIInitReferenceDeviceExtension(v4, v3);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v1);
}
