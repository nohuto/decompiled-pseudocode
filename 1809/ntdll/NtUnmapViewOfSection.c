/*
 * XREFs of NtUnmapViewOfSection @ 0x1800A0840
 * Callers:
 *     LdrpSnapModule @ 0x1800072B0 (LdrpSnapModule.c)
 *     LdrpMinimalMapModule @ 0x180021EDC (LdrpMinimalMapModule.c)
 *     LdrpMapResourceFile @ 0x18002A918 (LdrpMapResourceFile.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18002B5A0 (LdrpSetAlternateResourceModuleHandle.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18003451C (RtlpFileIsWin32WithRCManifest.c)
 *     LdrMapAndVerifyResourceFile @ 0x18003A040 (LdrMapAndVerifyResourceFile.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180055B60 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpUnmapModule @ 0x180076BA8 (LdrpUnmapModule.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x180076D50 (LdrpFindLoadedDllByMappingFile.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18007B17C (RtlpQueryExtendedHeapInformation.c)
 *     RtlDestroyQueryDebugBuffer @ 0x18007DE10 (RtlDestroyQueryDebugBuffer.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x18007DE48 (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlGetLocaleFileMappingAddress @ 0x180080C00 (RtlGetLocaleFileMappingAddress.c)
 *     RtlCreateQueryDebugBuffer @ 0x180085F40 (RtlCreateQueryDebugBuffer.c)
 *     PssNtFreeWalkMarker @ 0x18008A5F0 (PssNtFreeWalkMarker.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008C7C0 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrFlushAlternateResourceModules @ 0x18008E090 (LdrFlushAlternateResourceModules.c)
 *     LdrResRelease @ 0x18008F700 (LdrResRelease.c)
 *     RtlCreateProcessReflection @ 0x1800D7C30 (RtlCreateProcessReflection.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800DA190 (RtlpQueryProcessDebugInformationRemote.c)
 *     RtlpSetProcessDebugInformationRemote @ 0x1800DA390 (RtlpSetProcessDebugInformationRemote.c)
 *     AvrfMiniLoadDll @ 0x1800DCAA8 (AvrfMiniLoadDll.c)
 *     RtlReportExceptionEx @ 0x1800DDDE0 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DE2B0 (RtlReportExceptionHelper.c)
 *     WerpCreateCrashDataSection @ 0x1800DECF0 (WerpCreateCrashDataSection.c)
 *     RtlComputeImportTableHash @ 0x1800E1A00 (RtlComputeImportTableHash.c)
 *     LdrpSpecialCacheTypeHandle @ 0x1800E2C70 (LdrpSpecialCacheTypeHandle.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1800F3200 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F3320 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x1800F3B70 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpGetCustomCultureData @ 0x1800F9110 (RtlpGetCustomCultureData.c)
 *     RtlHeapTrkInitialize @ 0x1800F9AC0 (RtlHeapTrkInitialize.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x1801052F4 (RtlpHpStackTraceSerializeRemote.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x180107028 (RtlpHpTagQueryHeapsRemote.c)
 *     PsspCaptureHandleTrace @ 0x180112254 (PsspCaptureHandleTrace.c)
 *     PsspCaptureIptTrace @ 0x18011244C (PsspCaptureIptTrace.c)
 *     PsspCaptureAuxiliaryPages @ 0x18011274C (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation @ 0x180112ADC (PsspCaptureVaSpaceInformation.c)
 *     PsspCaptureHandleInformation @ 0x18011302C (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x180113AA8 (PsspCaptureThreadInformation.c)
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
