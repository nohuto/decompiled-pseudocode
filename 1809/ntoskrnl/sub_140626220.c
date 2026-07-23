/*
 * XREFs of sub_140626220 @ 0x140626220
 * Callers:
 *     WbHeapExecuteCall @ 0x140625ADC (WbHeapExecuteCall.c)
 *     sub_140625C8C @ 0x140625C8C (sub_140625C8C.c)
 *     WbGetWarbirdThread @ 0x14062604C (WbGetWarbirdThread.c)
 *     WbFreeWarbirdProcess @ 0x140691158 (WbFreeWarbirdProcess.c)
 *     sub_1406D15F0 @ 0x1406D15F0 (sub_1406D15F0.c)
 * Callees:
 *     sub_1406D16CC @ 0x1406D16CC (sub_1406D16CC.c)
 */

signed __int64 __fastcall sub_140626220(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rbx

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 8));
    if ( !v2 )
      sub_1406D16CC();
  }
  return v2;
}
