/*
 * XREFs of PpmAllocWmiEvent @ 0x1402E46A0
 * Callers:
 *     PpmFireWmiEvent @ 0x1402E4748 (PpmFireWmiEvent.c)
 *     PpmWmiFireIdleAccountingEvent @ 0x1402E47D0 (PpmWmiFireIdleAccountingEvent.c)
 * Callees:
 *     IoWMIDeviceObjectToProviderId @ 0x14012E9B0 (IoWMIDeviceObjectToProviderId.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

char *__fastcall PpmAllocWmiEvent(PDEVICE_OBJECT DeviceObject, __int128 *a2, int a3)
{
  unsigned int v3; // esi
  char *PoolWithTag; // rax
  char *v8; // rbx
  __int128 v9; // xmm0

  v3 = a3 + 64;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(a3 + 64), 0x774D5050u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v3);
    *((_QWORD *)v8 + 2) = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)v8 = v3;
    *((_DWORD *)v8 + 1) = IoWMIDeviceObjectToProviderId(DeviceObject);
    v9 = *a2;
    *((_DWORD *)v8 + 11) = 138;
    *((_DWORD *)v8 + 14) = 64;
    *(_OWORD *)(v8 + 24) = v9;
    *((_DWORD *)v8 + 15) = a3;
  }
  return v8;
}
