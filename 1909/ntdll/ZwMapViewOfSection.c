/*
 * XREFs of ZwMapViewOfSection @ 0x18009D390
 * Callers:
 *     LdrpMinimalMapModule @ 0x18002A0B0 (LdrpMinimalMapModule.c)
 *     CsrpConnectToServer @ 0x18004B854 (CsrpConnectToServer.c)
 *     LdrpMapResourceFile @ 0x180059A64 (LdrpMapResourceFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18005A6C4 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlCreateQueryDebugBuffer @ 0x18005ADA0 (RtlCreateQueryDebugBuffer.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18006798C (RtlpQueryExtendedHeapInformation.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x180075C58 (RtlpChangeQueryDebugBufferTarget.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x180079A68 (LdrpFindLoadedDllByMappingFile.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180089D30 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpMapCleanModuleView @ 0x1800D565C (LdrpMapCleanModuleView.c)
 *     RtlCreateProcessReflection @ 0x1800D5F30 (RtlCreateProcessReflection.c)
 *     AvrfMiniLoadDll @ 0x1800DA9B4 (AvrfMiniLoadDll.c)
 *     WerpCreateCrashDataSection @ 0x1800DC9B0 (WerpCreateCrashDataSection.c)
 *     RtlComputeImportTableHash @ 0x1800DF680 (RtlComputeImportTableHash.c)
 *     LdrpResMapFile @ 0x1800E2764 (LdrpResMapFile.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1800F03B0 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F04D0 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x1800F0F20 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1800F7314 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlHeapTrkInitialize @ 0x1800F77B0 (RtlHeapTrkInitialize.c)
 *     RtlpHeapTrkLeakCallback @ 0x1800F8340 (RtlpHeapTrkLeakCallback.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x1801029D0 (RtlpHpStackTraceSerializeRemote.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x180104578 (RtlpHpTagQueryHeapsRemote.c)
 *     PsspCaptureHandleTrace @ 0x180111168 (PsspCaptureHandleTrace.c)
 *     PsspCaptureIptTrace @ 0x180111360 (PsspCaptureIptTrace.c)
 *     PsspCaptureAuxiliaryPages @ 0x180111660 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation @ 0x1801119F0 (PsspCaptureVaSpaceInformation.c)
 *     PsspCaptureHandleInformation @ 0x180111ED4 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x180112938 (PsspCaptureThreadInformation.c)
 *     PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES @ 0x180112FEC (PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES.c)
 *     PsspWalkInfoClass_PSS_WALK_HANDLES @ 0x180113118 (PsspWalkInfoClass_PSS_WALK_HANDLES.c)
 *     PsspWalkInfoClass_PSS_WALK_THREADS @ 0x180113298 (PsspWalkInfoClass_PSS_WALK_THREADS.c)
 *     PsspWalkInfoClass_PSS_WALK_VA_SPACE @ 0x180113420 (PsspWalkInfoClass_PSS_WALK_VA_SPACE.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwMapViewOfSection(
        HANDLE SectionHandle,
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T CommitSize,
        PLARGE_INTEGER SectionOffset,
        PSIZE_T ViewSize,
        SECTION_INHERIT InheritDisposition,
        ULONG AllocationType,
        ULONG Win32Protect)
{
  NTSTATUS result; // eax

  result = 40;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
