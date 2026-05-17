/*
 * XREFs of RtlpDetachThreadFromUmsCompletionList @ 0x1800F3D48
 * Callers:
 *     RtlEnterUmsSchedulingMode @ 0x1800F37A0 (RtlEnterUmsSchedulingMode.c)
 * Callees:
 *     NtSetInformationThread @ 0x18009D030 (NtSetInformationThread.c)
 *     RtlDeleteUmsThreadContext @ 0x1800F36B0 (RtlDeleteUmsThreadContext.c)
 */

__int64 RtlpDetachThreadFromUmsCompletionList()
{
  struct _TEB *v0; // rbx
  __int64 result; // rax
  __int64 v2; // rcx

  v0 = NtCurrentTeb();
  result = NtSetInformationThread();
  if ( (int)result >= 0 )
  {
    v2 = (__int64)v0->TlsSlots[4];
    v0->TlsSlots[4] = 0LL;
    return RtlDeleteUmsThreadContext(v2);
  }
  return result;
}
