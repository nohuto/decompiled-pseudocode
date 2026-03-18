/*
 * XREFs of KiRegisterForDisableFgBoostDecayRegistryNotification @ 0x14018B050
 * Callers:
 *     KiDisableFgBoostDecayRegistryChangeHandler @ 0x1402A3330 (KiDisableFgBoostDecayRegistryChangeHandler.c)
 *     KeInitSystem @ 0x1409FD758 (KeInitSystem.c)
 * Callees:
 *     KiGetDisableFgBoostDecayRegKeyHandle @ 0x14018B0D4 (KiGetDisableFgBoostDecayRegKeyHandle.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x1401C2ED0 (ZwNotifyChangeKey.c)
 */

NTSTATUS KiRegisterForDisableFgBoostDecayRegistryNotification()
{
  NTSTATUS result; // eax

  result = KiGetDisableFgBoostDecayRegKeyHandle();
  if ( result >= 0 )
  {
    qword_14044DB58 = 0LL;
    *(_QWORD *)KiDisableFgBoostDecayRegistryChangeWork = 0LL;
    qword_14044DB50 = (__int64)KiDisableFgBoostDecayRegistryChangeHandler;
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
