/*
 * XREFs of PiSwCloseDevice @ 0x14074D4CC
 * Callers:
 *     PiSwStopDestroy @ 0x140730CC8 (PiSwStopDestroy.c)
 *     PiSwCloseDescendants @ 0x140730E50 (PiSwCloseDescendants.c)
 *     PiSwIrpCleanup @ 0x14074D3EC (PiSwIrpCleanup.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140001CA0 (RtlDeleteElementGenericTableAvl.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     IoInvalidateDeviceRelations @ 0x14015D0D0 (IoInvalidateDeviceRelations.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406A2B68 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwBusRelationRemove @ 0x14078096C (PiSwBusRelationRemove.c)
 *     PiSwDeviceDereference @ 0x1407809EC (PiSwDeviceDereference.c)
 *     PiSwQueuedCreateInfoFree @ 0x14087089C (PiSwQueuedCreateInfoFree.c)
 */

struct _DEVICE_OBJECT *__fastcall PiSwCloseDevice(PVOID a1)
{
  struct _DEVICE_OBJECT *result; // rax
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
    result = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(Buffer[14], 0x746C6644u);
    v2 = result;
    if ( result )
    {
      IoInvalidateDeviceRelations(result, SingleBusRelations);
      return (struct _DEVICE_OBJECT *)ObfDereferenceObject(v2);
    }
  }
  else
  {
    if ( *((_QWORD *)a1 + 14) )
      PiSwBusRelationRemove(a1);
    RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer);
    return (struct _DEVICE_OBJECT *)PiSwDeviceDereference(Buffer);
  }
  return result;
}
