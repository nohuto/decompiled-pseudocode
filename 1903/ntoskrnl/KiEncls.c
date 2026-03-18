/*
 * XREFs of KiEncls @ 0x1401C49A0
 * Callers:
 *     KeAddEnclavePage @ 0x1402A61B4 (KeAddEnclavePage.c)
 *     KeBlockEnclavePage @ 0x1402A632C (KeBlockEnclavePage.c)
 *     KeCanChangeEnclavePageProtection @ 0x1402A637C (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x1402A6444 (KeChangeEnclavePageProtection.c)
 *     KeCreateEnclaveMetadataPage @ 0x1402A654C (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x1402A658C (KeOutPageEnclavePage.c)
 *     KeRemoveEnclavePage @ 0x1402A6650 (KeRemoveEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x1402A6694 (KeTrackEnclaveTbFlush.c)
 *     KeCreateEnclave @ 0x14087F33C (KeCreateEnclave.c)
 *     KeDebugWriteEnclaveMemory @ 0x14087F4F8 (KeDebugWriteEnclaveMemory.c)
 *     KeInitializeEnclave @ 0x14087F584 (KeInitializeEnclave.c)
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
