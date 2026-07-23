/*
 * XREFs of DbgkpLkmdIsMemoryBlockPresentFromCallback @ 0x140812F10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DbgkpLkmdIsMemoryBlockPresentFromCallback(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(a1 + 10296))(a1 + 10240);
}
