/*
 * XREFs of DbgkpLkmdSnapData @ 0x140281550
 * Callers:
 *     DbgkCaptureLiveDump @ 0x14084B148 (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdSnapPendingIrps @ 0x14084B8B8 (DbgkpLkmdSnapPendingIrps.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DbgkpLkmdSnapData(__int64 a1, __int64 a2, __int64 a3)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD, _QWORD))(a1 + 10304))(
           a1 + 10240,
           a2,
           a3,
           0LL,
           0LL,
           0LL);
}
