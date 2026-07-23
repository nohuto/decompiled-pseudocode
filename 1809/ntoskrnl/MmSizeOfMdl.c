/*
 * XREFs of MmSizeOfMdl @ 0x14011A7B0
 * Callers:
 *     PopMarkHiberPhase @ 0x14057DFF4 (PopMarkHiberPhase.c)
 *     MmRotatePhysicalView @ 0x14066CAD0 (MmRotatePhysicalView.c)
 *     ExLockUserBuffer @ 0x14069FBD8 (ExLockUserBuffer.c)
 *     MiAllocatePerSessionProtos @ 0x1406CA490 (MiAllocatePerSessionProtos.c)
 *     ExInitializeLeapSecondData @ 0x1407351B0 (ExInitializeLeapSecondData.c)
 *     VslCreateSecureSection @ 0x1408192F0 (VslCreateSecureSection.c)
 *     VslObtainHotPatchUndoTable @ 0x140819D74 (VslObtainHotPatchUndoTable.c)
 *     NtLoadEnclaveData @ 0x14085C210 (NtLoadEnclaveData.c)
 *     PspCreateSecureThread @ 0x14088BDAC (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x1408AC620 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x1408DB6A0 (NtStartProfile.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall MmSizeOfMdl(PVOID Base, SIZE_T Length)
{
  return 8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48;
}
