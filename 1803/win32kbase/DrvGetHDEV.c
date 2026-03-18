/*
 * XREFs of DrvGetHDEV @ 0x1C0045110
 * Callers:
 *     hdcOpenDCW @ 0x1C0044DB0 (hdcOpenDCW.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C002D5A0 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     DrvGetDeviceFromName @ 0x1C0045200 (DrvGetDeviceFromName.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005B3A0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

struct PDEV *__fastcall DrvGetHDEV(__int64 a1)
{
  struct PDEV *v1; // rsi
  __int64 DeviceFromName; // rbp
  struct PDEV *v3; // rdi
  struct PDEV *v4; // rbx
  __int64 v5; // rax

  v1 = 0LL;
  if ( a1 )
  {
    DeviceFromName = DrvGetDeviceFromName(a1, 0LL);
    if ( DeviceFromName )
    {
      v3 = 0LL;
      EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
      v4 = gppdevList;
      if ( gppdevList )
      {
        do
        {
          v5 = *((_QWORD *)v4 + 321);
          if ( v5 && v5 == DeviceFromName )
          {
            if ( (*((_DWORD *)v4 + 10) & 0x400) == 0 )
            {
              ++*((_DWORD *)v4 + 2);
              TrackObjectReferenceIncrement(
                1u,
                *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)v4 + 443));
              v1 = v4;
              goto LABEL_8;
            }
            if ( !v3 )
              v3 = v4;
          }
          v4 = *(struct PDEV **)v4;
        }
        while ( v4 );
        if ( v3 )
        {
          *((_QWORD *)v3 + 4) = 0LL;
          ++*((_DWORD *)v3 + 2);
          TrackObjectReferenceIncrement(
            1u,
            *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)v3 + 443));
          v1 = v3;
        }
      }
LABEL_8:
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
        PsLeavePriorityRegion();
      }
    }
  }
  return v1;
}
