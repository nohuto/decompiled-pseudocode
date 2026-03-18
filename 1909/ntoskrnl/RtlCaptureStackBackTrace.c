/*
 * XREFs of RtlCaptureStackBackTrace @ 0x140017560
 * Callers:
 *     PsBoostThreadIoEx @ 0x14003DD10 (PsBoostThreadIoEx.c)
 *     MiShowBadMapper @ 0x1402BCB38 (MiShowBadMapper.c)
 *     MiAddMdlTracker @ 0x1402BF5AC (MiAddMdlTracker.c)
 *     MiInsertPteTracker @ 0x1402E7A3C (MiInsertPteTracker.c)
 *     ObpPushStackInfo @ 0x1402ED44C (ObpPushStackInfo.c)
 *     RtlStdLogStackTrace @ 0x14030B2C8 (RtlStdLogStackTrace.c)
 *     RtlGetCallersAddress @ 0x14030DF90 (RtlGetCallersAddress.c)
 *     RtlpHpHeapHandleError @ 0x140319F90 (RtlpHpHeapHandleError.c)
 *     SepGetStackTraceHash @ 0x14031C75C (SepGetStackTraceHash.c)
 *     ViKeLogCriticalRegionStackTrace @ 0x1403288E8 (ViKeLogCriticalRegionStackTrace.c)
 *     CmpLogDirtyVectorUse @ 0x1406413E4 (CmpLogDirtyVectorUse.c)
 *     ViPoolLogStackCallout @ 0x140963AE0 (ViPoolLogStackCallout.c)
 *     VfPendingFinishLogging @ 0x140972D80 (VfPendingFinishLogging.c)
 *     VfCheckUserHandle @ 0x140977664 (VfCheckUserHandle.c)
 *     ViKeIrqlLogCommon @ 0x1409794DC (ViKeIrqlLogCommon.c)
 *     ViFaultsInjectionNotification @ 0x14097A540 (ViFaultsInjectionNotification.c)
 *     VfDeadlockAcquireResource @ 0x14097A93C (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x14097B508 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x14097B688 (VfDeadlockReleaseResource.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x140017620 (RtlWalkFrameChain.c)
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
