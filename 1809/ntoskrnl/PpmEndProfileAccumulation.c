/*
 * XREFs of PpmEndProfileAccumulation @ 0x14087A764
 * Callers:
 *     PpmEventTraceProfiles @ 0x140756D88 (PpmEventTraceProfiles.c)
 *     PpmApplyProfile @ 0x14087A4F0 (PpmApplyProfile.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmEndProfileAccumulation(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx

  v2 = a2 - a1[687];
  a1[691] += v2;
  if ( a1[689] < v2 )
    a1[689] = v2;
  if ( a1[690] > v2 )
    a1[690] = v2;
  ++a1[688];
  a1[687] = 0LL;
}
