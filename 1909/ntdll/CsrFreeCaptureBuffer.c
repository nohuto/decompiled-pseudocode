/*
 * XREFs of CsrFreeCaptureBuffer @ 0x18004BEB0
 * Callers:
 *     CsrpClientConnectToServer @ 0x18004BDF4 (CsrpClientConnectToServer.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall CsrFreeCaptureBuffer(__int64 a1)
{
  __int64 result; // rax

  if ( !LdrpIsSecureProcess )
    return RtlFreeHeap(CsrPortHeap, 0, a1);
  return result;
}
