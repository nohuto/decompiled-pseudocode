/*
 * XREFs of PiSwGetChildPdo @ 0x14071F1B0
 * Callers:
 *     PipEnumerateCompleted @ 0x140707CA0 (PipEnumerateCompleted.c)
 * Callees:
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     IoDeleteDevice @ 0x1400F0E80 (IoDeleteDevice.c)
 *     ObSetSecurityObjectByPointer @ 0x1405C8D90 (ObSetSecurityObjectByPointer.c)
 *     IoCreateDevice @ 0x14069F670 (IoCreateDevice.c)
 *     PiSwFindPdoAssociation @ 0x14071F2F0 (PiSwFindPdoAssociation.c)
 *     PiSwAddPdoAssociation @ 0x14071F334 (PiSwAddPdoAssociation.c)
 *     PiSwProcessRemove @ 0x140782BA4 (PiSwProcessRemove.c)
 *     PiSwMakePdoInactive @ 0x140782F7C (PiSwMakePdoInactive.c)
 */

PDEVICE_OBJECT __fastcall PiSwGetChildPdo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  PDEVICE_OBJECT v5; // rbx
  __int64 PdoAssociation; // r8
  NTSTATUS v8; // eax
  _QWORD *DeviceExtension; // rsi
  __int64 v10; // r8
  __int64 v11; // rcx
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
    v11 = *(_QWORD *)(*(_QWORD *)(PdoAssociation + 40) + 64LL);
    *(_DWORD *)(v11 + 8) &= ~8u;
    if ( (*(_DWORD *)(v11 + 8) & 4) == 0 )
      return v5;
    PiSwProcessRemove(*(_QWORD *)(PdoAssociation + 40), 0LL);
  }
  else if ( PdoAssociation )
  {
    v5 = *(PDEVICE_OBJECT *)(PdoAssociation + 40);
    *((_DWORD *)v5->DeviceExtension + 2) |= 8u;
  }
  else
  {
    if ( *(_QWORD *)(v3 + 120) )
      PiSwMakePdoInactive();
    v8 = IoCreateDevice(PiSwDeviceDriverObject, 0x10u, 0LL, 0x22u, 0x80u, 0, &DeviceObject);
    v5 = DeviceObject;
    if ( v8 >= 0 )
    {
      DeviceExtension = DeviceObject->DeviceExtension;
      *DeviceExtension = 0LL;
      DeviceExtension[1] = 0LL;
      v10 = *(_QWORD *)(v3 + 152);
      if ( v10 && (int)ObSetSecurityObjectByPointer((__int64)v5, 28, v10) < 0 )
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
