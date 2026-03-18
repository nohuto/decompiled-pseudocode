/*
 * XREFs of KiDisableFgBoostDecayRegistryChangeHandler @ 0x1402A3330
 * Callers:
 *     <none>
 * Callees:
 *     KiRegisterForDisableFgBoostDecayRegistryNotification @ 0x14018B050 (KiRegisterForDisableFgBoostDecayRegistryNotification.c)
 *     KiGetDisableFgBoostDecayRegKeyHandle @ 0x14018B0D4 (KiGetDisableFgBoostDecayRegKeyHandle.c)
 *     RtlQueryImageFileKeyOption @ 0x1406DD260 (RtlQueryImageFileKeyOption.c)
 */

int KiDisableFgBoostDecayRegistryChangeHandler()
{
  int result; // eax

  result = KiGetDisableFgBoostDecayRegKeyHandle();
  if ( result >= 0 )
  {
    result = RtlQueryImageFileKeyOption(KiDisableFgBoostDecayRegistryHandle, 4, 0LL);
    if ( result >= 0 )
    {
      KiForegrounBoostVelocityFlag = 0;
      return KiRegisterForDisableFgBoostDecayRegistryNotification();
    }
  }
  return result;
}
