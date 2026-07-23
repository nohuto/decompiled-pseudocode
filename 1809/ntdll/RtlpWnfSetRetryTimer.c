/*
 * XREFs of RtlpWnfSetRetryTimer @ 0x1800E0274
 * Callers:
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800DFC28 (RtlpWnfCalculateAndSetNextTimer.c)
 * Callees:
 *     TpSetTimerEx @ 0x18002C800 (TpSetTimerEx.c)
 */

NTSTATUS __fastcall RtlpWnfSetRetryTimer(unsigned __int64 a1)
{
  NTSTATUS result; // eax
  unsigned __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _TP_TIMER *v6; // rcx
  LARGE_INTEGER DueTime; // [rsp+38h] [rbp+10h] BYREF

  result = qword_1801660D0;
  if ( !*(_QWORD *)(qword_1801660D0 + 88) || *(_QWORD *)(qword_1801660D0 + 88) > a1 )
  {
    v3 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
    if ( v3 <= a1 )
      v4 = a1 - v3;
    else
      v4 = 500000LL;
    v5 = qword_1801660D0;
    *(_QWORD *)(qword_1801660D0 + 88) = v4;
    v6 = *(_TP_TIMER **)(v5 + 80);
    DueTime.QuadPart = -v4;
    return TpSetTimerEx(v6, &DueTime, 0, 0x32u);
  }
  return result;
}
