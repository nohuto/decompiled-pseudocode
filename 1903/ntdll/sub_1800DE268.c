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

signed __int64 sub_1800DE268()
{
  __int64 v0; // rsi
  __int64 v1; // rdi
  __int64 v2; // rbx
  signed __int64 result; // rax

  RtlAcquireSRWLockExclusive(&qword_1801664A0);
  v0 = sub_18007F040(&qword_180164368);
  v1 = sub_18007F040((__int64 *)&unk_180164370);
  v2 = sub_18007F040(&qword_180164360);
  result = RtlReleaseSRWLockExclusive(&qword_1801664A0);
  if ( v0 )
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v0);
  if ( v1 )
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
  if ( v2 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
  return result;
}
