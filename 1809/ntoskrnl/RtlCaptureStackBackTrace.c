/*
 * XREFs of RtlCaptureStackBackTrace @ 0x1400CCD30
 * Callers:
 *     PsBoostThreadIoEx @ 0x1400BBED0 (PsBoostThreadIoEx.c)
 *     MiShowBadMapper @ 0x1402A5C34 (MiShowBadMapper.c)
 *     MiAddMdlTracker @ 0x1402A81CC (MiAddMdlTracker.c)
 *     MiInsertPteTracker @ 0x1402CDCB0 (MiInsertPteTracker.c)
 *     ObpPushStackInfo @ 0x1402D3258 (ObpPushStackInfo.c)
 *     RtlStdLogStackTrace @ 0x1402ED2A8 (RtlStdLogStackTrace.c)
 *     RtlGetCallersAddress @ 0x1402EFB80 (RtlGetCallersAddress.c)
 *     RtlpHpHeapHandleError @ 0x1402FBDEC (RtlpHpHeapHandleError.c)
 *     SepGetStackTraceHash @ 0x1402FECEC (SepGetStackTraceHash.c)
 *     ViKeLogCriticalRegionStackTrace @ 0x14030B3CC (ViKeLogCriticalRegionStackTrace.c)
 *     CmpLogDirtyVectorUse @ 0x1405A8DC8 (CmpLogDirtyVectorUse.c)
 *     ViPoolLogStackCallout @ 0x140925960 (ViPoolLogStackCallout.c)
 *     VfPendingFinishLogging @ 0x14093473C (VfPendingFinishLogging.c)
 *     ViFaultsInjectionNotification @ 0x140939C20 (ViFaultsInjectionNotification.c)
 *     VfCheckUserHandle @ 0x14093A01C (VfCheckUserHandle.c)
 *     ViKeIrqlLogCommon @ 0x14093BEAC (ViKeIrqlLogCommon.c)
 *     VfDeadlockAcquireResource @ 0x14093C514 (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x14093D0E0 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x14093D260 (VfDeadlockReleaseResource.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x1400CCC50 (RtlWalkFrameChain.c)
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
