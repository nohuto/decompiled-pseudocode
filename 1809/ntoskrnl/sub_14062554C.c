/*
 * XREFs of sub_14062554C @ 0x14062554C
 * Callers:
 *     WbRemoveWarbirdProcess @ 0x140608988 (WbRemoveWarbirdProcess.c)
 *     WbDispatchOperation @ 0x140625364 (WbDispatchOperation.c)
 *     WbGetWarbirdProcess @ 0x140625584 (WbGetWarbirdProcess.c)
 *     WbCreateWarbirdProcess @ 0x1406CFA88 (WbCreateWarbirdProcess.c)
 * Callees:
 *     WbFreeWarbirdProcess @ 0x14068FFB8 (WbFreeWarbirdProcess.c)
 */

signed __int64 __fastcall sub_14062554C(volatile signed __int64 *a1)
{
  signed __int64 v1; // rbx

  v1 = 0LL;
  if ( a1 )
  {
    v1 = _InterlockedDecrement64(a1 + 29);
    if ( !v1 )
      WbFreeWarbirdProcess((PVOID)a1);
  }
  return v1;
}
