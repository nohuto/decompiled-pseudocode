/*
 * XREFs of KiEncls @ 0x1401BCCA0
 * Callers:
 *     KeAddEnclavePage @ 0x14028F7B4 (KeAddEnclavePage.c)
 *     KeBlockEnclavePage @ 0x14028F934 (KeBlockEnclavePage.c)
 *     KeCanChangeEnclavePageProtection @ 0x14028F984 (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x14028FA4C (KeChangeEnclavePageProtection.c)
 *     KeCreateEnclaveMetadataPage @ 0x14028FB54 (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x14028FB94 (KeOutPageEnclavePage.c)
 *     KeRemoveEnclavePage @ 0x14028FC30 (KeRemoveEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x14028FC74 (KeTrackEnclaveTbFlush.c)
 *     KeCreateEnclave @ 0x140843880 (KeCreateEnclave.c)
 *     KeDebugWriteEnclaveMemory @ 0x140843A48 (KeDebugWriteEnclaveMemory.c)
 *     KeInitializeEnclave @ 0x140843AD4 (KeInitializeEnclave.c)
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
