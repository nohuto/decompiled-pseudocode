/*
 * XREFs of PiIrpQueryRemoveDevice @ 0x140875FD4
 * Callers:
 *     PnpDisableDevice @ 0x140862064 (PnpDisableDevice.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1408628C8 (PnpQueryRemoveLockedDeviceNode.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     PnpMarkDeviceForRemove @ 0x140170940 (PnpMarkDeviceForRemove.c)
 *     PnpLockMountableDevice @ 0x140170A2C (PnpLockMountableDevice.c)
 *     PnpUnlockMountableDevice @ 0x140170A88 (PnpUnlockMountableDevice.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x140171760 (IopDecrementDeviceObjectHandleCount.c)
 *     PnpFindMountableDevice @ 0x140172E2C (PnpFindMountableDevice.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PnpAsynchronousCall @ 0x140718D4C (PnpAsynchronousCall.c)
 *     IopInvalidateVolumesForDevice @ 0x14072C088 (IopInvalidateVolumesForDevice.c)
 */

__int64 __fastcall PiIrpQueryRemoveDevice(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  PVOID v2; // rsi
  int v5; // r15d
  struct _DEVICE_OBJECT *v6; // rdi
  int v7; // edi
  ULONG_PTR v9; // [rsp+38h] [rbp-39h] BYREF
  PVOID Object; // [rsp+40h] [rbp-31h]
  __int64 v11; // [rsp+48h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-21h] BYREF
  int v13; // [rsp+68h] [rbp-9h]
  int v14; // [rsp+6Ch] [rbp-5h]
  _BYTE v15[72]; // [rsp+70h] [rbp-1h] BYREF

  v2 = 0LL;
  v14 = 0;
  v9 = 0LL;
  Object = 0LL;
  v5 = 0;
  memset(&Event, 0, sizeof(Event));
  memset(v15, 0, sizeof(v15));
  *(_WORD *)v15 = 283;
  if ( PnpFindMountableDevice((__int64)DeviceObject) )
  {
    v5 = 1;
    PnpLockMountableDevice(DeviceObject);
    v6 = (struct _DEVICE_OBJECT *)PnpMarkDeviceForRemove((ULONG_PTR)DeviceObject, 1, &v9);
    PnpUnlockMountableDevice((__int64)DeviceObject);
    v2 = Object;
  }
  else
  {
    v6 = DeviceObject;
  }
  v11 = 0LL;
  v13 = -1073741823;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v7 = PnpAsynchronousCall(v6, (__int128 *)v15, (IO_COMPLETION_ROUTINE *)PnpDiagnosticCompletionRoutine, &v11);
  if ( v7 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v7 = v13;
  }
  if ( a2 )
    *a2 = v11;
  if ( v5 )
  {
    PnpLockMountableDevice(DeviceObject);
    if ( v2 )
    {
      IopDecrementDeviceObjectHandleCount((ULONG_PTR)v2);
      ObfDereferenceObject(v2);
    }
    PnpUnlockMountableDevice((__int64)DeviceObject);
    if ( v7 >= 0 )
      return (unsigned int)IopInvalidateVolumesForDevice(DeviceObject);
  }
  return (unsigned int)v7;
}
