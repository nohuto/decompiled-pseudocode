/*
 * XREFs of KiEncls @ 0x1401BCC80
 * Callers:
 *     KeAddEnclavePage @ 0x14028F6B4 (KeAddEnclavePage.c)
 *     KeBlockEnclavePage @ 0x14028F834 (KeBlockEnclavePage.c)
 *     KeCanChangeEnclavePageProtection @ 0x14028F884 (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x14028F94C (KeChangeEnclavePageProtection.c)
 *     KeCreateEnclaveMetadataPage @ 0x14028FA54 (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x14028FA94 (KeOutPageEnclavePage.c)
 *     KeRemoveEnclavePage @ 0x14028FB30 (KeRemoveEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x14028FB74 (KeTrackEnclaveTbFlush.c)
 *     KeCreateEnclave @ 0x1408438A0 (KeCreateEnclave.c)
 *     KeDebugWriteEnclaveMemory @ 0x140843A68 (KeDebugWriteEnclaveMemory.c)
 *     KeInitializeEnclave @ 0x140843AF4 (KeInitializeEnclave.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiEncls(unsigned int a1)
{
  __int64 result; // rax

  result = a1;
  __asm { encls }
  return result;
}
