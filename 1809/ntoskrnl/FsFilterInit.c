/*
 * XREFs of FsFilterInit @ 0x14018F9E8
 * Callers:
 *     FsRtlInitSystem @ 0x1409D8714 (FsRtlInitSystem.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
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
  byte_1404387A2 = 6;
  AcquireOpsEvent = 1;
  qword_1404387B0 = (__int64)&qword_1404387A8;
  qword_1404387A8 = (__int64)&qword_1404387A8;
  qword_1404387D0 = (__int64)&qword_1404387C8;
  qword_1404387C8 = (__int64)&qword_1404387C8;
  result = v0;
  dword_1404387A4 = 1;
  ReleaseOpsEvent = 1;
  byte_1404387C2 = 6;
  dword_1404387C4 = 1;
  return result;
}
