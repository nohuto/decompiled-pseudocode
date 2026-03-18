/*
 * XREFs of KiEncls @ 0x1401C5520
 * Callers:
 *     KeAddEnclavePage @ 0x1402A5F14 (KeAddEnclavePage.c)
 *     KeBlockEnclavePage @ 0x1402A608C (KeBlockEnclavePage.c)
 *     KeCanChangeEnclavePageProtection @ 0x1402A60DC (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x1402A61A4 (KeChangeEnclavePageProtection.c)
 *     KeCreateEnclaveMetadataPage @ 0x1402A62AC (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x1402A62EC (KeOutPageEnclavePage.c)
 *     KeRemoveEnclavePage @ 0x1402A63B0 (KeRemoveEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x1402A63F4 (KeTrackEnclaveTbFlush.c)
 *     KeCreateEnclave @ 0x14087EA3C (KeCreateEnclave.c)
 *     KeDebugWriteEnclaveMemory @ 0x14087EBF8 (KeDebugWriteEnclaveMemory.c)
 *     KeInitializeEnclave @ 0x14087EC84 (KeInitializeEnclave.c)
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
