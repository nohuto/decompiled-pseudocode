/*
 * XREFs of sub_1800DE870 @ 0x1800DE870
 * Callers:
 *     sub_1800DE908 @ 0x1800DE908 (sub_1800DE908.c)
 *     sub_1800DEA3C @ 0x1800DEA3C (sub_1800DEA3C.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 */

NTSTATUS sub_1800DE870()
{
  NTSTATUS result; // eax

  if ( !qword_180166618 )
  {
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    if ( !qword_180166618 )
    {
      qword_180166620 = (__int64)&qword_180166618;
      qword_180166618 = (__int64)&qword_180166618;
      qword_180166610 = (__int64)&qword_180166608;
      qword_180166608 = (__int64)&qword_180166608;
    }
    return RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  }
  return result;
}
