/*
 * XREFs of PpmPerfApplyLatencyHints @ 0x14011F550
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400BE260 (KeEnumerateNextProcessor.c)
 *     PpmPerfApplyLatencyHint @ 0x14015ACE0 (PpmPerfApplyLatencyHint.c)
 */

char PpmPerfApplyLatencyHints()
{
  __int64 Prcb; // rax
  unsigned __int16 *v2[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v3; // [rsp+30h] [rbp-18h]
  int v4; // [rsp+32h] [rbp-16h]
  __int16 v5; // [rsp+36h] [rbp-12h]
  ULONG v6; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v5 = 0;
  if ( PpmCheckLatencyBoostActive )
  {
    v2[1] = (unsigned __int16 *)qword_14042A698[0];
    v2[0] = (unsigned __int16 *)&PpmPerfStatesRegistered;
    v3 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v6, v2) )
    {
      Prcb = KeGetPrcb(v6);
      PpmPerfApplyLatencyHint(Prcb);
    }
  }
  return 1;
}
