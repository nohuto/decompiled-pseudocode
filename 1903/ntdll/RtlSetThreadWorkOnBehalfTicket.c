/*
 * XREFs of RtlSetThreadWorkOnBehalfTicket @ 0x1800337C0
 * Callers:
 *     sub_180033474 @ 0x180033474 (sub_180033474.c)
 *     sub_180033520 @ 0x180033520 (sub_180033520.c)
 * Callees:
 *     ZwSetInformationThread @ 0x18009C880 (ZwSetInformationThread.c)
 */

__int64 __fastcall RtlSetThreadWorkOnBehalfTicket(void **a1)
{
  __int64 result; // rax

  if ( !a1 )
    return 3221225485LL;
  if ( NtCurrentTeb()->SystemReserved1[53] == *a1 )
    return 0LL;
  result = ZwSetInformationThread(-2LL, 44LL, a1);
  if ( (int)result >= 0 )
    NtCurrentTeb()->SystemReserved1[53] = *a1;
  return result;
}
