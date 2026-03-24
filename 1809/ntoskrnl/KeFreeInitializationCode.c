/*
 * XREFs of KeFreeInitializationCode @ 0x14098EB24
 * Callers:
 *     KeInitSystem @ 0x1409C4988 (KeInitSystem.c)
 * Callees:
 *     KiSwInterruptPresent @ 0x1409DE434 (KiSwInterruptPresent.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x1409DE8B8 (MmStrongCodeGuaranteesEnforced.c)
 *     MmDiscardDriverSection @ 0x1409F7A3C (MmDiscardDriverSection.c)
 */

__int64 KeFreeInitializationCode()
{
  __int64 result; // rax

  result = MmStrongCodeGuaranteesEnforced();
  if ( !(_DWORD)result )
  {
    result = KiSwInterruptPresent();
    if ( (int)result < 0 && !__29 )
      return MmDiscardDriverSection(sub_140349570);
  }
  return result;
}
