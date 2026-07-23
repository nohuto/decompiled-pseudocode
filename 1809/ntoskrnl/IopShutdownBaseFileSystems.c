/*
 * XREFs of IopShutdownBaseFileSystems @ 0x140578E88
 * Callers:
 *     IoShutdownSystem @ 0x140578C68 (IoShutdownSystem.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400B8780 (IopIncrementDeviceObjectRefCount.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x1400B8B60 (IopDecrementDeviceObjectRef.c)
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     IoGetAttachedDevice @ 0x1400B9190 (IoGetAttachedDevice.c)
 *     IoBuildSynchronousFsdRequest @ 0x1406640D0 (IoBuildSynchronousFsdRequest.c)
 */

LONG_PTR __fastcall IopShutdownBaseFileSystems(LONG_PTR **a1)
{
  LONG_PTR *v2; // rbx
  LONG_PTR result; // rax
  PDEVICE_OBJECT v4; // rsi
  __int64 v5; // r8
  PDEVICE_OBJECT AttachedDevice; // rbx
  IRP *v7; // rax
  LONG_PTR v8; // rax
  __int64 v9; // r8
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  KeInitializeEvent(&Event, NotificationEvent, 0);
  v2 = *a1;
  if ( (LONG_PTR **)(*a1)[1] != a1 || (result = *v2, *(LONG_PTR **)(*v2 + 8) != v2) )
LABEL_14:
    __fastfail(3u);
  *a1 = (LONG_PTR *)result;
  *(_QWORD *)(result + 8) = a1;
  while ( v2 != (LONG_PTR *)a1 )
  {
    *v2 = 0LL;
    v2[1] = 0LL;
    ObfReferenceObject(v2 - 10);
    IopIncrementDeviceObjectRefCount((ULONG_PTR)(v2 - 10), 1, v5);
    AttachedDevice = (PDEVICE_OBJECT)(v2 - 10);
    v4 = AttachedDevice;
    if ( AttachedDevice->AttachedDevice )
      AttachedDevice = IoGetAttachedDevice(AttachedDevice);
    v7 = IoBuildSynchronousFsdRequest(0x10u, AttachedDevice, 0LL, 0, 0LL, &Event, &IoStatusBlock);
    if ( v7 && IofCallDriver(AttachedDevice, v7) == 259 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v2 = *a1;
    if ( (LONG_PTR **)(*a1)[1] != a1 )
      goto LABEL_14;
    v8 = *v2;
    if ( *(LONG_PTR **)(*v2 + 8) != v2 )
      goto LABEL_14;
    *a1 = (LONG_PTR *)v8;
    *(_QWORD *)(v8 + 8) = a1;
    KeResetEvent(&Event);
    LOBYTE(v9) = 1;
    IopDecrementDeviceObjectRef((ULONG_PTR)v4, 0, v9);
    result = ObfDereferenceObject(v4);
  }
  return result;
}
