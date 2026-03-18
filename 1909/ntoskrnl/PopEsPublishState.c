/*
 * XREFs of PopEsPublishState @ 0x14078BFA0
 * Callers:
 *     PopEsWorker @ 0x14073C810 (PopEsWorker.c)
 *     PopEsUpdateState @ 0x14073C918 (PopEsUpdateState.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 *     PopSetPowerSettingValueAcDc @ 0x14069D520 (PopSetPowerSettingValueAcDc.c)
 */

__int64 PopEsPublishState()
{
  int v0; // eax
  int v2; // [rsp+50h] [rbp+8h] BYREF
  int v3; // [rsp+54h] [rbp+Ch]

  v3 = -1;
  v0 = 1;
  if ( PopEsState == 1 )
    v0 = 3;
  v2 = v0;
  ZwUpdateWnfStateData((__int64)&WNF_PO_ENERGY_SAVER_STATE, (__int64)&v2, 8LL);
  return PopSetPowerSettingValueAcDc(&GUID_POWER_SAVING_STATUS, 4LL, &PopEsState);
}
