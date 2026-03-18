/*
 * XREFs of PsCaptureUserProcessParameters @ 0x1406B28E0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140006560 (PsGetCurrentServerSilo.c)
 *     PspCaptureUserProcessParameters @ 0x1406B2990 (PspCaptureUserProcessParameters.c)
 */

__int64 __fastcall PsCaptureUserProcessParameters(int a1, int a2)
{
  unsigned __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return PspCaptureUserProcessParameters(a1, a2, 0, 3, CurrentServerSilo);
}
