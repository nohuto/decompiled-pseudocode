/*
 * XREFs of PiSwGetChildPdo @ 0x1406DA138
 * Callers:
 *     PipEnumerateCompleted @ 0x1406E60B0 (PipEnumerateCompleted.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     IoDeleteDevice @ 0x1400DAB60 (IoDeleteDevice.c)
 *     ObSetSecurityObjectByPointer @ 0x1405CBD40 (ObSetSecurityObjectByPointer.c)
 *     IoCreateDevice @ 0x140653B90 (IoCreateDevice.c)
 *     PiSwFindPdoAssociation @ 0x1406DA26C (PiSwFindPdoAssociation.c)
 *     PiSwAddPdoAssociation @ 0x1406DA2B0 (PiSwAddPdoAssociation.c)
 *     PiSwMakePdoInactive @ 0x1406DA414 (PiSwMakePdoInactive.c)
 */

PDEVICE_OBJECT __fastcall PiSwGetChildPdo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  PDEVICE_OBJECT v5; // rbx
  __int64 PdoAssociation; // rcx
  __int64 v8; // rcx
  NTSTATUS v9; // eax
  _QWORD *DeviceExtension; // rsi
  __int64 v11; // r8
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp+10h] BYREF

  v3 = a2 - 96;
  v5 = 0LL;
  DeviceObject = 0LL;
  LOBYTE(a3) = 1;
  PdoAssociation = PiSwFindPdoAssociation(a2 - 96, a1, a3);
  if ( (*(_DWORD *)(v3 + 4) & 2) != 0 )
  {
    if ( !PdoAssociation )
      return v5;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PdoAssociation + 40) + 64LL) + 8LL) &= ~8u;
  }
  else if ( PdoAssociation )
  {
    v5 = *(PDEVICE_OBJECT *)(PdoAssociation + 40);
    *((_DWORD *)v5->DeviceExtension + 2) |= 8u;
  }
  else
  {
    v8 = *(_QWORD *)(v3 + 120);
    if ( v8 )
      PiSwMakePdoInactive(v8);
    v9 = IoCreateDevice(PiSwDeviceDriverObject, 0x10u, 0LL, 0x22u, 0x80u, 0, &DeviceObject);
    v5 = DeviceObject;
    if ( v9 >= 0 )
    {
      DeviceExtension = DeviceObject->DeviceExtension;
      *DeviceExtension = 0LL;
      DeviceExtension[1] = 0LL;
      v11 = *(_QWORD *)(v3 + 152);
      if ( v11 && (int)ObSetSecurityObjectByPointer((__int64)v5, 28, v11) < 0 )
      {
        IoDeleteDevice(v5);
        return 0LL;
      }
      *DeviceExtension = v3;
      _InterlockedIncrement((volatile signed __int32 *)v3);
      v5 = DeviceObject;
      *(_QWORD *)(v3 + 120) = DeviceObject;
      *((_DWORD *)DeviceExtension + 2) |= 8u;
      v5->Flags &= ~0x80u;
      PiSwAddPdoAssociation(v3, a1, v5);
    }
  }
  if ( v5 )
    ObfReferenceObject(v5);
  return v5;
}
