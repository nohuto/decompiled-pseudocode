/*
 * XREFs of PsEncodeThreadWorkOnBehalfTicket @ 0x1400ACDA0
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1406363E0 (AlpcpCaptureAttributes.c)
 *     NtQueryInformationThread @ 0x14064A580 (NtQueryInformationThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1406B5240 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140849F40 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsEncodeThreadWorkOnBehalfTicket(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  *a2 = *(_DWORD *)(a1 + 1600);
  a2[1] = *(_DWORD *)(a1 + 1520);
  result = PspWorkOnBehalfEncodingKey;
  *(_QWORD *)a2 ^= PspWorkOnBehalfEncodingKey;
  return result;
}
