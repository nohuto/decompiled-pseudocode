/*
 * XREFs of ZwMapViewOfSection @ 0x1800A07E0
 * Callers:
 *     LdrpMinimalMapModule @ 0x180021EDC (LdrpMinimalMapModule.c)
 *     LdrpMapResourceFile @ 0x18002A918 (LdrpMapResourceFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18003451C (RtlpFileIsWin32WithRCManifest.c)
 *     CsrpConnectToServer @ 0x18005D994 (CsrpConnectToServer.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x180076D40 (LdrpFindLoadedDllByMappingFile.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18007B16C (RtlpQueryExtendedHeapInformation.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x18007DE38 (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlCreateQueryDebugBuffer @ 0x180085F30 (RtlCreateQueryDebugBuffer.c)
 *     PsspWalkInfoClass_PSS_WALK_VA_SPACE @ 0x18008993C (PsspWalkInfoClass_PSS_WALK_VA_SPACE.c)
 *     PsspWalkInfoClass_PSS_WALK_HANDLES @ 0x180089A98 (PsspWalkInfoClass_PSS_WALK_HANDLES.c)
 *     PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES @ 0x180089BC0 (PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES.c)
 *     PsspWalkInfoClass_PSS_WALK_THREADS @ 0x180089C98 (PsspWalkInfoClass_PSS_WALK_THREADS.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008C7B0 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpMapCleanModuleView @ 0x1800D76D4 (LdrpMapCleanModuleView.c)
 *     RtlCreateProcessReflection @ 0x1800D7C30 (RtlCreateProcessReflection.c)
 *     AvrfMiniLoadDll @ 0x1800DCAA8 (AvrfMiniLoadDll.c)
 *     WerpCreateCrashDataSection @ 0x1800DECF0 (WerpCreateCrashDataSection.c)
 *     RtlComputeImportTableHash @ 0x1800E1A00 (RtlComputeImportTableHash.c)
 *     LdrpResMapFile @ 0x1800E53F4 (LdrpResMapFile.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1800F3200 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F3320 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x1800F3B70 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1800F9620 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlHeapTrkInitialize @ 0x1800F9AC0 (RtlHeapTrkInitialize.c)
 *     RtlpHeapTrkLeakCallback @ 0x1800FA660 (RtlpHeapTrkLeakCallback.c)
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

__int64 ZwMapViewOfSection()
{
  __int64 result; // rax

  result = 40LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
