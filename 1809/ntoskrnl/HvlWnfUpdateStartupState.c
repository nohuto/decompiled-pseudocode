/*
 * XREFs of HvlWnfUpdateStartupState @ 0x140193E74
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1401BBA50 (ZwUpdateWnfStateData.c)
 */

__int64 HvlWnfUpdateStartupState()
{
  __int64 result; // rax

  result = (unsigned int)HvlpFlags;
  if ( (HvlpFlags & 2) != 0 )
    return ZwUpdateWnfStateData(&WNF_HVL_CPU_MGMT_PARTITION, 0LL, 0LL, 0LL, 0LL, 0, 0);
  return result;
}
