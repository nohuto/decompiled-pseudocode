/*
 * XREFs of DbgkpLkmdSnapDataEx @ 0x1402812E4
 * Callers:
 *     DbgkCaptureLiveDump @ 0x14084A848 (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdSnapThreadInContext @ 0x14084B16C (DbgkpLkmdSnapThreadInContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DbgkpLkmdSnapDataEx(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(a1 + 10304))(a1 + 10240);
}
