/*
 * XREFs of ACPIWakeInitializePmeRouting @ 0x1C002F418
 * Callers:
 *     PcisuppAcquirePciInterfaces @ 0x1C00A25F0 (PcisuppAcquirePciInterfaces.c)
 * Callees:
 *     memset @ 0x1C0031D40 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C0096C64 (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall ACPIWakeInitializePmeRouting(PDEVICE_OBJECT DeviceObject)
{
  PVOID PoolWithTag; // rbx
  int v3; // edi
  KIRQL v4; // si
  _QWORD v6[9]; // [rsp+20h] [rbp-58h] BYREF

  if ( PciPmeInterface )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x41706341u);
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(v6, 0, sizeof(v6));
  v6[4] = 0LL;
  v6[1] = &GUID_PCI_PME_INTERFACE;
  LOWORD(v6[0]) = 2075;
  LODWORD(v6[2]) = 65600;
  v6[3] = PoolWithTag;
  v3 = ACPIInternalSendSynchronousIrp(DeviceObject);
  if ( v3 < 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    if ( PciPmeInterfaceInstantiated )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      PciPmeInterfaceInstantiated = 1;
      PciPmeInterface = PoolWithTag;
    }
    KeReleaseSpinLock(&AcpiPowerLock, v4);
  }
  return (unsigned int)v3;
}
