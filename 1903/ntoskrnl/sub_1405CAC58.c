/*
 * XREFs of sub_1405CAC58 @ 0x1405CAC58
 * Callers:
 *     WbDispatchOperation @ 0x1405CA8A0 (WbDispatchOperation.c)
 *     WbGetWarbirdProcess @ 0x1405CAA80 (WbGetWarbirdProcess.c)
 *     WbRemoveWarbirdProcess @ 0x140671CFC (WbRemoveWarbirdProcess.c)
 *     WbCreateWarbirdProcess @ 0x1406EDFEC (WbCreateWarbirdProcess.c)
 * Callees:
 *     WbFreeWarbirdProcess @ 0x1406ADB40 (WbFreeWarbirdProcess.c)
 */

signed __int64 __fastcall sub_1405CAC58(__int64 a1)
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
