/*
 * XREFs of ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C0124DB0
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0129FCC (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003AE70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C003DDAC (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0078C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00B1414 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 */

void __fastcall PDEVOBJ::vClearSurface(PDEVOBJ *this)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rcx
  _BYTE v5[32]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v6; // [rsp+40h] [rbp-30h] BYREF
  int v7; // [rsp+48h] [rbp-28h]
  int v8; // [rsp+4Ch] [rbp-24h]
  __int16 v9; // [rsp+50h] [rbp-20h]

  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
  v6 = 0LL;
  v7 = 0;
  v8 = 0;
  v9 = 256;
  DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v5, this);
  *(_QWORD *)(*(_QWORD *)this + 2552LL) = 0LL;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v5);
  v3 = v6;
  if ( v6 )
  {
    if ( (_BYTE)v9 )
    {
      *(_DWORD *)(v6 + 40) &= ~2u;
      v3 = v6;
      LOBYTE(v9) = 0;
    }
    if ( v3 )
      XDCOBJ::vUnlockFast((XDCOBJ *)&v6);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v2);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
    PsLeavePriorityRegion(v4);
  }
}
