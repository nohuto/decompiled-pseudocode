/*
 * XREFs of PopEtEnergyContextProcessStateUpdate @ 0x140696D68
 * Callers:
 *     PoEnergyContextUpdateComponentPower @ 0x140694094 (PoEnergyContextUpdateComponentPower.c)
 *     PopEtEnergyContextSetState @ 0x1406945E8 (PopEtEnergyContextSetState.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PsQueryProcessEnergyValues @ 0x1405E3F00 (PsQueryProcessEnergyValues.c)
 *     PopEtEnumEnergyTrackers @ 0x140696E1C (PopEtEnumEnergyTrackers.c)
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
