/*
 * XREFs of IopGetMaxValidSectionSize @ 0x140296ADC
 * Callers:
 *     KeCapturePersistentThreadState @ 0x140297870 (KeCapturePersistentThreadState.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14001F910 (MmIsAddressValidEx.c)
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
