/*
 * XREFs of CsrFreeCaptureBuffer @ 0x18005CE50
 * Callers:
 *     CsrpClientConnectToServer @ 0x18005CD8C (CsrpClientConnectToServer.c)
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 */

__int64 __fastcall CsrFreeCaptureBuffer(unsigned __int64 a1)
{
  __int64 result; // rax

  if ( !LdrpIsSecureProcess )
    return RtlFreeHeap(CsrPortHeap, 0, a1);
  return result;
}
