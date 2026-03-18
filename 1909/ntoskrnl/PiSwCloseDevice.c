/*
 * XREFs of PiSwCloseDevice @ 0x14074DF5C
 * Callers:
 *     PiSwStopDestroy @ 0x140732F28 (PiSwStopDestroy.c)
 *     PiSwCloseDescendants @ 0x1407330B0 (PiSwCloseDescendants.c)
 *     PiSwIrpCleanup @ 0x14074DE7C (PiSwIrpCleanup.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140001CA0 (RtlDeleteElementGenericTableAvl.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     IoInvalidateDeviceRelations @ 0x14015D770 (IoInvalidateDeviceRelations.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140670048 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwBusRelationRemove @ 0x140782CD4 (PiSwBusRelationRemove.c)
 *     PiSwDeviceDereference @ 0x140782D54 (PiSwDeviceDereference.c)
 *     PiSwQueuedCreateInfoFree @ 0x14086FF9C (PiSwQueuedCreateInfoFree.c)
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
