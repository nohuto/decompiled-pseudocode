/*
 * XREFs of KiDisableFgBoostDecayRegistryChangeHandler @ 0x1402A35D0
 * Callers:
 *     <none>
 * Callees:
 *     KiRegisterForDisableFgBoostDecayRegistryNotification @ 0x14018A6C0 (KiRegisterForDisableFgBoostDecayRegistryNotification.c)
 *     KiGetDisableFgBoostDecayRegKeyHandle @ 0x14018A744 (KiGetDisableFgBoostDecayRegKeyHandle.c)
 *     RtlQueryImageFileKeyOption @ 0x1406DC5E0 (RtlQueryImageFileKeyOption.c)
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
