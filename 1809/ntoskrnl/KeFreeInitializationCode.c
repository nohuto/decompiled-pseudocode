/*
 * XREFs of KeFreeInitializationCode @ 0x14098FB24
 * Callers:
 *     KeInitSystem @ 0x1409C5988 (KeInitSystem.c)
 * Callees:
 *     KiSwInterruptPresent @ 0x1409DF434 (KiSwInterruptPresent.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x1409DF8B8 (MmStrongCodeGuaranteesEnforced.c)
 *     MmDiscardDriverSection @ 0x1409F8A3C (MmDiscardDriverSection.c)
 */

__int64 KeFreeInitializationCode()
{
  __int64 result; // rax

  result = MmStrongCodeGuaranteesEnforced();
  if ( !(_DWORD)result )
  {
    result = KiSwInterruptPresent();
    if ( (int)result < 0 && !__29 )
      return MmDiscardDriverSection(sub_14034A570);
  }
  return result;
}
