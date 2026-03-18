/*
 * XREFs of PiSwCloseDevice @ 0x1406D9130
 * Callers:
 *     PiSwIrpCleanup @ 0x1406D8A68 (PiSwIrpCleanup.c)
 *     PiSwStopDestroy @ 0x1406ED1B8 (PiSwStopDestroy.c)
 *     PiSwCloseDescendants @ 0x1406ED338 (PiSwCloseDescendants.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140006CA0 (RtlDeleteElementGenericTableAvl.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     IoInvalidateDeviceRelations @ 0x14015EF30 (IoInvalidateDeviceRelations.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14059AC4C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwDeviceDereference @ 0x1406D8A30 (PiSwDeviceDereference.c)
 *     PiSwBusRelationRemove @ 0x1406D8D74 (PiSwBusRelationRemove.c)
 *     PiSwQueuedCreateInfoFree @ 0x140835EE0 (PiSwQueuedCreateInfoFree.c)
 */

void __fastcall PiSwCloseDevice(PVOID a1)
{
  struct _DEVICE_OBJECT *v1; // rax
  struct _DEVICE_OBJECT *v2; // rbx
  _QWORD *Buffer; // [rsp+30h] [rbp+8h] BYREF

  Buffer = a1;
  if ( *((_QWORD *)a1 + 11) )
  {
    PiSwQueuedCreateInfoFree(*((PVOID *)a1 + 11));
    Buffer[11] = 0LL;
    a1 = Buffer;
  }
  if ( *((_QWORD *)a1 + 15) )
  {
    *((_DWORD *)a1 + 1) |= 2u;
    v1 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(Buffer[14], 0x746C6644u);
    v2 = v1;
    if ( v1 )
    {
      IoInvalidateDeviceRelations(v1, SingleBusRelations);
      ObfDereferenceObject(v2);
    }
  }
  else
  {
    if ( *((_QWORD *)a1 + 14) )
      PiSwBusRelationRemove((char *)a1);
    RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer);
    PiSwDeviceDereference(Buffer);
  }
}
