/*
 * XREFs of sub_14062656C @ 0x14062656C
 * Callers:
 *     WbRemoveWarbirdProcess @ 0x140609988 (WbRemoveWarbirdProcess.c)
 *     WbDispatchOperation @ 0x140626384 (WbDispatchOperation.c)
 *     WbGetWarbirdProcess @ 0x1406265A4 (WbGetWarbirdProcess.c)
 *     WbCreateWarbirdProcess @ 0x1406D0D08 (WbCreateWarbirdProcess.c)
 * Callees:
 *     WbFreeWarbirdProcess @ 0x140691158 (WbFreeWarbirdProcess.c)
 */

signed __int64 __fastcall sub_14062656C(volatile signed __int64 *a1)
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
