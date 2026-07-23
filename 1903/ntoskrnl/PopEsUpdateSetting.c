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
  _DWORD Buffer[4]; // [rsp+40h] [rbp-28h] BYREF

  Buffer[0] = PopEsMode;
  Buffer[2] = (unsigned __int8)byte_140443B15;
  Buffer[1] = dword_140443B10;
  ZwUpdateWnfStateData(&WNF_PO_ENERGY_SAVER_SETTING, Buffer, 0xCu, 0LL, 0LL, 0, 0);
  return PopTraceEsSetting(v0, dword_140443B10, byte_140443B15);
}
