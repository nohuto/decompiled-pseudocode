/*
 * XREFs of KeFreeInitializationCode @ 0x1409D0B2C
 * Callers:
 *     KeInitSystem @ 0x1409FD758 (KeInitSystem.c)
 * Callees:
 *     KiSwInterruptPresent @ 0x140A220DC (KiSwInterruptPresent.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140A226E0 (MmStrongCodeGuaranteesEnforced.c)
 *     MmDiscardDriverSection @ 0x140A3D2DC (MmDiscardDriverSection.c)
 */

__int64 KeFreeInitializationCode()
{
  __int64 result; // rax

  result = MmStrongCodeGuaranteesEnforced();
  if ( !(_DWORD)result )
  {
    result = KiSwInterruptPresent();
    if ( (int)result < 0 && !__31 )
      return MmDiscardDriverSection(sub_14036BD00);
  }
  return result;
}
