/*
 * XREFs of MmSizeOfMdl @ 0x14011A720
 * Callers:
 *     PopMarkHiberPhase @ 0x14057CFF4 (PopMarkHiberPhase.c)
 *     MmRotatePhysicalView @ 0x14066B930 (MmRotatePhysicalView.c)
 *     ExLockUserBuffer @ 0x14069E938 (ExLockUserBuffer.c)
 *     MiAllocatePerSessionProtos @ 0x1406C9210 (MiAllocatePerSessionProtos.c)
 *     ExInitializeLeapSecondData @ 0x140733FE0 (ExInitializeLeapSecondData.c)
 *     VslCreateSecureSection @ 0x140818110 (VslCreateSecureSection.c)
 *     VslObtainHotPatchUndoTable @ 0x140818B94 (VslObtainHotPatchUndoTable.c)
 *     NtLoadEnclaveData @ 0x14085AFD0 (NtLoadEnclaveData.c)
 *     PspCreateSecureThread @ 0x14088AB6C (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x1408AB3E0 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x1408DA400 (NtStartProfile.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall MmSizeOfMdl(PVOID Base, SIZE_T Length)
{
  return 8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48;
}
