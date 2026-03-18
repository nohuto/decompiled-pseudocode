/*
 * XREFs of PpProfileIncludeInHardwareProfileTransition @ 0x14086D438
 * Callers:
 *     PipProcessStartPhase1 @ 0x140717F78 (PipProcessStartPhase1.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpIrpQueryID @ 0x1407021A4 (PnpIrpQueryID.c)
 */

void __fastcall PpProfileIncludeInHardwareProfileTransition(__int64 a1, int a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rax
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 == 2 )
  {
    v4 = (__int64 *)(a1 + 576);
    if ( (__int64 *)*v4 == v4 )
    {
      ExAcquireFastMutex(&PiProfileDeviceListLock);
      v5 = PiProfileDeviceListHead;
      if ( *(__int64 **)(PiProfileDeviceListHead + 8) != &PiProfileDeviceListHead )
        __fastfail(3u);
      v4[1] = (__int64)&PiProfileDeviceListHead;
      *v4 = v5;
      *(_QWORD *)(v5 + 8) = v4;
      ++PiProfileDeviceCount;
      PiProfileDeviceListHead = (__int64)v4;
      KeReleaseGuardedMutex(&PiProfileDeviceListLock);
    }
    if ( (int)PnpIrpQueryID(*(struct _DEVICE_OBJECT **)(a1 + 32), 4, (ULONG_PTR *)&P) >= 0 && P )
      ExFreePoolWithTag(P, 0);
  }
  _InterlockedIncrement(&PiProfileDevicesInTransition);
  *(_DWORD *)(a1 + 568) = a2;
}
