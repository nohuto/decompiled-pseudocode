/*
 * XREFs of PsCaptureUserProcessParameters @ 0x1406D0090
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSilo @ 0x14004D270 (PsGetCurrentServerSilo.c)
 *     PspCaptureUserProcessParameters @ 0x140607D50 (PspCaptureUserProcessParameters.c)
 */

__int64 __fastcall PsCaptureUserProcessParameters(_QWORD *a1, __int64 a2)
{
  __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return PspCaptureUserProcessParameters(a1, a2, 3, CurrentServerSilo);
}
