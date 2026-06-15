/*
 * XREFs of McTemplateU0p @ 0x140053638
 * Callers:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x1400028DC (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140002920 (-GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?ReleaseInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x140011BF0 (-ReleaseInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXI_K@Z.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140052DC4 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140054510 (-GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z @ 0x1400548D0 (-ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x14002BE40 (McGenEventWrite.c)
 */

__int64 __fastcall McTemplateU0p(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[3]; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]
  __int64 v7; // [rsp+80h] [rbp+18h] BYREF

  v7 = a3;
  v4[2] = &v7;
  v6 = 0;
  v5 = 8;
  return McGenEventWrite(a1, (__int64)&AudioCore_AESecurity, a3, 2, (__int64)v4);
}
