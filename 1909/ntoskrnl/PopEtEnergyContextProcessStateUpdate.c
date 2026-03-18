/*
 * XREFs of PopEtEnergyContextProcessStateUpdate @ 0x14068A2D8
 * Callers:
 *     PoEnergyContextUpdateComponentPower @ 0x140687604 (PoEnergyContextUpdateComponentPower.c)
 *     PopEtEnergyContextSetState @ 0x140687B58 (PopEtEnergyContextSetState.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PsQueryProcessEnergyValues @ 0x1405E46D0 (PsQueryProcessEnergyValues.c)
 *     PopEtEnumEnergyTrackers @ 0x14068A38C (PopEtEnumEnergyTrackers.c)
 */

__int64 __fastcall PopEtEnergyContextProcessStateUpdate(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  _QWORD v5[4]; // [rsp+20h] [rbp-1E8h] BYREF
  _OWORD v6[27]; // [rsp+40h] [rbp-1C8h] BYREF

  v1 = a1[237];
  memset(v5, 0, sizeof(v5));
  memset(v6, 0, sizeof(v6));
  ++*(_DWORD *)(v1 + 468);
  PsQueryProcessEnergyValues(a1, v6);
  v5[2] = 0LL;
  v5[3] = v6;
  v5[0] = 3LL;
  v5[1] = a1;
  return PopEtEnumEnergyTrackers(v3, v5);
}
