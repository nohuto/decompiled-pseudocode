/*
 * XREFs of HvlWnfUpdateStartupState @ 0x140193FD4
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1401BBBD0 (ZwUpdateWnfStateData.c)
 */

NTSTATUS HvlWnfUpdateStartupState()
{
  NTSTATUS result; // eax

  result = HvlpFlags;
  if ( (HvlpFlags & 2) != 0 )
    return ZwUpdateWnfStateData(&WNF_HVL_CPU_MGMT_PARTITION, 0LL, 0, 0LL, 0LL, 0, 0);
  return result;
}
