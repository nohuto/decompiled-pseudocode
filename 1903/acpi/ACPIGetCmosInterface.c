/*
 * XREFs of ACPIGetCmosInterface @ 0x1C0005D68
 * Callers:
 *     OSInitializeCallbacks @ 0x1C00BB424 (OSInitializeCallbacks.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C000CD58 (ACPIInitReferenceDeviceExtension.c)
 *     CmosGetInterface @ 0x1C0090270 (CmosGetInterface.c)
 */

__int64 ACPIGetCmosInterface()
{
  KIRQL v0; // al
  ULONG_PTR v1; // rbx
  __int64 v2; // rdx
  KIRQL v3; // dl
  KIRQL v4; // al

  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v1 = RootDeviceExtension;
  LOBYTE(v2) = v0;
  ACPIInitReferenceDeviceExtension(RootDeviceExtension, v2);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v3);
  LODWORD(v1) = CmosGetInterface(*(PDEVICE_OBJECT *)(v1 + 720));
  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  --*(_DWORD *)(RootDeviceExtension + 684);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
  return (unsigned int)v1;
}
