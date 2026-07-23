/*
 * XREFs of KiQueryProximityNode @ 0x140290430
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 KiQueryProximityNode()
{
  return ((__int64 (*)(void))KiNumaQueryProximityNode)();
}
