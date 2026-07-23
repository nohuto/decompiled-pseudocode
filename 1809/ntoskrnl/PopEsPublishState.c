/*
 * XREFs of PopEsPublishState @ 0x140763E74
 * Callers:
 *     PopEsWorker @ 0x14071DB20 (PopEsWorker.c)
 *     PopEsUpdateState @ 0x14071DC54 (PopEsUpdateState.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1401BBBD0 (ZwUpdateWnfStateData.c)
 *     PopSetPowerSettingValueAcDc @ 0x14058BA3C (PopSetPowerSettingValueAcDc.c)
 */

__int64 PopEsPublishState()
{
  int v0; // eax
  unsigned __int64 Buffer; // [rsp+50h] [rbp+8h] BYREF

  Buffer = 0xFFFFFFFF00000000uLL;
  v0 = 1;
  if ( PopEsState == 1 )
    v0 = 3;
  LODWORD(Buffer) = v0;
  ZwUpdateWnfStateData(&WNF_PO_ENERGY_SAVER_STATE, &Buffer, 8u, 0LL, 0LL, 0, 0);
  return PopSetPowerSettingValueAcDc(&GUID_POWER_SAVING_STATUS, 4LL, &PopEsState);
}
