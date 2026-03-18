/*
 * XREFs of PsIsProcessInAppSilo @ 0x140886800
 * Callers:
 *     <none>
 * Callees:
 *     PsIsServerSilo @ 0x14008FD60 (PsIsServerSilo.c)
 *     PsGetProcessSilo @ 0x1402E9A00 (PsGetProcessSilo.c)
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
