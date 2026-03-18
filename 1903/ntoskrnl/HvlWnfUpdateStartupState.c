/*
 * XREFs of HvlWnfUpdateStartupState @ 0x14019E5F0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1401C39D0 (ZwUpdateWnfStateData.c)
 */

__int64 HvlWnfUpdateStartupState()
{
  __int64 result; // rax

  result = HvlpFlags;
  if ( (HvlpFlags & 2) != 0 )
    return ZwUpdateWnfStateData(&WNF_HVL_CPU_MGMT_PARTITION, 0LL, 0LL);
  return result;
}
