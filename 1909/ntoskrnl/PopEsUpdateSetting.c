/*
 * XREFs of PopEsUpdateSetting @ 0x14078A358
 * Callers:
 *     PopEsWorker @ 0x14073C810 (PopEsWorker.c)
 * Callees:
 *     PopTraceEsSetting @ 0x14019CC58 (PopTraceEsSetting.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 */

TLG_STATUS PopEsUpdateSetting()
{
  __int64 v0; // rcx
  _DWORD v2[4]; // [rsp+40h] [rbp-28h] BYREF

  v2[0] = PopEsMode;
  v2[2] = (unsigned __int8)byte_140443A75;
  v2[1] = dword_140443A70;
  ZwUpdateWnfStateData((__int64)&WNF_PO_ENERGY_SAVER_SETTING, (__int64)v2, 12LL);
  return PopTraceEsSetting(v0, dword_140443A70, byte_140443A75);
}
