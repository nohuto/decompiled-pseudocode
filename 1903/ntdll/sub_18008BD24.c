/*
 * XREFs of sub_18008BD24 @ 0x18008BD24
 * Callers:
 *     sub_18008BC70 @ 0x18008BC70 (sub_18008BC70.c)
 * Callees:
 *     TpSetTimerEx @ 0x1800323F0 (TpSetTimerEx.c)
 */

NTSTATUS __fastcall sub_18008BD24(unsigned __int64 a1)
{
  NTSTATUS result; // eax
  unsigned __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _TP_TIMER *v6; // rcx
  LARGE_INTEGER DueTime; // [rsp+38h] [rbp+10h] BYREF

  result = qword_180166088;
  if ( !*(_QWORD *)(qword_180166088 + 88) || *(_QWORD *)(qword_180166088 + 88) > a1 )
  {
    v3 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
    if ( v3 > a1 )
      v4 = 500000LL;
    else
      v4 = a1 - v3;
    v5 = qword_180166088;
    *(_QWORD *)(qword_180166088 + 88) = v4;
    v6 = *(_TP_TIMER **)(v5 + 80);
    DueTime.QuadPart = -v4;
    return TpSetTimerEx(v6, &DueTime, 0, 0x32u);
  }
  return result;
}
