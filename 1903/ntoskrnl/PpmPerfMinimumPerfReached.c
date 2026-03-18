/*
 * XREFs of PpmPerfMinimumPerfReached @ 0x140004258
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x140004180 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400BE260 (KeEnumerateNextProcessor.c)
 */

char PpmPerfMinimumPerfReached()
{
  char v0; // bl
  __int64 Prcb; // rax
  char v2; // r9
  _QWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+32h] [rbp-16h]
  __int16 v7; // [rsp+36h] [rbp-12h]
  unsigned int v8; // [rsp+50h] [rbp+8h] BYREF

  v0 = 1;
  v6 = 0;
  v7 = 0;
  v5 = 0;
  v4[1] = qword_14042A698;
  v4[0] = &PpmPerfStatesRegistered;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v8, v4) )
  {
    Prcb = KeGetPrcb(v8);
    v2 = 0;
    if ( *(_DWORD *)(*(_QWORD *)(Prcb + 24184) + 56LL) <= *(_DWORD *)(*(_QWORD *)(Prcb + 24176) + 528LL) )
      v2 = v0;
    v0 = v2;
  }
  return v0;
}
