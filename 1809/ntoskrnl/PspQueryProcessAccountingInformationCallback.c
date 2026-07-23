/*
 * XREFs of PspQueryProcessAccountingInformationCallback @ 0x140601010
 * Callers:
 *     <none>
 * Callees:
 *     PsAddProcessEnergyValues @ 0x14008E660 (PsAddProcessEnergyValues.c)
 *     PoEnergyEstimationEnabled @ 0x1400ACEC0 (PoEnergyEstimationEnabled.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PspAddAccountingValues @ 0x1405FF264 (PspAddAccountingValues.c)
 *     PsQueryStatisticsProcess @ 0x1405FF700 (PsQueryStatisticsProcess.c)
 *     PsQueryProcessEnergyValues @ 0x1406382C0 (PsQueryProcessEnergyValues.c)
 */

__int64 __fastcall PspQueryProcessAccountingInformationCallback(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rcx
  _BYTE v6[432]; // [rsp+20h] [rbp-1C8h] BYREF

  if ( (*(_DWORD *)(a1 + 768) & 2) == 0 )
  {
    PsQueryStatisticsProcess(a1, (_QWORD *)a2);
    PspAddAccountingValues((_QWORD *)(a2 + 88), (char *)a2);
    *(_DWORD *)(a2 + 216) += *(_DWORD *)(a1 + 1284);
    v4 = *(_QWORD **)(a1 + 1800);
    if ( v4 )
    {
      *(_QWORD *)(a2 + 176) += *v4;
      *(_QWORD *)(a2 + 184) += v4[1];
      *(_QWORD *)(a2 + 192) += v4[2];
      *(_QWORD *)(a2 + 200) += v4[3];
      *(_QWORD *)(a2 + 208) += v4[4];
    }
    if ( PoEnergyEstimationEnabled() )
    {
      PsQueryProcessEnergyValues(a1, v6);
      PsAddProcessEnergyValues(a2 + 224, (__int64)v6);
    }
  }
  return 0LL;
}
