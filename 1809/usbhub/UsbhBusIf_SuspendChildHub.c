/*
 * XREFs of UsbhBusIf_SuspendChildHub @ 0x1C00021A0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhLatchPdo @ 0x1C0001BDC (UsbhLatchPdo.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C0001FAC (UsbhSyncSuspendPdoPort.c)
 *     UsbhSetPdoIdleReady @ 0x1C000227C (UsbhSetPdoIdleReady.c)
 *     UsbhSet_Pdo_Dx @ 0x1C0002838 (UsbhSet_Pdo_Dx.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     UsbhUnlatchPdo @ 0x1C001B520 (UsbhUnlatchPdo.c)
 */

__int64 __fastcall UsbhBusIf_SuspendChildHub(PDEVICE_OBJECT DeviceObject)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax
  int v6; // ebp
  __int64 v7; // rax

  v2 = PdoExt(DeviceObject);
  v3 = *(_QWORD *)(v2 + 1184);
  FdoExt(v3);
  if ( (*(_DWORD *)(v2 + 1420) & 4) == 0 )
    return 3221225473LL;
  v4 = UsbhLatchPdo(v3, *(_WORD *)(v2 + 1428), 0LL, 0x48536942u);
  if ( !v4 )
    return 3221225635LL;
  v5 = PdoExt(DeviceObject);
  v6 = UsbhSyncSuspendPdoPort(v5 + 944, (__int64)DeviceObject, 0);
  if ( v6 >= 0 )
  {
    UsbhSet_Pdo_Dx(DeviceObject, (POWER_STATE)3);
    v7 = FdoExt(v3);
    UsbhSetPdoIdleReady(v3, DeviceObject, v7 + 1912);
  }
  UsbhUnlatchPdo(v3, v4, 0LL, 1213425986LL);
  return (unsigned int)v6;
}
