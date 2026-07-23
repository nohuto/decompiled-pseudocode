/*
 * XREFs of KiEncls @ 0x1401BCE00
 * Callers:
 *     KeAddEnclavePage @ 0x14028F9A4 (KeAddEnclavePage.c)
 *     KeBlockEnclavePage @ 0x14028FB24 (KeBlockEnclavePage.c)
 *     KeCanChangeEnclavePageProtection @ 0x14028FB74 (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x14028FC3C (KeChangeEnclavePageProtection.c)
 *     KeCreateEnclaveMetadataPage @ 0x14028FD44 (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x14028FD84 (KeOutPageEnclavePage.c)
 *     KeRemoveEnclavePage @ 0x14028FE20 (KeRemoveEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x14028FE64 (KeTrackEnclaveTbFlush.c)
 *     KeCreateEnclave @ 0x140844AE0 (KeCreateEnclave.c)
 *     KeDebugWriteEnclaveMemory @ 0x140844CA8 (KeDebugWriteEnclaveMemory.c)
 *     KeInitializeEnclave @ 0x140844D34 (KeInitializeEnclave.c)
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
