/*
 * XREFs of PfSnLogHelper @ 0x14065788C
 * Callers:
 *     PfSnLogStreamCreate @ 0x140657908 (PfSnLogStreamCreate.c)
 *     PfSnLogVolumeCreate @ 0x1406DE38C (PfSnLogVolumeCreate.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     PfSnReferenceProcessTrace @ 0x140094AA0 (PfSnReferenceProcessTrace.c)
 *     PfSnTraceGetLogEntry @ 0x14009511C (PfSnTraceGetLogEntry.c)
 *     PfSnFailProcessTrace @ 0x1406F8314 (PfSnFailProcessTrace.c)
 */

struct _EX_RUNDOWN_REF *__fastcall PfSnLogHelper(__int64 a1, unsigned int a2, _QWORD *a3)
{
  struct _EX_RUNDOWN_REF *v5; // rdi
  struct _EX_RUNDOWN_REF *v6; // rax
  struct _EX_RUNDOWN_REF *v7; // rbx

  v5 = 0LL;
  v6 = PfSnReferenceProcessTrace(a1);
  v7 = v6;
  if ( v6 )
  {
    if ( (int)PfSnTraceGetLogEntry((__int64)v6, a2, a3) < 0 )
    {
      PfSnFailProcessTrace(v7);
    }
    else
    {
      v5 = v7;
      v7 = 0LL;
    }
    if ( v7 )
      ExReleaseRundownProtection_0(v7 + 45);
  }
  return v5;
}
