/*
 * XREFs of PsIsProcessInAppSilo @ 0x1408C4470
 * Callers:
 *     <none>
 * Callees:
 *     PsIsServerSilo @ 0x1400EAF10 (PsIsServerSilo.c)
 *     PsGetProcessSilo @ 0x140306B90 (PsGetProcessSilo.c)
 */

bool __fastcall PsIsProcessInAppSilo(__int64 a1)
{
  __int64 ProcessSilo; // rax
  char v2; // dl

  ProcessSilo = PsGetProcessSilo(a1);
  v2 = 0;
  if ( ProcessSilo )
    return !PsIsServerSilo(ProcessSilo);
  return v2;
}
