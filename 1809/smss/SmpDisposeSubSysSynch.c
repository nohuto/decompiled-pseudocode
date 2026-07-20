/*
 * XREFs of SmpDisposeSubSysSynch @ 0x1400167CC
 * Callers:
 *     SmpCompleteSubSysStatusChange @ 0x140002DA4 (SmpCompleteSubSysStatusChange.c)
 *     SmpDereferenceKnownSubSys @ 0x14000478C (SmpDereferenceKnownSubSys.c)
 *     SmpWaitForStatusChange @ 0x140016930 (SmpWaitForStatusChange.c)
 * Callees:
 *     <none>
 */

void __fastcall SmpDisposeSubSysSynch(HANDLE *BaseAddress)
{
  HANDLE *v1; // rbx

  if ( BaseAddress )
  {
    v1 = BaseAddress;
    if ( (unsigned int)SmpSubSysSynchCacheSize >= 0x10 )
      goto LABEL_6;
    NtClearEvent(BaseAddress[1]);
    RtlAcquireSRWLockExclusive(&SmpSubSysSynchLock);
    if ( (unsigned int)SmpSubSysSynchCacheSize < 0x10 )
    {
      ++SmpSubSysSynchCacheSize;
      *v1 = (HANDLE)SmpSubSysSynchCache;
      SmpSubSysSynchCache = (__int64)v1;
      v1 = 0LL;
    }
    RtlReleaseSRWLockExclusive(&SmpSubSysSynchLock);
    if ( v1 )
    {
LABEL_6:
      NtClose(v1[1]);
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v1);
    }
  }
}
