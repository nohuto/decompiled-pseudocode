/*
 * XREFs of sub_1405CB158 @ 0x1405CB158
 * Callers:
 *     WbDispatchOperation @ 0x1405CADA0 (WbDispatchOperation.c)
 *     WbGetWarbirdProcess @ 0x1405CAF80 (WbGetWarbirdProcess.c)
 *     WbRemoveWarbirdProcess @ 0x140652B2C (WbRemoveWarbirdProcess.c)
 *     WbCreateWarbirdProcess @ 0x1406EF6EC (WbCreateWarbirdProcess.c)
 * Callees:
 *     WbFreeWarbirdProcess @ 0x1406AFA70 (WbFreeWarbirdProcess.c)
 */

signed __int64 __fastcall sub_1405CB158(__int64 a1)
{
  signed __int64 v1; // rbx

  v1 = 0LL;
  if ( a1 )
  {
    v1 = _InterlockedDecrement64((volatile signed __int64 *)(a1 + 232));
    if ( !v1 )
      WbFreeWarbirdProcess();
  }
  return v1;
}
