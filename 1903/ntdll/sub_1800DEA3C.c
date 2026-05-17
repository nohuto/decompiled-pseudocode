/*
 * XREFs of sub_1800DEA3C @ 0x1800DEA3C
 * Callers:
 *     RtlCreateActivationContext @ 0x180071A00 (RtlCreateActivationContext.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     sub_1800DE870 @ 0x1800DE870 (sub_1800DE870.c)
 */

__int64 __fastcall sub_1800DEA3C(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx

  sub_1800DE870();
  RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  v2 = (_QWORD *)(a1 + 8);
  v3 = qword_180166618;
  if ( *(__int64 **)(qword_180166618 + 8) != &qword_180166618 )
    __fastfail(3u);
  *v2 = qword_180166618;
  *(_QWORD *)(a1 + 16) = &qword_180166618;
  *(_QWORD *)(v3 + 8) = v2;
  qword_180166618 = a1 + 8;
  return RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
}
