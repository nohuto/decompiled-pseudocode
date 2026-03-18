/*
 * XREFs of PnpHandleEnumerateHandlesAgainstPdoStack @ 0x14029E0D8
 * Callers:
 *     PnpCollectOpenHandles @ 0x14086CEDC (PnpCollectOpenHandles.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     KeReleaseQueuedSpinLock @ 0x1400770D0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140077180 (KeAcquireQueuedSpinLock.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400889C0 (IoGetDeviceAttachmentBaseRef.c)
 *     IoAcquireVpbSpinLock @ 0x140138660 (IoAcquireVpbSpinLock.c)
 *     IoReleaseVpbSpinLock @ 0x1401389F0 (IoReleaseVpbSpinLock.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140860DFC (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 */

__int64 __fastcall PnpHandleEnumerateHandlesAgainstPdoStack(_QWORD *Object, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rdi
  unsigned int v5; // ebp
  __int64 v6; // rax
  struct _DEVICE_OBJECT *v7; // rsi
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rbx
  KIRQL v9; // al
  void *v10; // rbx
  KIRQL v11; // si
  __int64 Irql; // [rsp+48h] [rbp+10h] BYREF

  Irql = a2;
  v4 = Object;
  ObfReferenceObject(Object);
  while ( 1 )
  {
    v5 = PnpHandleEnumerateHandlesAgainstDeviceObject(v4, PnpCollectOpenHandlesCallBack, a3);
    if ( v5 )
      break;
    IoAcquireVpbSpinLock((PKIRQL)&Irql);
    v6 = v4[7];
    v7 = 0LL;
    if ( v6 )
    {
      v7 = *(struct _DEVICE_OBJECT **)(v6 + 8);
      if ( v7 )
        ObfReferenceObject(*(PVOID *)(v6 + 8));
    }
    IoReleaseVpbSpinLock(Irql);
    if ( v7 )
    {
      DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v7);
      v5 = PnpHandleEnumerateHandlesAgainstDeviceObject(DeviceAttachmentBaseRef, PnpCollectOpenHandlesCallBack, a3);
      ObfDereferenceObject(DeviceAttachmentBaseRef);
      ObfDereferenceObject(v7);
      if ( v5 )
        break;
    }
    v9 = KeAcquireQueuedSpinLock(0xAuLL);
    v10 = (void *)v4[3];
    v11 = v9;
    LOBYTE(Irql) = v9;
    if ( v10 )
      ObfReferenceObject(v10);
    KeReleaseQueuedSpinLock(0xAuLL, v11);
    ObfDereferenceObject(v4);
    v4 = v10;
    if ( !v10 )
      return v5;
  }
  ObfDereferenceObject(v4);
  return v5;
}
