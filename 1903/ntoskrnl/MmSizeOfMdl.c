/*
 * XREFs of MmSizeOfMdl @ 0x140119480
 * Callers:
 *     PopMarkHiberPhase @ 0x1405ACEB4 (PopMarkHiberPhase.c)
 *     ExLockUserBuffer @ 0x1406BF9BC (ExLockUserBuffer.c)
 *     MmRotatePhysicalView @ 0x1406BFCA0 (MmRotatePhysicalView.c)
 *     MiAllocatePerSessionProtos @ 0x1406E8AF8 (MiAllocatePerSessionProtos.c)
 *     VslCreateSecureSection @ 0x140851D30 (VslCreateSecureSection.c)
 *     VslObtainHotPatchUndoTable @ 0x140852B58 (VslObtainHotPatchUndoTable.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408943C0 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140894788 (MiLoadSectionIntoVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x1408956C0 (NtLoadEnclaveData.c)
 *     PspCreateSecureThread @ 0x1408C8B90 (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x1408E862C (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x140918170 (NtStartProfile.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall MmSizeOfMdl(PVOID Base, SIZE_T Length)
{
  return 8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48;
}
