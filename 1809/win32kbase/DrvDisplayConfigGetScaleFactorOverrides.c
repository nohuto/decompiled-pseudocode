/*
 * XREFs of DrvDisplayConfigGetScaleFactorOverrides @ 0x1C0104560
 * Callers:
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C00141B0 (DrvDisplayConfigGetDeviceInfo.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005FBC0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

__int64 __fastcall DrvDisplayConfigGetScaleFactorOverrides(__int64 a1, int a2)
{
  __int64 v4; // r8
  struct PDEV *i; // rbx
  _DWORD *v6; // rcx
  int v7; // eax
  __int64 v8; // rcx

  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
  for ( i = gppdevList; i; i = *(struct PDEV **)i )
  {
    if ( (*((_DWORD *)i + 10) & 0x401) == 1 )
    {
      v6 = (_DWORD *)*((_QWORD *)i + 322);
      if ( ((unsigned __int64)(v6 + 1) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
      {
        v7 = v6[40];
        if ( (v7 & 0x800000) != 0 )
        {
          if ( a2 )
          {
            if ( (v7 & 4) != 0 )
              goto LABEL_7;
          }
          else if ( *(_DWORD *)(a1 + 8) == v6[62] && *(_DWORD *)(a1 + 12) == v6[63] && *(_DWORD *)(a1 + 16) == v6[64] )
          {
LABEL_7:
            *(_QWORD *)(a1 + 20) = *((_QWORD *)i + 317);
            *(_DWORD *)(a1 + 28) = *((_DWORD *)i + 636);
            break;
          }
        }
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v4);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
    PsLeavePriorityRegion(v8);
  }
  return i == 0LL ? 0xC000000D : 0;
}
