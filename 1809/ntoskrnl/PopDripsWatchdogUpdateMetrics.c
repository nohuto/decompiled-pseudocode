/*
 * XREFs of PopDripsWatchdogUpdateMetrics @ 0x14086FD08
 * Callers:
 *     PopDripsWatchdogDiagnosticWorker @ 0x14086F680 (PopDripsWatchdogDiagnosticWorker.c)
 * Callees:
 *     PopDeepSleepEnabled @ 0x140003A5C (PopDeepSleepEnabled.c)
 *     PopBatteryCapacityToRate @ 0x1402DC828 (PopBatteryCapacityToRate.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x1402DE694 (PopAccumulateNonActivatedCpuTime.c)
 *     PpmConvertTimeTo @ 0x1402E3394 (PpmConvertTimeTo.c)
 */

__int64 __fastcall PopDripsWatchdogUpdateMetrics(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        unsigned __int64 a5,
        _DWORD *a6)
{
  int v7; // esi
  unsigned int v8; // r10d
  __int64 v9; // rdi
  int v10; // r8d
  int v11; // r11d
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rax
  unsigned __int64 v15; // r9
  bool v16; // zf
  unsigned int v17; // ecx
  int v18; // r9d
  unsigned int v19; // eax
  unsigned int v20; // ecx
  __int64 result; // rax

  v7 = *(_DWORD *)(a3 + 28);
  v8 = dword_1404189E4;
  v9 = *(_QWORD *)(a3 + 8);
  v10 = *(_DWORD *)(a3 + 24);
  *(_BYTE *)(a1 + 584) = byte_14043D510 & 1;
  v11 = v7 - *(_DWORD *)(a1 + 628);
  v12 = v9 - *(_QWORD *)(a1 + 608);
  v13 = a2 - *(_QWORD *)(a1 + 552);
  v14 = (_QWORD *)a5;
  *a4 = v11;
  *v14 = v12;
  LODWORD(v12) = v10 - *(_DWORD *)(a1 + 624);
  *a6 = v12;
  v15 = v13 / 0x2710;
  *(_DWORD *)(a1 + 568) = v13 / 0x2710;
  if ( (_DWORD)v12 )
  {
    *(_DWORD *)(a1 + 560) = 0;
    *(_DWORD *)(a1 + 580) = 0;
    *(_DWORD *)(a1 + 624) = v10;
    *(_QWORD *)(a1 + 608) = v9;
    *(_DWORD *)(a1 + 588) = v8;
  }
  else
  {
    v16 = (_DWORD)v15 + *(_DWORD *)(a1 + 560) == 0;
    *(_DWORD *)(a1 + 560) += v15;
    if ( !v16 && (unk_1404189F4 & 0x40000000) == 0 )
    {
      v17 = *(_DWORD *)(a1 + 588);
      if ( v8 < v17 )
        *(_DWORD *)(a1 + 580) = PopBatteryCapacityToRate(v17 - v8, 1000LL * *(unsigned int *)(a1 + 560));
    }
  }
  if ( v11 || !PopDeepSleepEnabled() )
  {
    *(_DWORD *)(a1 + 564) = 0;
    *(_DWORD *)(a1 + 628) = v7;
  }
  else
  {
    *(_DWORD *)(a1 + 564) += v18;
  }
  PopAccumulateNonActivatedCpuTime(0, (_QWORD *)(a1 + 592), &a5);
  v19 = PpmConvertTimeTo(a5, 0x3E8uLL);
  v20 = *(_DWORD *)(a1 + 568);
  *(_DWORD *)(a1 + 572) = v19;
  if ( v19 <= v20 )
    result = 100 * v19 / v20;
  else
    result = 100LL;
  *(_DWORD *)(a1 + 576) = result;
  return result;
}
