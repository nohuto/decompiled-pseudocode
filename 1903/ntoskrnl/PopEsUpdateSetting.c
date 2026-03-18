/*
 * XREFs of PopEsUpdateSetting @ 0x140787EF8
 * Callers:
 *     PopEsWorker @ 0x14073A580 (PopEsWorker.c)
 * Callees:
 *     PopTraceEsSetting @ 0x14019C4D8 (PopTraceEsSetting.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401C39D0 (ZwUpdateWnfStateData.c)
 */

TLG_STATUS PopEsUpdateSetting()
{
  __int64 v0; // rcx
  _DWORD v2[4]; // [rsp+40h] [rbp-28h] BYREF

  v2[0] = PopEsMode;
  v2[2] = (unsigned __int8)byte_140443B15;
  v2[1] = dword_140443B10;
  ZwUpdateWnfStateData((__int64)&WNF_PO_ENERGY_SAVER_SETTING, (__int64)v2, 12LL);
  return PopTraceEsSetting(v0, dword_140443B10, byte_140443B15);
}
