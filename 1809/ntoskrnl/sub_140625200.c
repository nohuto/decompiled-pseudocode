/*
 * XREFs of sub_140625200 @ 0x140625200
 * Callers:
 *     WbHeapExecuteCall @ 0x140624ABC (WbHeapExecuteCall.c)
 *     sub_140624C6C @ 0x140624C6C (sub_140624C6C.c)
 *     WbGetWarbirdThread @ 0x14062502C (WbGetWarbirdThread.c)
 *     WbFreeWarbirdProcess @ 0x14068FFB8 (WbFreeWarbirdProcess.c)
 *     sub_1406D0370 @ 0x1406D0370 (sub_1406D0370.c)
 * Callees:
 *     sub_1406D044C @ 0x1406D044C (sub_1406D044C.c)
 */

signed __int64 __fastcall sub_140625200(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rbx

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 8));
    if ( !v2 )
      sub_1406D044C();
  }
  return v2;
}
