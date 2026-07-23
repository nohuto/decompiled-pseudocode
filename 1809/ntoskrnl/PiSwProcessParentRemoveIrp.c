/*
 * XREFs of PiSwProcessParentRemoveIrp @ 0x1406EE4D8
 * Callers:
 *     IopRemoveDevice @ 0x1406EE0A4 (IopRemoveDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     PiSwProcessRemove @ 0x1406D9DEC (PiSwProcessRemove.c)
 *     PiSwDestroyDeviceObject @ 0x1406DA37C (PiSwDestroyDeviceObject.c)
 *     PiSwCloseDescendants @ 0x1406EE5B8 (PiSwCloseDescendants.c)
 *     PiSwFindSwDevice @ 0x1406EE5EC (PiSwFindSwDevice.c)
 */

_QWORD *__fastcall PiSwProcessParentRemoveIrp(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v4; // rsi
  const wchar_t *v5; // rcx
  __int64 SwDevice; // rax
  __int64 *v8; // rbp
  struct _DEVICE_OBJECT *v9; // rbp

  v1 = a1;
  if ( a1 )
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  v2 = (a1 + 40) & -(__int64)(a1 != 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  v4 = (__int64 *)PiSwGlobalPdoAssociationList;
  while ( v4 != &PiSwGlobalPdoAssociationList )
  {
    v8 = v4;
    v4 = (__int64 *)*v4;
    if ( v8[2] == v1 )
    {
      v9 = (struct _DEVICE_OBJECT *)v8[3];
      if ( (*((_DWORD *)v9->DeviceExtension + 2) & 0x20) == 0 )
        PiSwProcessRemove((__int64)v9, 0);
      PiSwDestroyDeviceObject(v9);
    }
  }
  if ( v2 )
  {
    v5 = *(const wchar_t **)(v2 + 8);
    if ( v5 )
    {
      SwDevice = PiSwFindSwDevice(v5);
      if ( !SwDevice || (*(_DWORD *)(SwDevice + 4) & 1) == 0 && !*(_DWORD *)(SwDevice + 180) )
        PiSwCloseDescendants(v2);
    }
  }
  ExReleaseResourceLite(&PiSwLockObj);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
