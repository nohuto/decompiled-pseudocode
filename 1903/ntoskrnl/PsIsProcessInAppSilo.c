/*
 * XREFs of PsIsProcessInAppSilo @ 0x1408C4BA0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsServerSilo @ 0x1400E5F70 (PsIsServerSilo.c)
 *     PsGetProcessSilo @ 0x1403070E0 (PsGetProcessSilo.c)
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
