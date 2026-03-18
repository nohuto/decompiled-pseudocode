/*
 * XREFs of FsFilterInit @ 0x140199554
 * Callers:
 *     FsRtlInitSystem @ 0x140A1A388 (FsRtlInitSystem.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
  byte_140463322 = 6;
  AcquireOpsEvent = 1;
  qword_140463330 = (__int64)&qword_140463328;
  qword_140463328 = (__int64)&qword_140463328;
  qword_140463350 = (__int64)&qword_140463348;
  qword_140463348 = (__int64)&qword_140463348;
  result = v0;
  dword_140463324 = 1;
  ReleaseOpsEvent = 1;
  byte_140463342 = 6;
  dword_140463344 = 1;
  return result;
}
