/*
 * XREFs of MmSizeOfMdl @ 0x14011A740
 * Callers:
 *     PopMarkHiberPhase @ 0x14057CFF4 (PopMarkHiberPhase.c)
 *     MmRotatePhysicalView @ 0x14066B910 (MmRotatePhysicalView.c)
 *     ExLockUserBuffer @ 0x14069E918 (ExLockUserBuffer.c)
 *     MiAllocatePerSessionProtos @ 0x1406C91F0 (MiAllocatePerSessionProtos.c)
 *     ExInitializeLeapSecondData @ 0x140733FC0 (ExInitializeLeapSecondData.c)
 *     VslCreateSecureSection @ 0x1408180F0 (VslCreateSecureSection.c)
 *     VslObtainHotPatchUndoTable @ 0x140818B74 (VslObtainHotPatchUndoTable.c)
 *     NtLoadEnclaveData @ 0x14085AFB0 (NtLoadEnclaveData.c)
 *     PspCreateSecureThread @ 0x14088AB4C (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x1408AB3C0 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x1408DA3E0 (NtStartProfile.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall MmSizeOfMdl(PVOID Base, SIZE_T Length)
{
  return 8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48;
}
