/*
 * XREFs of KiGetPastDueIRTimerInfo @ 0x1402B2ABC
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x140033DF0 (KeResumeClockTimerFromIdle.c)
 *     KeQueryWakeSource @ 0x1402A573C (KeQueryWakeSource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetPastDueIRTimerInfo(unsigned __int64 a1, _BYTE *a2, _BYTE *a3)
{
  unsigned __int64 v3; // rax
  char v4; // cl
  __int64 result; // rax

  if ( a1 < qword_14044D778 )
    return 0LL;
  if ( (qword_14044D770 & 1) != 0 )
  {
    if ( qword_14044D770 == 1 )
      v3 = 0LL;
    else
      v3 = qword_14044D770 ^ ((unsigned __int64)&unk_14044D768 + 1);
  }
  else
  {
    v3 = qword_14044D770;
  }
  *a2 = *(_BYTE *)(v3 - 46);
  v4 = *(_BYTE *)(v3 - 45);
  result = 1LL;
  *a3 = v4;
  return result;
}
