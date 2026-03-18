/*
 * XREFs of RtlpInternHashBucketsFree @ 0x140720CEC
 * Callers:
 *     RtlInternTableIntern @ 0x140686C08 (RtlInternTableIntern.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpInternHashBucketsFree(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a2 + 16) + 8LL))(a2, a1);
}
