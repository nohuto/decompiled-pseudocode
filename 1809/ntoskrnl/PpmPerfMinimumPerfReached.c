/*
 * XREFs of PpmPerfMinimumPerfReached @ 0x1400A550C
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x1400A5440 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140063BE0 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x1400A62C4 (KeGetPrcb.c)
 */

char PpmPerfMinimumPerfReached()
{
  char v0; // bl
  __int64 Prcb; // rax
  char v2; // r9
  unsigned __int16 *v4[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v5; // [rsp+30h] [rbp-18h]
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF

  v4[1] = (unsigned __int16 *)qword_1404040A8;
  v0 = 1;
  v5 = 0;
  v4[0] = (unsigned __int16 *)&PpmPerfStatesRegistered;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v6, v4) )
  {
    Prcb = KeGetPrcb(v6);
    v2 = 0;
    if ( *(_DWORD *)(*(_QWORD *)(Prcb + 24184) + 56LL) <= *(_DWORD *)(*(_QWORD *)(Prcb + 24176) + 528LL) )
      v2 = v0;
    v0 = v2;
  }
  return v0;
}
