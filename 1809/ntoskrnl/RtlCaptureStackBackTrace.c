/*
 * XREFs of RtlCaptureStackBackTrace @ 0x1400CCC90
 * Callers:
 *     PsBoostThreadIoEx @ 0x1400BBF70 (PsBoostThreadIoEx.c)
 *     MiShowBadMapper @ 0x1402A5944 (MiShowBadMapper.c)
 *     MiAddMdlTracker @ 0x1402A7EDC (MiAddMdlTracker.c)
 *     MiInsertPteTracker @ 0x1402CD9C0 (MiInsertPteTracker.c)
 *     ObpPushStackInfo @ 0x1402D2F68 (ObpPushStackInfo.c)
 *     RtlStdLogStackTrace @ 0x1402ECFB8 (RtlStdLogStackTrace.c)
 *     RtlGetCallersAddress @ 0x1402EF890 (RtlGetCallersAddress.c)
 *     RtlpHpHeapHandleError @ 0x1402FBAFC (RtlpHpHeapHandleError.c)
 *     SepGetStackTraceHash @ 0x1402FE9FC (SepGetStackTraceHash.c)
 *     ViKeLogCriticalRegionStackTrace @ 0x14030B0DC (ViKeLogCriticalRegionStackTrace.c)
 *     CmpLogDirtyVectorUse @ 0x1405A7DC8 (CmpLogDirtyVectorUse.c)
 *     ViPoolLogStackCallout @ 0x140924960 (ViPoolLogStackCallout.c)
 *     VfPendingFinishLogging @ 0x14093373C (VfPendingFinishLogging.c)
 *     ViFaultsInjectionNotification @ 0x140938C20 (ViFaultsInjectionNotification.c)
 *     VfCheckUserHandle @ 0x14093901C (VfCheckUserHandle.c)
 *     ViKeIrqlLogCommon @ 0x14093AEAC (ViKeIrqlLogCommon.c)
 *     VfDeadlockAcquireResource @ 0x14093B514 (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x14093C0E0 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x14093C260 (VfDeadlockReleaseResource.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x1400CCBB0 (RtlWalkFrameChain.c)
 */

USHORT __stdcall RtlCaptureStackBackTrace(
        ULONG FramesToSkip,
        ULONG FramesToCapture,
        PVOID *BackTrace,
        PULONG BackTraceHash)
{
  ULONG v4; // edi
  ULONG v7; // ebx
  ULONG v8; // eax
  unsigned int v9; // r8d
  ULONG v10; // edx
  unsigned int i; // ecx
  __int64 v13; // rax

  v4 = 0xFFFF;
  if ( FramesToCapture <= 0xFFFF )
    v4 = FramesToCapture;
  if ( FramesToSkip > 0xFE )
    return 0;
  v7 = FramesToSkip + 1;
  v8 = RtlWalkFrameChain(BackTrace, v4 + v7, v7 << 8);
  v9 = v8;
  if ( v8 <= v7 )
    return 0;
  v10 = 0;
  if ( BackTraceHash )
  {
    for ( i = 0; i < v4; v10 += LODWORD(BackTrace[v13]) )
    {
      if ( i + v7 >= v9 )
        break;
      v13 = i++;
    }
    *BackTraceHash = v10;
  }
  else
  {
    LOWORD(i) = v8 - v7;
  }
  return i;
}
