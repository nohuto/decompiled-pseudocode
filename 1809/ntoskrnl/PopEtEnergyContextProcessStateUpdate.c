/*
 * XREFs of PopEtEnergyContextProcessStateUpdate @ 0x1406079F0
 * Callers:
 *     PoEnergyContextUpdateComponentPower @ 0x140604FCC (PoEnergyContextUpdateComponentPower.c)
 *     PopEtEnergyContextSetState @ 0x14060564C (PopEtEnergyContextSetState.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopEtEnumEnergyTrackers @ 0x140607A78 (PopEtEnumEnergyTrackers.c)
 *     PsQueryProcessEnergyValues @ 0x1406382C0 (PsQueryProcessEnergyValues.c)
 */

__int64 __fastcall PopEtEnergyContextProcessStateUpdate(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD v4[4]; // [rsp+20h] [rbp-1E8h] BYREF
  _BYTE v5[432]; // [rsp+40h] [rbp-1C8h] BYREF

  ++*(_DWORD *)(*(_QWORD *)(a1 + 1848) + 468LL);
  PsQueryProcessEnergyValues(a1, v5);
  memset(v4, 0, sizeof(v4));
  LODWORD(v4[0]) = 3;
  v4[3] = v5;
  v4[1] = a1;
  return PopEtEnumEnergyTrackers(v2, v4);
}
