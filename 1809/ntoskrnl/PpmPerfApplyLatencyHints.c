/*
 * XREFs of PpmPerfApplyLatencyHints @ 0x1401222E0
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     PpmPerfApplyLatencyHint @ 0x14013F26C (PpmPerfApplyLatencyHint.c)
 */

char PpmPerfApplyLatencyHints()
{
  __int64 Prcb; // rax
  unsigned __int16 *v2[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v3; // [rsp+30h] [rbp-18h]
  ULONG v4; // [rsp+50h] [rbp+8h] BYREF

  if ( PpmCheckLatencyBoostActive )
  {
    v2[1] = (unsigned __int16 *)qword_1404050A8[0];
    v2[0] = (unsigned __int16 *)&PpmPerfStatesRegistered;
    v3 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v4, v2) )
    {
      Prcb = KeGetPrcb(v4);
      PpmPerfApplyLatencyHint(Prcb);
    }
  }
  return 1;
}
