/*
 * XREFs of sub_1800DE268 @ 0x1800DE268
 * Callers:
 *     sub_180080CF0 @ 0x180080CF0 (sub_180080CF0.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18007F040 @ 0x18007F040 (sub_18007F040.c)
 */

void sub_1800DE268()
{
  void *v0; // rsi
  void *v1; // rdi
  void *v2; // rbx

  RtlAcquireSRWLockExclusive(&stru_1801664A0);
  v0 = (void *)sub_18007F040(&qword_180164368);
  v1 = (void *)sub_18007F040((__int64 *)&unk_180164370);
  v2 = (void *)sub_18007F040(&qword_180164360);
  RtlReleaseSRWLockExclusive(&stru_1801664A0);
  if ( v0 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v0);
  if ( v1 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
  if ( v2 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
}
