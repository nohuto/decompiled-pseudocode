/*
 * XREFs of IopGetRegistryKeyInformation @ 0x1406FFB98
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x1406FF4B4 (PiDevCfgCopyDeviceKey.c)
 *     pIoQueryDeviceDescription @ 0x14074447C (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140744A00 (pIoQueryBusDescription.c)
 * Callees:
 *     IopVerifierExAllocatePool_0 @ 0x1400897F4 (IopVerifierExAllocatePool_0.c)
 *     ZwQueryKey @ 0x1401C0F10 (ZwQueryKey.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall IopGetRegistryKeyInformation(HANDLE KeyHandle, _QWORD *a2)
{
  NTSTATUS result; // eax
  PVOID Pool_0; // rbx
  NTSTATUS v6; // edi
  ULONG Length; // [rsp+50h] [rbp+18h] BYREF

  result = ZwQueryKey(KeyHandle, KeyFullInformation, 0LL, 0, &Length);
  if ( result == -1073741789 || result == -2147483643 )
  {
    Pool_0 = IopVerifierExAllocatePool_0(NonPagedPoolNx, Length);
    if ( Pool_0 )
    {
      v6 = ZwQueryKey(KeyHandle, KeyFullInformation, Pool_0, Length, &Length);
      if ( v6 < 0 )
      {
        ExFreePoolWithTag(Pool_0, 0);
        return v6;
      }
      else
      {
        *a2 = Pool_0;
        return 0;
      }
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
