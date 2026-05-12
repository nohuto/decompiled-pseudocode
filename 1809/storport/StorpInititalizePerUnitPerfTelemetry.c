/*
 * XREFs of StorpInititalizePerUnitPerfTelemetry @ 0x1C00706F4
 * Callers:
 *     StorpInitializeUnitTelemetry @ 0x1C002366C (StorpInitializeUnitTelemetry.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C00081B4 (RaidAllocatePool.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 */

__int64 __fastcall StorpInititalizePerUnitPerfTelemetry(LARGE_INTEGER *a1)
{
  __int64 result; // rax
  __int64 QuadPart; // r9
  PVOID Pool; // rax
  PVOID v5; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v7; // r9
  PVOID v8; // rax
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx

  result = 3221225473LL;
  if ( !(_DWORD)Size || !g_RaidNumberProcessors )
    return result;
  QuadPart = a1[1].QuadPart;
  a1[278].QuadPart = 0LL;
  a1[280].QuadPart = 0LL;
  Pool = RaidAllocatePool(NonPagedPoolNxCacheAligned, (unsigned int)Size, 0x65546152u, QuadPart);
  a1[278].QuadPart = (__int64)Pool;
  if ( Pool )
  {
    memset(Pool, 0, (unsigned int)Size);
    v5 = RaidAllocatePool(NonPagedPoolNx, HIDWORD(qword_1C0061560), 0x65546152u, a1[1].QuadPart);
    a1[280].QuadPart = (__int64)v5;
    if ( v5 )
    {
      memset(v5, 0, HIDWORD(qword_1C0061560));
      if ( UseQPCTime )
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
      else
        PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
      v7 = a1[1].QuadPart;
      a1[279] = PerformanceCounter;
      v8 = RaidAllocatePool(NonPagedPoolNx, (unsigned int)dword_1C006157C, 0x65546152u, v7);
      a1[281].QuadPart = (__int64)v8;
      if ( v8 )
        memset(v8, 0, (unsigned int)dword_1C006157C);
      result = 0LL;
      a1[282].QuadPart = 0LL;
      a1[283].QuadPart = 0LL;
      a1[284].QuadPart = 0LL;
      a1[285].QuadPart = 0LL;
      a1[286].QuadPart = 0LL;
      a1[395].QuadPart = 0LL;
      a1[396].QuadPart = 0LL;
      a1[268].QuadPart = 0LL;
      a1[269].QuadPart = 0LL;
      a1[270].QuadPart = 0LL;
      a1[271].QuadPart = 0LL;
      a1[272].QuadPart = 0LL;
      a1[273].QuadPart = 0LL;
      a1[274].QuadPart = 0LL;
      a1[275].QuadPart = 0LL;
      a1[276].QuadPart = 0LL;
      a1[277].LowPart = 0;
      return result;
    }
    v9 = (void *)a1[278].QuadPart;
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0x65546152u);
      a1[278].QuadPart = 0LL;
    }
  }
  v10 = (void *)a1[280].QuadPart;
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0x65546152u);
    a1[280].QuadPart = 0LL;
  }
  v11 = (void *)a1[281].QuadPart;
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0x65546152u);
    a1[281].QuadPart = 0LL;
  }
  return 3221225495LL;
}
