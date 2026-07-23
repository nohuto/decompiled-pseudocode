/*
 * XREFs of NtUnmapViewOfSection @ 0x18009D3D0
 * Callers:
 *     LdrpSnapModule @ 0x18001C610 (LdrpSnapModule.c)
 *     LdrpMinimalMapModule @ 0x18002A0B0 (LdrpMinimalMapModule.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x180059490 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrMapAndVerifyResourceFile @ 0x180059950 (LdrMapAndVerifyResourceFile.c)
 *     LdrpMapResourceFile @ 0x180059A64 (LdrpMapResourceFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18005A6C4 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlCreateQueryDebugBuffer @ 0x18005ADA0 (RtlCreateQueryDebugBuffer.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18006798C (RtlpQueryExtendedHeapInformation.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18006F7B0 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpUnmapModule @ 0x180070468 (LdrpUnmapModule.c)
 *     RtlDestroyQueryDebugBuffer @ 0x180075C20 (RtlDestroyQueryDebugBuffer.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x180075C58 (RtlpChangeQueryDebugBufferTarget.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x180079A68 (LdrpFindLoadedDllByMappingFile.c)
 *     RtlGetLocaleFileMappingAddress @ 0x18007BB10 (RtlGetLocaleFileMappingAddress.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180089D30 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrFlushAlternateResourceModules @ 0x18008B0A0 (LdrFlushAlternateResourceModules.c)
 *     LdrResRelease @ 0x18008C200 (LdrResRelease.c)
 *     RtlCreateProcessReflection @ 0x1800D5F30 (RtlCreateProcessReflection.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800D80E0 (RtlpQueryProcessDebugInformationRemote.c)
 *     RtlpSetProcessDebugInformationRemote @ 0x1800D82E0 (RtlpSetProcessDebugInformationRemote.c)
 *     AvrfMiniLoadDll @ 0x1800DA9B4 (AvrfMiniLoadDll.c)
 *     RtlReportExceptionEx @ 0x1800DBAB0 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DBF80 (RtlReportExceptionHelper.c)
 *     WerpCreateCrashDataSection @ 0x1800DC9B0 (WerpCreateCrashDataSection.c)
 *     RtlComputeImportTableHash @ 0x1800DF680 (RtlComputeImportTableHash.c)
 *     LdrpSpecialCacheTypeHandle @ 0x1800E0818 (LdrpSpecialCacheTypeHandle.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1800F03B0 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F04D0 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x1800F0F20 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpGetCustomCultureData @ 0x1800F6D60 (RtlpGetCustomCultureData.c)
 *     RtlHeapTrkInitialize @ 0x1800F77B0 (RtlHeapTrkInitialize.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x1801029D0 (RtlpHpStackTraceSerializeRemote.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x180104578 (RtlpHpTagQueryHeapsRemote.c)
 *     PssNtFreeWalkMarker @ 0x180110BC0 (PssNtFreeWalkMarker.c)
 *     PsspCaptureHandleTrace @ 0x180111168 (PsspCaptureHandleTrace.c)
 *     PsspCaptureIptTrace @ 0x180111360 (PsspCaptureIptTrace.c)
 *     PsspCaptureAuxiliaryPages @ 0x180111660 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation @ 0x1801119F0 (PsspCaptureVaSpaceInformation.c)
 *     PsspCaptureHandleInformation @ 0x180111ED4 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x180112938 (PsspCaptureThreadInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  NTSTATUS result; // eax

  result = 42;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
