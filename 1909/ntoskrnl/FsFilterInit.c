/*
 * XREFs of FsFilterInit @ 0x140199BB4
 * Callers:
 *     FsRtlInitSystem @ 0x140A1A600 (FsRtlInitSystem.c)
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
  byte_140463002 = 6;
  AcquireOpsEvent = 1;
  qword_140463010 = (__int64)&qword_140463008;
  qword_140463008 = (__int64)&qword_140463008;
  qword_140463030 = (__int64)&qword_140463028;
  qword_140463028 = (__int64)&qword_140463028;
  result = v0;
  dword_140463004 = 1;
  ReleaseOpsEvent = 1;
  byte_140463022 = 6;
  dword_140463024 = 1;
  return result;
}
