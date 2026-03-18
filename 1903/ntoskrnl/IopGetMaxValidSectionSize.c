/*
 * XREFs of IopGetMaxValidSectionSize @ 0x140296D7C
 * Callers:
 *     KeCapturePersistentThreadState @ 0x140297B10 (KeCapturePersistentThreadState.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14001F520 (MmIsAddressValidEx.c)
 */

__int64 __fastcall IopGetMaxValidSectionSize(__int64 a1, unsigned int a2)
{
  unsigned int i; // ebx

  for ( i = 0; i < a2; ++i )
  {
    if ( !MmIsAddressValidEx(a1 + i) )
      break;
  }
  return i;
}
