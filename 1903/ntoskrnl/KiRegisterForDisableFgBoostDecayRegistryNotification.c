/*
 * XREFs of KiRegisterForDisableFgBoostDecayRegistryNotification @ 0x14018A6C0
 * Callers:
 *     KiDisableFgBoostDecayRegistryChangeHandler @ 0x1402A35D0 (KiDisableFgBoostDecayRegistryChangeHandler.c)
 *     KeInitSystem @ 0x1409FD23C (KeInitSystem.c)
 * Callees:
 *     KiGetDisableFgBoostDecayRegKeyHandle @ 0x14018A744 (KiGetDisableFgBoostDecayRegKeyHandle.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x1401C2350 (ZwNotifyChangeKey.c)
 */

NTSTATUS KiRegisterForDisableFgBoostDecayRegistryNotification()
{
  NTSTATUS result; // eax

  result = KiGetDisableFgBoostDecayRegKeyHandle();
  if ( result >= 0 )
  {
    qword_14044DE58 = 0LL;
    *(_QWORD *)KiDisableFgBoostDecayRegistryChangeWork = 0LL;
    qword_14044DE50 = (__int64)KiDisableFgBoostDecayRegistryChangeHandler;
    result = ZwNotifyChangeKey(
               KiDisableFgBoostDecayRegistryHandle,
               0LL,
               KiDisableFgBoostDecayRegistryChangeWork,
               (PVOID)1,
               &KiDisableFgBoostDecayRegistryChangeIoStatus,
               4u,
               0,
               0LL,
               0,
               1u);
    if ( result < 0 )
    {
      result = ZwClose(KiDisableFgBoostDecayRegistryHandle);
      KiDisableFgBoostDecayRegistryHandle = 0LL;
    }
  }
  return result;
}
