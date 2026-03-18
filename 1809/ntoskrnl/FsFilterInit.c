/*
 * XREFs of FsFilterInit @ 0x14018F888
 * Callers:
 *     FsRtlInitSystem @ 0x1409D7714 (FsRtlInitSystem.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

__int64 FsFilterInit()
{
  unsigned int v0; // ebx
  __int64 result; // rax

  v0 = 0;
  AcquireOpsReservePool = ExAllocatePoolWithTag(NonPagedPoolNx, 0x3C8uLL, 0x676D5346u);
  if ( !AcquireOpsReservePool )
    v0 = -1073741670;
  ReleaseOpsReservePool = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0x3C8uLL, 0x676D5346u);
  if ( !ReleaseOpsReservePool )
  {
    ExFreePoolWithTag(AcquireOpsReservePool, 0x676D5346u);
    v0 = -1073741670;
  }
  byte_1404376E2 = 6;
  AcquireOpsEvent = 1;
  qword_1404376F0 = (__int64)&qword_1404376E8;
  qword_1404376E8 = (__int64)&qword_1404376E8;
  qword_140437710 = (__int64)&qword_140437708;
  qword_140437708 = (__int64)&qword_140437708;
  result = v0;
  dword_1404376E4 = 1;
  ReleaseOpsEvent = 1;
  byte_140437702 = 6;
  dword_140437704 = 1;
  return result;
}
