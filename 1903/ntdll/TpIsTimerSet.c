/*
 * XREFs of TpIsTimerSet @ 0x1800323A0
 * Callers:
 *     TpSetTimerEx @ 0x1800323F0 (TpSetTimerEx.c)
 * Callees:
 *     sub_1800324FC @ 0x1800324FC (sub_1800324FC.c)
 */

LOGICAL __cdecl TpIsTimerSet(PTP_TIMER Timer)
{
  int v2; // eax
  LOGICAL v3; // edx

  v2 = sub_1800324FC(Timer, 0LL, 1LL);
  v3 = 0;
  if ( !v2 )
    return 0;
  LOBYTE(v3) = *((_QWORD *)Timer + 41) != 0LL;
  return v3;
}
