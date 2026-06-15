/*
 * XREFs of McTemplateU0pq @ 0x140054A2C
 * Callers:
 *     ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140054510 (-GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 * Callees:
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x14002BE40 (McGenEventWrite.c)
 */

__int64 __fastcall McTemplateU0pq(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v5[6]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v6; // [rsp+90h] [rbp+18h] BYREF

  v6 = a3;
  v5[3] = 8LL;
  v5[2] = &v6;
  v4 = 0;
  v5[4] = &v4;
  v5[5] = 4LL;
  return McGenEventWrite(0LL, a2, a3, 3, (__int64)v5);
}
