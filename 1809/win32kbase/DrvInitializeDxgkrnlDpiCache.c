/*
 * XREFs of DrvInitializeDxgkrnlDpiCache @ 0x1C0092CD0
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005FBC0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvInitializeDxgkrnlDpiCache(_DWORD *a1)
{
  unsigned int v2; // esi
  __int64 v3; // r8
  struct PDEV *i; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = ((__int64 (*)(void))qword_1C01CDCE8)();
  if ( a1 )
  {
    *a1 = 0;
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    for ( i = gppdevList; i; i = *(struct PDEV **)i )
    {
      if ( (*((_DWORD *)i + 10) & 0x401) == 1 )
      {
        v5 = *((_QWORD *)i + 322);
        if ( ((v5 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0
          && (*(_DWORD *)(v5 + 160) & 0x800000) != 0
          && ((unsigned int)((__int64 (__fastcall *)(__int64, _QWORD))qword_1C01CDCF0)(
                              v5 + 248,
                              *(unsigned int *)(v5 + 256)) != *((_DWORD *)i + 635)
           || (*((_DWORD *)i + 637) & 0x20) != 0 && (96 * *((_DWORD *)i + 616) + 50) / 0x64u != gdmLogPixels) )
        {
          *a1 = 1;
          break;
        }
      }
    }
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v3);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion(v6);
    }
  }
  return v2;
}
