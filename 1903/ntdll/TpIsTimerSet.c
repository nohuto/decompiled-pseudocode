/*
 * XREFs of TpIsTimerSet @ 0x1800323A0
 * Callers:
 *     TpSetTimerEx @ 0x1800323F0 (TpSetTimerEx.c)
 * Callees:
 *     sub_1800324FC @ 0x1800324FC (sub_1800324FC.c)
 */

__int64 __fastcall TpIsTimerSet(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edx

  v2 = sub_1800324FC(a1, 0LL, 1LL);
  v3 = 0;
  if ( !v2 )
    return 0LL;
  LOBYTE(v3) = *(_QWORD *)(a1 + 328) != 0LL;
  return v3;
}
