/*
 * XREFs of PsEncodeThreadWorkOnBehalfTicket @ 0x1400ACD00
 * Callers:
 *     AlpcpCaptureAttributes @ 0x140637400 (AlpcpCaptureAttributes.c)
 *     NtQueryInformationThread @ 0x14064B720 (NtQueryInformationThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1406B64C0 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x14084B180 (NtAlpcImpersonateClientContainerOfPort.c)
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
