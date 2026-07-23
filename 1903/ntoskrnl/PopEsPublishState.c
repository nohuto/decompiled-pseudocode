/*
 * XREFs of PopEsPublishState @ 0x140789B40
 * Callers:
 *     PopEsWorker @ 0x14073A580 (PopEsWorker.c)
 *     PopEsUpdateState @ 0x14073A688 (PopEsUpdateState.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1401C39D0 (ZwUpdateWnfStateData.c)
 *     PopSetPowerSettingValueAcDc @ 0x1406A09DC (PopSetPowerSettingValueAcDc.c)
 */

__int64 PopEsPublishState()
{
  int v0; // eax
  int Buffer; // [rsp+50h] [rbp+8h] BYREF
  int v3; // [rsp+54h] [rbp+Ch]

  v3 = -1;
  v0 = 1;
  if ( PopEsState == 1 )
    v0 = 3;
  Buffer = v0;
  ZwUpdateWnfStateData(&WNF_PO_ENERGY_SAVER_STATE, &Buffer, 8u, 0LL, 0LL, 0, 0);
  return PopSetPowerSettingValueAcDc(&GUID_POWER_SAVING_STATUS, 4LL, &PopEsState);
}
