/*
 * XREFs of PsEncodeThreadWorkOnBehalfTicket @ 0x14000D438
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1405E3090 (AlpcpCaptureAttributes.c)
 *     NtQueryInformationThread @ 0x1405E5490 (NtQueryInformationThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1406D9AB8 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140885460 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsEncodeThreadWorkOnBehalfTicket(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  *a2 = *(_DWORD *)(a1 + 1616);
  a2[1] = *(_DWORD *)(a1 + 1536);
  result = PspWorkOnBehalfEncodingKey;
  *(_QWORD *)a2 ^= PspWorkOnBehalfEncodingKey;
  return result;
}
