/*
 * XREFs of NtSetTimerResolution @ 0x1406A63D0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExpInsertTimerResolutionEntry @ 0x1400F8814 (ExpInsertTimerResolutionEntry.c)
 *     ExpUpdateTimerResolution @ 0x1400FB49C (ExpUpdateTimerResolution.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PoDiagCaptureUsermodeStack @ 0x1406A51C4 (PoDiagCaptureUsermodeStack.c)
 *     PoTraceSystemTimerResolution @ 0x1406A6594 (PoTraceSystemTimerResolution.c)
 *     ExAcquireTimeRefreshLock @ 0x1406A7200 (ExAcquireTimeRefreshLock.c)
 */

NTSTATUS __stdcall NtSetTimerResolution(ULONG RequestedResolution, BOOLEAN SetOrUnset, PULONG ActualResolution)
{
  ULONG v5; // r14d
  __int64 v6; // r8
  _KPROCESS *Process; // rbx
  NTSTATUS v8; // edi
  bool v9; // r15
  ULONG updated; // esi
  signed __int32 DirectoryTableBase_high; // eax
  signed __int32 v12; // ett
  __int16 v13; // si
  unsigned int v14; // edx
  char v15; // cl
  signed __int32 v17; // ett
  PVOID *v18; // rsi
  void *v19; // rcx

  v5 = RequestedResolution;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ActualResolution < 0x7FFFFFFF0000LL )
      v6 = (__int64)ActualResolution;
    *(_DWORD *)v6 = *(_DWORD *)v6;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = 0;
  v9 = 1;
  LOBYTE(RequestedResolution) = 1;
  ExAcquireTimeRefreshLock(RequestedResolution);
  updated = KeTimeIncrement;
  _m_prefetchw((char *)&Process[1].DirectoryTableBase + 4);
  DirectoryTableBase_high = HIDWORD(Process[1].DirectoryTableBase);
  if ( SetOrUnset )
  {
    do
    {
      v12 = DirectoryTableBase_high;
      DirectoryTableBase_high = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&Process[1].DirectoryTableBase + 1,
                                  DirectoryTableBase_high | 0x80001000,
                                  DirectoryTableBase_high);
    }
    while ( v12 != DirectoryTableBase_high );
    v13 = DirectoryTableBase_high;
    if ( DirectoryTableBase_high >= 0 )
      ExpInsertTimerResolutionEntry((__int64)Process);
    if ( (v13 & 0x1000) != 0 )
      v9 = v5 <= LODWORD(Process[2].ReadyListHead.Flink);
    else
      ++ExpTimerResolutionCount;
    if ( !Process[2].Affinity.Bitmap[19] || v5 < HIDWORD(Process[2].ReadyListHead.Flink) )
    {
      v18 = PoDiagCaptureUsermodeStack();
      if ( v18 )
      {
        v19 = (void *)Process[2].Affinity.Bitmap[19];
        if ( v19 )
          ExFreePoolWithTag(v19, 0x50455654u);
        Process[2].Affinity.Bitmap[19] = (unsigned __int64)v18;
        HIDWORD(Process[2].ReadyListHead.Flink) = v5;
      }
    }
    LODWORD(Process[2].ReadyListHead.Flink) = v5;
    PoTraceSystemTimerResolution(0LL, Process);
    v14 = v5;
    v15 = v9;
  }
  else
  {
    do
    {
      v17 = DirectoryTableBase_high;
      DirectoryTableBase_high = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&Process[1].DirectoryTableBase + 1,
                                  DirectoryTableBase_high & 0xFFFFEFFF,
                                  DirectoryTableBase_high);
    }
    while ( v17 != DirectoryTableBase_high );
    if ( (DirectoryTableBase_high & 0x1000) == 0 )
    {
      v8 = -1073741243;
      goto LABEL_15;
    }
    --ExpTimerResolutionCount;
    LODWORD(Process[2].ReadyListHead.Flink) = 0;
    PoTraceSystemTimerResolution(0LL, Process);
    v14 = 0;
    v15 = 0;
  }
  updated = ExpUpdateTimerResolution(v15, v14, 0LL);
LABEL_15:
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
  *ActualResolution = updated;
  return v8;
}
