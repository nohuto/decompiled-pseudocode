/*
 * XREFs of RtlSetThreadWorkOnBehalfTicket @ 0x1800337C0
 * Callers:
 *     sub_180033474 @ 0x180033474 (sub_180033474.c)
 *     sub_180033520 @ 0x180033520 (sub_180033520.c)
 * Callees:
 *     ZwSetInformationThread @ 0x18009C880 (ZwSetInformationThread.c)
 */

NTSTATUS __fastcall RtlSetThreadWorkOnBehalfTicket(_QWORD *ThreadInformation)
{
  NTSTATUS result; // eax

  if ( !ThreadInformation )
    return -1073741811;
  if ( *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket == *ThreadInformation )
    return 0;
  result = ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadWorkOnBehalfTicket, ThreadInformation, 8u);
  if ( result >= 0 )
    *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *ThreadInformation;
  return result;
}
