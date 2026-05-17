/*
 * XREFs of sub_1800F3C68 @ 0x1800F3C68
 * Callers:
 *     RtlEnterUmsSchedulingMode @ 0x1800F36C0 (RtlEnterUmsSchedulingMode.c)
 * Callees:
 *     ZwSetInformationThread @ 0x18009C880 (ZwSetInformationThread.c)
 *     RtlDeleteUmsThreadContext @ 0x1800F35D0 (RtlDeleteUmsThreadContext.c)
 */

__int64 sub_1800F3C68()
{
  struct _TEB *v0; // rbx
  __int64 result; // rax
  __int64 v2; // rcx

  v0 = NtCurrentTeb();
  result = ZwSetInformationThread();
  if ( (int)result >= 0 )
  {
    v2 = (__int64)v0->TlsSlots[4];
    v0->TlsSlots[4] = 0LL;
    return RtlDeleteUmsThreadContext(v2);
  }
  return result;
}
