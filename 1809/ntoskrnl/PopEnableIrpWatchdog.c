/*
 * XREFs of PopEnableIrpWatchdog @ 0x140172D4C
 * Callers:
 *     PopDequeueQuerySetIrp @ 0x140171184 (PopDequeueQuerySetIrp.c)
 *     PopQueueQuerySetIrp @ 0x140172B8C (PopQueueQuerySetIrp.c)
 * Callees:
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     PopComputeWatchdogTimeout @ 0x140172DE8 (PopComputeWatchdogTimeout.c)
 */

__int64 __fastcall PopEnableIrpWatchdog(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
  result = PopComputeWatchdogTimeout(v1);
  if ( (_DWORD)result )
  {
    *(_BYTE *)(v1 + 196) = 1;
    *(_DWORD *)(v1 + 120) = 275;
    *(_QWORD *)(v1 + 152) = v1;
    *(_QWORD *)(v1 + 144) = PopIrpWatchdog;
    *(_QWORD *)(v1 + 176) = 0LL;
    *(_QWORD *)(v1 + 136) = 0LL;
    *(_QWORD *)(v1 + 56) = 0LL;
    *(_BYTE *)(v1 + 56) = 8;
    *(_QWORD *)(v1 + 72) = v1 + 64;
    *(_QWORD *)(v1 + 64) = v1 + 64;
    *(_QWORD *)(v1 + 80) = 0LL;
    *(_QWORD *)(v1 + 112) = 0LL;
    KiSetTimerEx(v1 + 56, -10000000LL * (unsigned int)result, 0, 0, v1 + 120);
    result = KiQueryUnbiasedInterruptTime();
    *(_QWORD *)(v1 + 48) = result;
  }
  return result;
}
