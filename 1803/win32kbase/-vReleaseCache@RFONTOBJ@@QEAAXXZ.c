/*
 * XREFs of ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C00C0550
 * Callers:
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C002A644 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00486F8 (--1RFONTOBJ@@QEAA@XZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall RFONTOBJ::vReleaseCache(RFONTOBJ *this, __int64 a2, int a3)
{
  __int64 v3; // rdx
  __int64 v5; // rcx
  struct _ERESOURCE *v6; // rcx
  __int64 v7; // rcx

  v3 = *(_QWORD *)this;
  v5 = *(_QWORD *)(*(_QWORD *)this + 608LL);
  if ( v5 )
  {
    Win32FreePool(v5);
    *(_QWORD *)(*(_QWORD *)this + 616LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 608LL) = 0LL;
    v3 = *(_QWORD *)this;
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"prfnt->hsemCache", *(_QWORD *)(v3 + 496), a3);
  v6 = *(struct _ERESOURCE **)(*(_QWORD *)this + 496LL);
  if ( v6 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v6);
    PsLeavePriorityRegion(v7);
  }
}
