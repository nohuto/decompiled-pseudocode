/*
 * XREFs of CsrFreeCaptureBuffer @ 0x18004BEB0
 * Callers:
 *     CsrpClientConnectToServer @ 0x18004BDF4 (CsrpClientConnectToServer.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

LOGICAL __fastcall CsrFreeCaptureBuffer(PVOID BaseAddress)
{
  LOGICAL result; // eax

  if ( !LdrpIsSecureProcess )
    return RtlFreeHeap(CsrPortHeap, 0, BaseAddress);
  return result;
}
