/*
 * XREFs of DbgkpLkmdSnapDataEx @ 0x140281584
 * Callers:
 *     DbgkCaptureLiveDump @ 0x14084B148 (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdSnapThreadInContext @ 0x14084BA6C (DbgkpLkmdSnapThreadInContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DbgkpLkmdSnapDataEx(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(a1 + 10304))(a1 + 10240);
}
