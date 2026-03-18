/*
 * XREFs of DrvGetHDEV @ 0x1C0014F70
 * Callers:
 *     hdcOpenDCW @ 0x1C002B5E0 (hdcOpenDCW.c)
 * Callees:
 *     DrvGetDeviceFromName @ 0x1C0015070 (DrvGetDeviceFromName.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0023910 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005FBC0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

struct PDEV *__fastcall DrvGetHDEV(const UNICODE_STRING *a1)
{
  struct PDEV *v1; // rsi
  __int64 DeviceFromName; // rbp
  struct PDEV *v3; // rdi
  struct PDEV *v4; // rbx
  __int64 v5; // rax

  v1 = 0LL;
  if ( a1 )
  {
    DeviceFromName = DrvGetDeviceFromName(a1);
    if ( DeviceFromName )
    {
      v3 = 0LL;
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
      v4 = gppdevList;
      if ( gppdevList )
      {
        do
        {
          v5 = *((_QWORD *)v4 + 322);
          if ( v5 && v5 == DeviceFromName )
          {
            if ( (*((_DWORD *)v4 + 10) & 0x400) == 0 )
            {
              ++*((_DWORD *)v4 + 2);
              TrackObjectReferenceIncrement(1LL, *((_QWORD *)v4 + 444));
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
          TrackObjectReferenceIncrement(1LL, *((_QWORD *)v3 + 444));
          v1 = v3;
        }
      }
LABEL_8:
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
        PsLeavePriorityRegion();
      }
    }
  }
  return v1;
}
