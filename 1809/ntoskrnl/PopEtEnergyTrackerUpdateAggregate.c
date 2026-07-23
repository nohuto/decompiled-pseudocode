/*
 * XREFs of PopEtEnergyTrackerUpdateAggregate @ 0x1405FD7EC
 * Callers:
 *     PopEtProcessSnapshotUpdate @ 0x1405FD4C0 (PopEtProcessSnapshotUpdate.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     PsAddProcessEnergyValues @ 0x14008E660 (PsAddProcessEnergyValues.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PopEtEnergyValuesDeltaCalculate @ 0x1405FD994 (PopEtEnergyValuesDeltaCalculate.c)
 *     PopEtAggregateGet @ 0x1405FDD54 (PopEtAggregateGet.c)
 */

__int64 __fastcall PopEtEnergyTrackerUpdateAggregate(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  _DWORD *v9; // rbx
  int v10; // eax
  int v11; // ecx
  unsigned __int64 UnbiasedInterruptTime; // rax
  int v13; // r8d
  unsigned __int64 v14; // rdx
  unsigned int v15; // r9d
  bool v16; // cc
  int v17; // eax
  _QWORD v18[2]; // [rsp+20h] [rbp-1F8h] BYREF
  _BYTE v19[432]; // [rsp+30h] [rbp-1E8h] BYREF

  result = PopEtEnergyValuesDeltaCalculate(a2 + 48, a3, v19, v18);
  if ( !LODWORD(v18[0]) )
  {
    PopEtAggregateGet(a1, a2 + 16, v18);
    v9 = (_DWORD *)v18[0];
    PsAddProcessEnergyValues(v18[0] + 48LL, (__int64)v19);
    v10 = *(_DWORD *)(a2 + 484);
    if ( v10 >= 0 )
    {
      *(_DWORD *)(a2 + 484) = v10 | 0x80000000;
      ++v9[123];
    }
    ++v9[120];
    v11 = *(_DWORD *)(a2 + 484) ^ (*(_DWORD *)(a2 + 484) ^ (*(_DWORD *)(a2 + 484) + 1)) & 0x7FFFFFFF;
    *(_DWORD *)(a2 + 484) = v11;
    if ( (v11 & 0x7FFFFFFF) == 1 )
      ++v9[124];
    switch ( a4 )
    {
      case 2:
        ++v9[121];
        break;
      case 3:
        ++v9[122];
        break;
      case 4:
        ++v9[125];
        break;
    }
    if ( (*(_DWORD *)(a3 + 108) & 0x7FFFFFFF) != 0 )
      v9[127] |= 1u;
    if ( (*(_DWORD *)(a3 + 116) & 0x7FFFFFFF) != 0 )
      v9[127] |= 2u;
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
    v13 = *(_DWORD *)(a1 + 596);
    v14 = UnbiasedInterruptTime / 0x2710;
    v15 = UnbiasedInterruptTime / 0x2710 - v13;
    v16 = (unsigned int)(UnbiasedInterruptTime / 0x2710) - *(_DWORD *)(a2 + 488) <= v15;
    v17 = UnbiasedInterruptTime / 0x2710;
    if ( v16 )
      v13 = *(_DWORD *)(a2 + 488);
    result = (unsigned int)(v17 - v13);
    v9[126] += result;
    if ( v9[126] > v15 )
      v9[126] = v15;
    *(_DWORD *)(a2 + 488) = v14;
  }
  return result;
}
