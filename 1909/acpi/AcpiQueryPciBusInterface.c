/*
 * XREFs of AcpiQueryPciBusInterface @ 0x1C0093E0C
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C000CF60 (ACPIDetectFilterDevices.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C0096C64 (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall AcpiQueryPciBusInterface(ULONG_PTR BugCheckParameter3)
{
  __int64 DeviceExtension; // rbx
  PVOID PoolWithTag; // rdi
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r14
  int v5; // esi
  __int64 v6; // rcx
  _QWORD v8[10]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v9[256]; // [rsp+88h] [rbp-80h] BYREF

  memset(&v8[1], 0, 0x48uLL);
  memset(v9, 0, sizeof(v9));
  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  if ( *(_QWORD *)(DeviceExtension + 80) )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x46706341u);
  if ( PoolWithTag )
  {
    AttachedDeviceReference = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(DeviceExtension + 736));
    if ( AttachedDeviceReference )
    {
      LOWORD(v8[1]) = 2075;
      v8[2] = &GUID_BUS_INTERFACE_STANDARD;
      LODWORD(v8[3]) = 65600;
      v8[5] = v8;
      v8[4] = PoolWithTag;
      v5 = ACPIInternalSendSynchronousIrp(AttachedDeviceReference);
      ObfDereferenceObject(AttachedDeviceReference);
      if ( v5 >= 0 )
      {
        *(_QWORD *)(DeviceExtension + 80) = PoolWithTag;
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(DeviceExtension + 88), 0, 0) & 0x100) == 0 )
        {
          _InterlockedExchange((volatile __int32 *)(DeviceExtension + 100), v8[0]);
          _InterlockedOr((volatile signed __int32 *)(DeviceExtension + 88), 0x100u);
        }
        if ( (*((unsigned int (__fastcall **)(_QWORD, _QWORD, _BYTE *, _QWORD, int))PoolWithTag + 7))(
               *((_QWORD *)PoolWithTag + 1),
               0LL,
               v9,
               0LL,
               26) == 26
          && (v9[14] & 0x7F) == 1
          && v9[25] )
        {
          v6 = v9[25] | v8[0] & 0xFFFF00;
          if ( (_InterlockedCompareExchange((volatile signed __int32 *)(DeviceExtension + 88), 0, 0) & 0x200) == 0 )
          {
            _InterlockedExchange((volatile __int32 *)(DeviceExtension + 104), v6);
            _InterlockedOr((volatile signed __int32 *)(DeviceExtension + 88), 0x200u);
          }
          (*(void (__fastcall **)(__int64))(PmHalDispatchTable + 72))(v6);
        }
        return (unsigned int)v5;
      }
    }
    else
    {
      v5 = -1073741823;
    }
    ExFreePoolWithTag(PoolWithTag, 0x46706341u);
    return (unsigned int)v5;
  }
  return 3221225626LL;
}
