/*
 * XREFs of PfSnLogHelper @ 0x14066A8AC
 * Callers:
 *     PfSnLogStreamCreate @ 0x14066A928 (PfSnLogStreamCreate.c)
 *     PfSnLogVolumeCreate @ 0x1406DF72C (PfSnLogVolumeCreate.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     PfSnReferenceProcessTrace @ 0x1400D1DC0 (PfSnReferenceProcessTrace.c)
 *     PfSnTraceGetLogEntry @ 0x1400D243C (PfSnTraceGetLogEntry.c)
 *     PfSnFailProcessTrace @ 0x1406FA0D4 (PfSnFailProcessTrace.c)
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
