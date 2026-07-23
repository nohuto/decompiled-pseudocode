/*
 * XREFs of CsrFreeCaptureBuffer @ 0x18005CE50
 * Callers:
 *     CsrpClientConnectToServer @ 0x18005CD8C (CsrpClientConnectToServer.c)
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 */

LOGICAL __fastcall CsrFreeCaptureBuffer(PVOID BaseAddress)
{
  LOGICAL result; // eax

  if ( !LdrpIsSecureProcess )
    return RtlFreeHeap(CsrPortHeap, 0, BaseAddress);
  return result;
}
