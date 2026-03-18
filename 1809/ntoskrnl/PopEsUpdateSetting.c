/*
 * XREFs of PopEsUpdateSetting @ 0x1407612A0
 * Callers:
 *     PopEsWorker @ 0x14071C8A0 (PopEsWorker.c)
 * Callees:
 *     PopTraceEsSetting @ 0x140192704 (PopTraceEsSetting.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401BBA50 (ZwUpdateWnfStateData.c)
 */

TLG_STATUS PopEsUpdateSetting()
{
  __int64 v0; // rcx
  _DWORD v2[4]; // [rsp+40h] [rbp-28h] BYREF

  v2[0] = PopEsMode;
  v2[2] = (unsigned __int8)byte_140418155;
  v2[1] = dword_140418150;
  ZwUpdateWnfStateData((__int64)&WNF_PO_ENERGY_SAVER_SETTING, (__int64)v2, 12LL);
  return PopTraceEsSetting(v0, dword_140418150, byte_140418155);
}
