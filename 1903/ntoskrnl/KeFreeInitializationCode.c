/*
 * XREFs of KeFreeInitializationCode @ 0x1409D0B2C
 * Callers:
 *     KeInitSystem @ 0x1409FD23C (KeInitSystem.c)
 * Callees:
 *     KiSwInterruptPresent @ 0x140A21FFC (KiSwInterruptPresent.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140A22600 (MmStrongCodeGuaranteesEnforced.c)
 *     MmDiscardDriverSection @ 0x140A3D50C (MmDiscardDriverSection.c)
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
