/*
 * XREFs of ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1C01EC48C
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01EF618 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D2D88 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00D35C0 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_.c)
 */

void __fastcall DXGADAPTER::AcquireLocksForStop(DXGADAPTER *this, unsigned __int64 *a2)
{
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  *a2 = -1LL;
  if ( *((_QWORD *)this + 320) )
  {
    while ( 1 )
    {
      KeEnterCriticalRegion();
      if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 120, 0LL) )
        break;
      KeLeaveCriticalRegion();
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 320), 3, 0xFFFFFFFF, 0);
      Interval.QuadPart = -100000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
  }
  else
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 120, 0LL);
  }
  *((_QWORD *)this + 16) = KeGetCurrentThread();
  DXGADAPTER::AcquireCoreResourceExclusive((__int64)this, 2u, 0, 0xFFFFFFFF);
}
