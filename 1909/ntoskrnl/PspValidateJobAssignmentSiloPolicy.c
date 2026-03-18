/*
 * XREFs of PspValidateJobAssignmentSiloPolicy @ 0x1406896A0
 * Callers:
 *     PspAssignProcessToJob @ 0x14068917C (PspAssignProcessToJob.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x1400065B0 (PsGetProcessServerSilo.c)
 *     PsGetEffectiveServerSilo @ 0x1400EAEE0 (PsGetEffectiveServerSilo.c)
 *     PsIsServerSilo @ 0x1400EAF10 (PsIsServerSilo.c)
 */

bool __fastcall PspValidateJobAssignmentSiloPolicy(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 EffectiveServerSilo; // rbx

  if ( ((a4 - 1) & 0xFFFFFFF9) != 0 || a4 == 7 )
  {
    if ( a4 != 4 )
      return 1;
    return !PsIsServerSilo(a1);
  }
  else
  {
    EffectiveServerSilo = PsGetEffectiveServerSilo(a1);
    if ( PsGetEffectiveServerSilo(a2) == EffectiveServerSilo )
      return 1;
    return EffectiveServerSilo == PsGetProcessServerSilo(a3);
  }
}
