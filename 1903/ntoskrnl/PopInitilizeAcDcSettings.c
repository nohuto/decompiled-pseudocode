/*
 * XREFs of PopInitilizeAcDcSettings @ 0x14018BADC
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14073857C (PopBatteryApplyCompositeState.c)
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     PopSetNotificationWork @ 0x1400EE750 (PopSetNotificationWork.c)
 *     PopSetPowerSettingValue @ 0x1406A12E8 (PopSetPowerSettingValue.c)
 *     PopFindPowerSettingConfiguration @ 0x1406A177C (PopFindPowerSettingConfiguration.c)
 */

void PopInitilizeAcDcSettings()
{
  char v0; // bl
  _DWORD *PowerSettingConfiguration; // rax
  int Src; // [rsp+40h] [rbp+8h] BYREF

  Src = 0;
  PopSetPowerSettingValue(&GUID_ACDC_POWER_SOURCE, &Src);
  Src = 1;
  PopSetPowerSettingValue(&GUID_ACDC_POWER_SOURCE, &Src);
  v0 = 0;
  ExAcquireFastMutex(&PopSettingLock);
  PowerSettingConfiguration = (_DWORD *)PopFindPowerSettingConfiguration(&GUID_ACDC_POWER_SOURCE, 0xFFFFFFFFLL);
  if ( PowerSettingConfiguration[14] || PowerSettingConfiguration[15] )
  {
    PowerSettingConfiguration[13] |= 1u;
    v0 = 1;
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  if ( (unsigned int)PopOsInitPhase >= 3 )
  {
    if ( v0 )
      PopSetNotificationWork(0x80u);
    PopSetNotificationWork(0x20u);
  }
}
