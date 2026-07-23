/*
 * XREFs of PopEsUpdateSetting @ 0x140762470
 * Callers:
 *     PopEsWorker @ 0x14071DB20 (PopEsWorker.c)
 * Callees:
 *     PopTraceEsSetting @ 0x140192864 (PopTraceEsSetting.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401BBBD0 (ZwUpdateWnfStateData.c)
 */

TLG_STATUS PopEsUpdateSetting()
{
  __int64 v0; // rcx
  _DWORD Buffer[4]; // [rsp+40h] [rbp-28h] BYREF

  Buffer[0] = PopEsMode;
  Buffer[2] = (unsigned __int8)byte_1404191D5;
  Buffer[1] = dword_1404191D0;
  ZwUpdateWnfStateData(&WNF_PO_ENERGY_SAVER_SETTING, Buffer, 0xCu, 0LL, 0LL, 0, 0);
  return PopTraceEsSetting(v0, dword_1404191D0, byte_1404191D5);
}
