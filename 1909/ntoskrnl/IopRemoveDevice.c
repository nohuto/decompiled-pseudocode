/*
 * XREFs of IopRemoveDevice @ 0x140732B24
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x140173204 (PnpRemoveLockedDeviceNode.c)
 *     PnpDeleteLockedDeviceNode @ 0x140732554 (PnpDeleteLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140732734 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpDisableDevice @ 0x140861764 (PnpDisableDevice.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140861FC8 (PnpQueryRemoveLockedDeviceNode.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     PnpMarkDeviceForRemove @ 0x140171030 (PnpMarkDeviceForRemove.c)
 *     PnpLockMountableDevice @ 0x14017111C (PnpLockMountableDevice.c)
 *     PnpUnlockMountableDevice @ 0x140171178 (PnpUnlockMountableDevice.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x140171E50 (IopDecrementDeviceObjectHandleCount.c)
 *     PnpFindMountableDevice @ 0x14017355C (PnpFindMountableDevice.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PiPnpRtlEndOperation @ 0x1405BB924 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1405BD6D8 (PiPnpRtlBeginOperation.c)
 *     IopSynchronousCall @ 0x140690E2C (IopSynchronousCall.c)
 *     PipClearDevNodeUserFlags @ 0x1407035C0 (PipClearDevNodeUserFlags.c)
 *     PipClearDevNodeFlags @ 0x140709274 (PipClearDevNodeFlags.c)
 *     IopUncacheInterfaceInformation @ 0x14071A08C (IopUncacheInterfaceInformation.c)
 *     IopInvalidateVolumesForDevice @ 0x14072DF28 (IopInvalidateVolumesForDevice.c)
 *     PoFxAbandonDevice @ 0x140732D24 (PoFxAbandonDevice.c)
 *     PiSwStopDestroy @ 0x140732F28 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x140732FD0 (PiSwProcessParentRemoveIrp.c)
 *     IopDecDisableableDepends @ 0x14078CDAC (IopDecDisableableDepends.c)
 */

__int64 __fastcall IopRemoveDevice(PDEVICE_OBJECT DeviceObject, int a2)
{
  PVOID v2; // r14
  int v3; // r12d
  _DWORD *DeviceNode; // rsi
  struct _DEVICE_OBJECT *v7; // r15
  __int64 v8; // rcx
  int v9; // r15d
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  ULONG_PTR v13; // [rsp+30h] [rbp-29h] BYREF
  PVOID Object; // [rsp+38h] [rbp-21h]
  _BYTE v15[80]; // [rsp+40h] [rbp-19h] BYREF
  PVOID P; // [rsp+C0h] [rbp+67h] BYREF

  v2 = 0LL;
  v3 = 0;
  v13 = 0LL;
  Object = 0LL;
  if ( DeviceObject )
    DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  P = 0LL;
  PiPnpRtlBeginOperation(&P);
  if ( a2 == 2 )
    IopUncacheInterfaceInformation((__int64)DeviceObject, 1);
  memset(v15, 0, 0x48uLL);
  v15[0] = 27;
  v15[1] = a2;
  if ( PnpFindMountableDevice((__int64)DeviceObject) )
  {
    v3 = 1;
    PnpLockMountableDevice(DeviceObject);
    v7 = (struct _DEVICE_OBJECT *)PnpMarkDeviceForRemove((ULONG_PTR)DeviceObject, 1, &v13);
    PnpUnlockMountableDevice((__int64)DeviceObject);
    v2 = Object;
  }
  else
  {
    v7 = DeviceObject;
  }
  if ( a2 == 23 || a2 == 2 )
  {
    if ( (DeviceNode[100] & 8) != 0 )
    {
      PipClearDevNodeUserFlags((__int64)DeviceNode, 8);
      IopDecDisableableDepends(DeviceNode);
    }
    if ( a2 == 2 )
    {
      PiSwProcessParentRemoveIrp(DeviceObject);
      PiSwStopDestroy(v8, *((_QWORD *)DeviceNode + 6));
    }
  }
  v9 = IopSynchronousCall(v7, (__int64)v15, -1073741637, 0LL, 0LL);
  if ( v3 )
  {
    PnpLockMountableDevice(DeviceObject);
    if ( (unsigned int)(a2 - 2) <= 1 )
    {
      PnpMarkDeviceForRemove((ULONG_PTR)DeviceObject, 0, &v13);
      v2 = Object;
    }
    if ( v2 )
    {
      IopDecrementDeviceObjectHandleCount((ULONG_PTR)v2);
      ObfDereferenceObject(v2);
    }
    PnpUnlockMountableDevice((__int64)DeviceObject);
    if ( (a2 != 1 || v9 < 0) && a2 != 23 )
    {
LABEL_29:
      if ( a2 != 2 )
        goto LABEL_26;
      goto LABEL_22;
    }
    v9 = IopInvalidateVolumesForDevice(DeviceObject);
  }
  if ( a2 != 23 )
    goto LABEL_29;
LABEL_22:
  PoFxAbandonDevice(DeviceNode);
  DeviceNode[35] = 0;
  if ( a2 == 2 )
  {
    PipClearDevNodeFlags((__int64)DeviceNode, 4104);
    v10 = *((_QWORD *)DeviceNode + 81);
    if ( v10 )
    {
      if ( (v10 & 1) != 0 )
      {
        v11 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
        *((_QWORD *)DeviceNode + 81) = v11;
        --*(_DWORD *)(v11 + 656);
      }
    }
  }
LABEL_26:
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return (unsigned int)v9;
}
