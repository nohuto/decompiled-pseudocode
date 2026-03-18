/*
 * XREFs of ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1C01BCA0C
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01BFA94 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D30EC (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C00F9164 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 */

void __fastcall DXGADAPTER::AcquireLocksForStop(DXGADAPTER *this, unsigned __int64 *a2)
{
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  *a2 = -1LL;
  if ( *((_QWORD *)this + 316) )
  {
    while ( 1 )
    {
      KeEnterCriticalRegion();
      if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 120, 0LL) )
        break;
      KeLeaveCriticalRegion();
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 316), 3, 0xFFFFFFFF, 0);
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
  DXGADAPTER::AcquireCoreResourceExclusive((__int64)this, 2, 1);
}
