/*
 * XREFs of NtCreateSection @ 0x1800A0C20
 * Callers:
 *     LdrpMapResourceFile @ 0x18002A918 (LdrpMapResourceFile.c)
 *     LdrpMapDllNtFileName @ 0x18002ABA0 (LdrpMapDllNtFileName.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18003451C (RtlpFileIsWin32WithRCManifest.c)
 *     CsrpConnectToServer @ 0x18005D994 (CsrpConnectToServer.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x180076D40 (LdrpFindLoadedDllByMappingFile.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18007B16C (RtlpQueryExtendedHeapInformation.c)
 *     RtlCreateQueryDebugBuffer @ 0x180085F30 (RtlCreateQueryDebugBuffer.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008C7B0 (LdrVerifyImageMatchesChecksumEx.c)
 *     RtlCreateProcessReflection @ 0x1800D7C30 (RtlCreateProcessReflection.c)
 *     AvrfMiniLoadDll @ 0x1800DCAA8 (AvrfMiniLoadDll.c)
 *     WerpCreateCrashDataSection @ 0x1800DECF0 (WerpCreateCrashDataSection.c)
 *     RtlComputeImportTableHash @ 0x1800E1A00 (RtlComputeImportTableHash.c)
 *     LdrpResMapFile @ 0x1800E53F4 (LdrpResMapFile.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1800F9620 (RtlpOpenAndMapCustomCultureFile.c)
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

__int64 NtCreateSection()
{
  __int64 result; // rax

  result = 74LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
