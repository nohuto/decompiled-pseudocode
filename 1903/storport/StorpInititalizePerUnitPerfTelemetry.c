/*
 * XREFs of StorpInititalizePerUnitPerfTelemetry @ 0x1C006EEA0
 * Callers:
 *     StorpInitializeUnitTelemetry @ 0x1C001FCC4 (StorpInitializeUnitTelemetry.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006800 (RaidAllocatePool.c)
 *     memset @ 0x1C0023840 (memset.c)
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
  a1[244].QuadPart = 0LL;
  a1[246].QuadPart = 0LL;
  Pool = RaidAllocatePool(NonPagedPoolNxCacheAligned, (unsigned int)Size, 0x65546152u, QuadPart);
  a1[244].QuadPart = (__int64)Pool;
  if ( Pool )
  {
    memset(Pool, 0, (unsigned int)Size);
    v5 = RaidAllocatePool(NonPagedPoolNx, HIDWORD(qword_1C0061480), 0x65546152u, a1[1].QuadPart);
    a1[246].QuadPart = (__int64)v5;
    if ( v5 )
    {
      memset(v5, 0, HIDWORD(qword_1C0061480));
      if ( UseQPCTime )
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
      else
        PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
      v7 = a1[1].QuadPart;
      a1[245] = PerformanceCounter;
      v8 = RaidAllocatePool(NonPagedPoolNx, (unsigned int)dword_1C006149C, 0x65546152u, v7);
      a1[247].QuadPart = (__int64)v8;
      if ( v8 )
        memset(v8, 0, (unsigned int)dword_1C006149C);
      result = 0LL;
      a1[248].QuadPart = 0LL;
      a1[249].QuadPart = 0LL;
      a1[250].QuadPart = 0LL;
      a1[251].QuadPart = 0LL;
      a1[252].QuadPart = 0LL;
      a1[336].QuadPart = 0LL;
      a1[337].QuadPart = 0LL;
      a1[235].QuadPart = 0LL;
      a1[236].QuadPart = 0LL;
      a1[237].QuadPart = 0LL;
      a1[238].QuadPart = 0LL;
      a1[239].QuadPart = 0LL;
      a1[240].QuadPart = 0LL;
      a1[241].QuadPart = 0LL;
      a1[242].QuadPart = 0LL;
      return result;
    }
    v9 = (void *)a1[244].QuadPart;
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0x65546152u);
      a1[244].QuadPart = 0LL;
    }
  }
  v10 = (void *)a1[246].QuadPart;
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0x65546152u);
    a1[246].QuadPart = 0LL;
  }
  v11 = (void *)a1[247].QuadPart;
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0x65546152u);
    a1[247].QuadPart = 0LL;
  }
  return 3221225495LL;
}
