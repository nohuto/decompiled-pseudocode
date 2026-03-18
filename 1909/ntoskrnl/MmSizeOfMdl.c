/*
 * XREFs of MmSizeOfMdl @ 0x1400F75A0
 * Callers:
 *     PopMarkHiberPhase @ 0x1405ACE94 (PopMarkHiberPhase.c)
 *     ExLockUserBuffer @ 0x1406A49BC (ExLockUserBuffer.c)
 *     MmRotatePhysicalView @ 0x1406A4CA0 (MmRotatePhysicalView.c)
 *     MiAllocatePerSessionProtos @ 0x1406E9D44 (MiAllocatePerSessionProtos.c)
 *     VslCreateSecureSection @ 0x140851430 (VslCreateSecureSection.c)
 *     VslObtainHotPatchUndoTable @ 0x140852258 (VslObtainHotPatchUndoTable.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140893BE0 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140893FA8 (MiLoadSectionIntoVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x140894EE0 (NtLoadEnclaveData.c)
 *     PspCreateSecureThread @ 0x1408C8470 (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x1408E7F34 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x140917BD0 (NtStartProfile.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall MmSizeOfMdl(PVOID Base, SIZE_T Length)
{
  return 8 * ((((unsigned __int16)Base & 0xFFF) + Length + 4095) >> 12) + 48;
}
