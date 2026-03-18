/*
 * XREFs of PspQueryProcessAccountingInformationCallback @ 0x140612F70
 * Callers:
 *     <none>
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x14000E310 (PoEnergyEstimationEnabled.c)
 *     PsAddProcessEnergyValues @ 0x140082B30 (PsAddProcessEnergyValues.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PsQueryProcessEnergyValues @ 0x1405E3F00 (PsQueryProcessEnergyValues.c)
 *     PspAddAccountingValues @ 0x140611AB4 (PspAddAccountingValues.c)
 *     PsQueryStatisticsProcess @ 0x140611F40 (PsQueryStatisticsProcess.c)
 */

__int64 __fastcall PspQueryProcessAccountingInformationCallback(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rcx
  _OWORD v6[27]; // [rsp+20h] [rbp-1C8h] BYREF

  memset(v6, 0, sizeof(v6));
  if ( (*(_DWORD *)(a1 + 776) & 2) == 0 )
  {
    PsQueryStatisticsProcess(a1, (_QWORD *)a2);
    PspAddAccountingValues((_QWORD *)(a2 + 88), (char *)a2);
    *(_DWORD *)(a2 + 216) += *(_DWORD *)(a1 + 1284);
    v4 = *(_QWORD **)(a1 + 1848);
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
      PsQueryProcessEnergyValues((_QWORD *)a1, v6);
      PsAddProcessEnergyValues(a2 + 224, (__int64)v6);
    }
  }
  return 0LL;
}
