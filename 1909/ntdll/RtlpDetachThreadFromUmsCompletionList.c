/*
 * XREFs of RtlpDetachThreadFromUmsCompletionList @ 0x1800F3D48
 * Callers:
 *     RtlEnterUmsSchedulingMode @ 0x1800F37A0 (RtlEnterUmsSchedulingMode.c)
 * Callees:
 *     NtSetInformationThread @ 0x18009D030 (NtSetInformationThread.c)
 *     RtlDeleteUmsThreadContext @ 0x1800F36B0 (RtlDeleteUmsThreadContext.c)
 */

NTSTATUS RtlpDetachThreadFromUmsCompletionList()
{
  struct _TEB *v0; // rbx
  NTSTATUS result; // eax
  void *v2; // rcx
  _DWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+28h] [rbp-20h]
  __int64 v5; // [rsp+30h] [rbp-18h]

  v0 = NtCurrentTeb();
  v3[1] = 0;
  v4 = 0LL;
  v5 = 0LL;
  v3[0] = 2;
  result = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadUmsInformation, v3, 0x18u);
  if ( result >= 0 )
  {
    v2 = v0->TlsSlots[4];
    v0->TlsSlots[4] = 0LL;
    return RtlDeleteUmsThreadContext(v2);
  }
  return result;
}
