/*
 * XREFs of PopEsPublishState @ 0x140762C84
 * Callers:
 *     PopEsWorker @ 0x14071C880 (PopEsWorker.c)
 *     PopEsUpdateState @ 0x14071C9B4 (PopEsUpdateState.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1401BBA70 (ZwUpdateWnfStateData.c)
 *     PopSetPowerSettingValueAcDc @ 0x14058AA3C (PopSetPowerSettingValueAcDc.c)
 */

__int64 PopEsPublishState()
{
  int v0; // eax
  unsigned __int64 v2; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0xFFFFFFFF00000000uLL;
  v0 = 1;
  if ( PopEsState == 1 )
    v0 = 3;
  LODWORD(v2) = v0;
  ZwUpdateWnfStateData((__int64)&WNF_PO_ENERGY_SAVER_STATE, (__int64)&v2, 8LL);
  return PopSetPowerSettingValueAcDc(&GUID_POWER_SAVING_STATUS, 4LL, &PopEsState);
}
