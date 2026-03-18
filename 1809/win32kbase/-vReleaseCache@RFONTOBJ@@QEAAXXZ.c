/*
 * XREFs of ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C00F6B10
 * Callers:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0062DDC (--1RFONTOBJ@@QEAA@XZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall RFONTOBJ::vReleaseCache(RFONTOBJ *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v5; // rcx
  struct _ERESOURCE *v6; // rcx
  __int64 v7; // rcx

  v3 = *(_QWORD *)this;
  v5 = *(_QWORD *)(*(_QWORD *)this + 616LL);
  if ( v5 )
  {
    Win32FreePool(v5);
    *(_QWORD *)(*(_QWORD *)this + 624LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 616LL) = 0LL;
    v3 = *(_QWORD *)this;
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"prfnt->hsemCache", *(_QWORD *)(v3 + 504), a3);
  v6 = *(struct _ERESOURCE **)(*(_QWORD *)this + 504LL);
  if ( v6 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v6);
    PsLeavePriorityRegion(v7);
  }
}
