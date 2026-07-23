/*
 * XREFs of PiIommuAllocateExtension @ 0x140751728
 * Callers:
 *     PiDmaGuardProcessNewDeviceNode @ 0x1406F9C80 (PiDmaGuardProcessNewDeviceNode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     PipIommuRetrieveDeviceId @ 0x1407517FC (PipIommuRetrieveDeviceId.c)
 *     PiIommuFreeExtension @ 0x140764BD0 (PiIommuFreeExtension.c)
 *     PnpTraceIommuDeviceProperties @ 0x14083AD88 (PnpTraceIommuDeviceProperties.c)
 */

__int64 __fastcall PiIommuAllocateExtension(__int64 a1, ULONG_PTR a2, _QWORD *a3)
{
  _QWORD *PoolWithTag; // rbx
  int DeviceId; // edi
  __int64 (__fastcall *v8)(_QWORD, unsigned int *); // rax
  char v9; // cl
  __int64 result; // rax
  unsigned int v11; // [rsp+50h] [rbp+18h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x64706E50u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    DeviceId = PipIommuRetrieveDeviceId(a2);
    if ( DeviceId < 0
      || ((v8 = *(__int64 (__fastcall **)(_QWORD, unsigned int *))(a2 + 56)) == 0LL
        ? (DeviceId = -1073741637)
        : (DeviceId = v8(*(_QWORD *)(a2 + 8), &v11)),
          DeviceId < 0) )
    {
      PiIommuFreeExtension((ULONG_PTR)PoolWithTag);
      PoolWithTag = 0LL;
    }
    else
    {
      *((_BYTE *)PoolWithTag + 16) ^= (*((_BYTE *)PoolWithTag + 16) ^ (8 * (v11 >> 1))) & 8;
      v9 = *((_BYTE *)PoolWithTag + 16) ^ (*((_BYTE *)PoolWithTag + 16) ^ (4 * v11)) & 4;
      *((_BYTE *)PoolWithTag + 16) = v9;
      if ( (v9 & 4) != 0 )
        PnpTraceIommuDeviceProperties(a1, v11);
    }
  }
  else
  {
    DeviceId = -1073741670;
  }
  result = (unsigned int)DeviceId;
  *a3 = PoolWithTag;
  return result;
}
