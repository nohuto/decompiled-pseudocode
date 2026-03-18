/*
 * XREFs of MmGetMaximumUserAddress @ 0x1402A5464
 * Callers:
 *     NtSetInformationProcess @ 0x140671C60 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MmGetMaximumUserAddress()
{
  return KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[18];
}
