/*
 * XREFs of KiGetPastDueIRTimerInfo @ 0x1402B2D5C
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x140033A00 (KeResumeClockTimerFromIdle.c)
 *     KeQueryWakeSource @ 0x1402A59DC (KeQueryWakeSource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetPastDueIRTimerInfo(unsigned __int64 a1, _BYTE *a2, _BYTE *a3)
{
  unsigned __int64 v3; // rax
  char v4; // cl
  __int64 result; // rax

  if ( a1 < qword_14044DA78 )
    return 0LL;
  if ( (qword_14044DA70 & 1) != 0 )
  {
    if ( qword_14044DA70 == 1 )
      v3 = 0LL;
    else
      v3 = qword_14044DA70 ^ ((unsigned __int64)&unk_14044DA68 + 1);
  }
  else
  {
    v3 = qword_14044DA70;
  }
  *a2 = *(_BYTE *)(v3 - 46);
  v4 = *(_BYTE *)(v3 - 45);
  result = 1LL;
  *a3 = v4;
  return result;
}
